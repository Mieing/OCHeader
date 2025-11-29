@class UIColor, NSString;

@interface IESLiveGameOpenPlatformRevenueRankListCellModel : NSObject

@property (nonatomic) unsigned long long rank;
@property (retain, nonatomic) UIColor *rankColor;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *avatarImageUrl;
@property (copy, nonatomic) NSString *revenueStringValue;

- (id)rankColorWithRank:(long long)a0;
- (id)revenueStringValueWithDiamonds:(long long)a0;
- (id)initWithRankInfo:(id)a0 rank:(long long)a1;
- (void).cxx_destruct;

@end
