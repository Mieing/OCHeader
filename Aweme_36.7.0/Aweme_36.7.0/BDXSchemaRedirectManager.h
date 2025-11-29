@interface BDXSchemaRedirectManager : NSObject

+ (BOOL)isRedirectSchema:(id)a0;
+ (id)getHostInfo;
+ (void)reportStatusWith:(id)a0 category:(id)a1 extra:(id)a2;
+ (void)reportFailWith:(id)a0 category:(id)a1 extra:(id)a2;
+ (id)getHostWithURLString:(id)a0;
+ (id)sharedInstance;

- (void)resolveSchemaWithSchema:(id)a0 completion:(id /* block */)a1;
- (id)resolveSchemaLocally:(id)a0 scene:(id)a1;
- (void)resolveSchemaWithSchema:(id)a0 scene:(id)a1 completion:(id /* block */)a2;
- (void)pollRedirectConfig;
- (void)reportWithSchema:(id)a0 scene:(id)a1 result:(id)a2 config:(id)a3 startTime:(double)a4;
- (void)resolveSchemaWithSchema:(id)a0 scene:(id)a1 loopCount:(long long)a2 completion:(id /* block */)a3;
- (id)resolveSchemaLocally:(id)a0;
- (id)init;
- (void)setConfigUrl:(id)a0;

@end
