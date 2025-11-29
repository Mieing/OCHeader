@interface IESECLiveDictionaryUtil : NSObject

+ (void)recursivelyMergeDictionary:(id)a0 intoDictionary:(id)a1;
+ (void)mergeSameKeyFormDictionary:(id)a0 toDictionary:(id)a1;
+ (id)getOrSetObjectForKey:(id)a0 ofClass:(Class)a1 inDictionary:(id)a2 withGeneratorBlock:(id /* block */)a3;
+ (id)mergeDictionary:(id)a0 withDictionary:(id)a1;

@end
