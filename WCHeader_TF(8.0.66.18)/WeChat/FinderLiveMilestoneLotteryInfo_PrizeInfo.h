@class NSString, FinderLiveMilestoneLotteryInfo_PrizeInfo_ProductJumpInfo, FinderLiveMilestoneLotteryInfo_PrizeInfo_GiftInfo, FinderLiveMilestoneLotteryInfo_PrizeInfo_MiniAppInfo;

@interface FinderLiveMilestoneLotteryInfo_PrizeInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *imgUrl;
@property (retain, nonatomic) NSString *wording;
@property (nonatomic) unsigned int count;
@property (nonatomic) unsigned int prizeType;
@property (retain, nonatomic) FinderLiveMilestoneLotteryInfo_PrizeInfo_ProductJumpInfo *productJumpInfo;
@property (retain, nonatomic) FinderLiveMilestoneLotteryInfo_PrizeInfo_GiftInfo *giftInfo;
@property (retain, nonatomic) FinderLiveMilestoneLotteryInfo_PrizeInfo_MiniAppInfo *miniAppInfo;

+ (void)initialize;

@end
