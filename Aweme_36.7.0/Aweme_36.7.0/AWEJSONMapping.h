@interface AWEJSONMapping : NSObject

+ (void)trackParseTime:(long long)a0 forModel:(Class)a1;
+ (void)trackUrl:(id)a0 json:(id)a1 error:(id)a2;
+ (id)modelOfClass:(Class)a0 fromJSONDictionary:(id)a1 error:(id *)a2;

@end
