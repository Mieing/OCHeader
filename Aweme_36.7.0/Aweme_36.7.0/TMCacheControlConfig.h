@class NSDictionary;

@interface TMCacheControlConfig : NSObject

@property (retain, nonatomic) NSDictionary *cacheControlConfig;

+ (id)sharedConfig;

- (void)updateCacheControlConfig:(id)a0;
- (id)cacheGroups;
- (BOOL)enable;
- (void).cxx_destruct;
- (id)init;

@end
