@class BDImageCache;

@interface AWEMVChannelImageCache : NSObject

@property (class, readonly, nonatomic) BDImageCache *channelImageCache;
@property (class, readonly, nonatomic) BDImageCache *firstRenderCacheImageCache;

+ (id)preferredCacheNameWithModel:(id)a0;
+ (void)prepareIfNeeded;

@end
