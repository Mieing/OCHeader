@interface QOfflineMapService : NSObject

+ (id)singleton;

- (BOOL)isOfflineMapEnable;
- (void)setOfflineMapEnable:(BOOL)a0;
- (id)init;

@end
