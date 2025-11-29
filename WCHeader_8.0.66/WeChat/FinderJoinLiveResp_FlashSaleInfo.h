@class FinderLiveFlashSaleInfo, FinderLiveAnchorFlashSaleConfigInfo;

@interface FinderJoinLiveResp_FlashSaleInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderLiveFlashSaleInfo *targetedFlashSaleInfo;
@property (retain, nonatomic) FinderLiveAnchorFlashSaleConfigInfo *anchorFlashSaleConfig;

+ (void)initialize;

@end
