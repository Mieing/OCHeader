@class NSString, NSMutableArray, FinderLiveSyncFeedPreviewMultiStyleInfoResp_RecommendWordingInfo;

@interface FinderLiveSyncFeedPreviewMultiStyleInfoResp_HotShopInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *hotShopImgUrlList;
@property (retain, nonatomic) NSString *hotShopRecommendWording;
@property (nonatomic) unsigned int jumpType;
@property (nonatomic) unsigned int guideBarType;
@property (retain, nonatomic) FinderLiveSyncFeedPreviewMultiStyleInfoResp_RecommendWordingInfo *recommendWordingInfo;

+ (void)initialize;

@end
