@class BDImageCache;

@interface AWEIMAvatarCacheManager : NSObject

@property (nonatomic) BOOL useCustomCache;
@property (retain, nonatomic) BDImageCache *customAvatarCache;

+ (id)defaultAvatarPlaceholder;
+ (id)sharedInstance;
+ (BOOL)enableCache;

- (long long)optionAfterAppliedCacheStrategy:(long long)a0;
- (void).cxx_destruct;
- (id)cacheName;
- (id)init;
- (id)imageCache;

@end
