@class NSArray, NSString, AWEECShareCampaignExtraInfo, NSNumber, AWEURLModel;

@interface AWEShareSpikeModel : NSObject

@property (copy, nonatomic) AWEURLModel *bgImg;
@property (copy, nonatomic) AWEURLModel *titleImg;
@property (copy, nonatomic) NSArray *subTitles;
@property (copy, nonatomic) AWEURLModel *goodsCoverImg;
@property (copy, nonatomic) NSString *goodsTitle;
@property (copy, nonatomic) NSNumber *goodsSharePrice;
@property (copy, nonatomic) NSNumber *goodsOriginPrice;
@property (copy, nonatomic) NSString *goodPriceDesc;
@property (copy, nonatomic) NSNumber *endtime;
@property (copy, nonatomic) AWEURLModel *priceBgImg;
@property (nonatomic) long long purchaseStatusType;
@property (nonatomic) long long campaignStatusType;
@property (nonatomic) long long campaignType;
@property (copy, nonatomic) NSString *benefitDesc;
@property (retain, nonatomic) NSArray *tags;
@property (retain, nonatomic) AWEECShareCampaignExtraInfo *campaignExtra;
@property (copy, nonatomic) AWEURLModel *badgeCover;

- (void).cxx_destruct;

@end
