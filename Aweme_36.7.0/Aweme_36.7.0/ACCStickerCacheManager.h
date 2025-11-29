@interface ACCStickerCacheManager : NSObject

+ (id)sharedInstance;

- (id)getStickerInfoCategoryCachePath;
- (id)getStickerInfoCachePathWithCategoryId:(id)a0;
- (id)getStickerInfoCacheDic;
- (void)writeStickerPannelCategoryResponseModelInfo:(id)a0;
- (void)writeStickerPannelDataResponseModelInfo:(id)a0 WithCategoryId:(id)a1;
- (id)readStickerPannelCategoryResponseModelInfo;
- (id)readStickerPannelDataResponseModelInfoWithCategoryId:(id)a0;

@end
