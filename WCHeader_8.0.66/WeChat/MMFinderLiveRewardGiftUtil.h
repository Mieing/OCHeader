@interface MMFinderLiveRewardGiftUtil : NSObject

+ (id)getThumbailSrcWithProductId:(id)a0 md5:(id)a1 targetUrl:(id)a2;
+ (id)getCustomizeRewardItem:(id)a0 extra:(id)a1;
+ (void)extractResourceId:(id *)a0 fromRewardItem:(id)a1;
+ (void)extractResourceId:(id *)a0 fromRewardItem:(id)a1 extra:(id)a2;
+ (void)extractThumbnailMd5:(id *)a0 thumbnailUrl:(id *)a1 fromRewardItem:(id)a2;
+ (void)extractThumbnailMd5:(id *)a0 thumbnailUrl:(id *)a1 fromRewardItem:(id)a2 extra:(id)a3;
+ (void)extractPreviewPagMd5:(id *)a0 previewPagUrl:(id *)a1 fromRewardItem:(id)a2;
+ (void)extractPreviewPagMd5:(id *)a0 previewPagUrl:(id *)a1 fromRewardItem:(id)a2 extra:(id)a3;
+ (void)extractAnimationPagMd5:(id *)a0 animationPagUrl:(id *)a1 fromRewardItem:(id)a2 extra:(id)a3;
+ (unsigned long long)getResourceMemoryCacheOptionsForRewardItem:(id)a0;
+ (unsigned long long)getResourceMemoryCacheOptionsForRewardItem:(id)a0 extra:(id)a1;

@end
