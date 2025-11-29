@interface BDUGLuckyActivityTaskSchemaManager : NSObject

+ (void)preStartupUnionSchemaModule;
+ (id)sharedInstance;

- (void)registerAscribeSchema;
- (void)handleActivityTask:(id)a0;

@end
