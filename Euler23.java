/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package euler23;

import java.util.*;
/**
 *
 * @author steven
 */
public class Euler23 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        System.out.println("hello");
        // TODO code application logic here
        HashMap divisorMap = getDivisorMap(24);
        //for(int i = 0; i < divisorMap.size(); i++)
        // Get a set of the entries
      Set set = divisorMap.entrySet();
      // Get an iterator
      Iterator i = set.iterator();
      // Display elements
      while(i.hasNext()) {
         Map.Entry me = (Map.Entry)i.next();
         System.out.print(me.getKey() + ": ");
         System.out.println(me.getValue());
      }
        
      System.out.println("hello");
        
    }
    
    
    public static ArrayList isAbundant(int n){
        
    }
    
    // get map of numbers and their corresponding divisors
    public static HashMap getDivisorMap(int n){
        HashMap divisorMap = new HashMap();
        for(int i = 1; i <= n; i++){
            ArrayList divisorList = new ArrayList();
            int limit = (n % 2 == 0) ? n / 2 : n / 3;
            for(int j = 1; j <= limit; j++){
                if(n % i == 0)
                    divisorList.add(j);
            }
            divisorMap.put(i, divisorList);
        }
        return divisorMap;
    }
    
}
