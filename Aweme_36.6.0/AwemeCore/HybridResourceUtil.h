@interface HybridResourceUtil : NSObject

+ (id)extractURLDetail:(id)a0 withPrefixList:(id)a1;
+ (id)extractURLDetail:(id)a0 taskConfig:(id)a1 falconPrefixList:(id)a2;
+ (id)getForestRLInstance;
+ (id)extractURLDetail:(id)a0 accessKey:(id)a1 context:(id)a2 falconPrefixList:(id)a3;
+ (id)resolvedUrl:(id)a0;
+ (id)findPrefixInParams:(id)a0 sourceURL:(id)a1;
+ (Class)getForestRLClass;

@end
