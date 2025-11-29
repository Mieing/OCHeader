@interface IESGCPDictionaryUtil : NSObject

+ (id)recursiveDictionaryByMerging:(id)a0 into:(id)a1;
+ (id)dict:(id)a0 dictValueForKey:(id)a1 defalutValue:(id)a2;
+ (id)dict:(id)a0 arrayValueForKey:(id)a1 defalutValue:(id)a2;
+ (id)dict:(id)a0 dictValueForKey:(id)a1;
+ (id)dict:(id)a0 arrayValueForKey:(id)a1;

@end
