@interface IESLiveBlurBackgroundImageManager : NSObject

+ (void)preLoadBlurBackgroundImageWithImageUrl:(id)a0 roomId:(id)a1;
+ (id)blurBackgroundImageCacheForRoomId:(id)a0;
+ (BOOL)enableServerBlurBackgroundImage;
+ (void)cacheBlurImageWithRoomId:(id)a0 blurImage:(id)a1;
+ (id)blurImageCacheDict;
+ (id)blurImageCacheKeyArray;

@end
