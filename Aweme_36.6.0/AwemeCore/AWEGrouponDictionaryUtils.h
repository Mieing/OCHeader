@interface AWEGrouponDictionaryUtils : NSObject

+ (id)keyPathSubWithIndex:(unsigned long long)a0 keyPath:(id)a1;
+ (id)replaceValueForKeyPath:(id)a0 inDictionary:(id)a1 withValue:(id)a2 onlyIfNull:(BOOL)a3 coverType:(unsigned long long)a4 replaceResult:(id *)a5;
+ (BOOL)isDictionary:(id)a0 aSubsetOfDictionary:(id)a1;
+ (id)findNestedValueInDict:(id)a0 withKeyPath:(id)a1;

@end
