@interface CepCache : NSObject

+ (id)sharedInstance;

- (void)uncacheObject:(id)a0;
- (id)init;
- (void)cacheObject:(id)a0;
- (oneway void)release;
- (id)retain;

@end
