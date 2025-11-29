@class NSString, AWEIMEnterpriseModeDataBannerStatisticItem;

@interface AWEIMEnterpriseModeDataBannerStatsItemCellViewModel : NSObject

@property (retain, nonatomic) AWEIMEnterpriseModeDataBannerStatisticItem *statItem;
@property (nonatomic) double minimumRequiredWith;
@property (copy, nonatomic) NSString *showTips;
@property (nonatomic) double cellWidth;

+ (id)titleLabelFont;
+ (id)subtitleLabelFont;

- (void)__calculateMinimumRequiredWidth;
- (id)initWithStatsItem:(id)a0;
- (id)checkFTCIfShouldShowTips;
- (void)didShowTips;
- (void).cxx_destruct;

@end
