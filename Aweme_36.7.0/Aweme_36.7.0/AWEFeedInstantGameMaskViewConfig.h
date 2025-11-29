@class NSString, AWEFeedInstantGameCouponModel;

@interface AWEFeedInstantGameMaskViewConfig : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *enterBtnTitle;
@property (nonatomic) BOOL isHardAd;
@property (nonatomic) BOOL shouldShowClickTips;
@property (retain, nonatomic) AWEFeedInstantGameCouponModel *couponModel;
@property (nonatomic) long long gamePromotionStyle;
@property (nonatomic) long long goldCoinNum;

- (void).cxx_destruct;

@end
