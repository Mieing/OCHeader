@class NSString;

@interface IESLiveLOTAnimationCache : NSObject <LOTImageCache>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearLottieAnimationCache;
+ (id)animationCacheForKey:(id)a0;
+ (void)removeAnimationCacheForKey:(id)a0;
+ (id)lottieImageForKey:(id)a0;
+ (void)cacheLottieImage:(id)a0 forKey:(id)a1;
+ (void)removeLottieImageCacheForKey:(id)a0;
+ (void)clearLottieImageCache;
+ (id)sharedInstance;

- (id)imageForKey:(id)a0;
- (void)setImage:(id)a0 forKey:(id)a1;

@end
