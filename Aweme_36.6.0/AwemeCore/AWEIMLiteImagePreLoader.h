@interface AWEIMLiteImagePreLoader : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)noitfyPreloadCanStart;
- (void)p_preload;
- (id)p_preloadMethodForBundle;
- (id)p_preloadList;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
