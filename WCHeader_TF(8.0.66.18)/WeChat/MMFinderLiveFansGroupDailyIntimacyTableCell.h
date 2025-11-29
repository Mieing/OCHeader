@class MMFinderLiveFansGroupIntimacyInfo, MMUILabel;

@interface MMFinderLiveFansGroupDailyIntimacyTableCell : MMFinderLiveFansGroupDetailBaseTableViewCell

@property (retain, nonatomic) MMUILabel *dailyTaskLabel;
@property (retain, nonatomic) MMUILabel *speedupLabel;
@property (retain, nonatomic) MMUILabel *dailyMaxIntimacy;
@property (retain, nonatomic) MMUILabel *dailyCurIntimacy;
@property (retain, nonatomic) MMUILabel *dailyDescLabel;
@property (retain, nonatomic) MMFinderLiveFansGroupIntimacyInfo *intimacyInfo;

+ (double)getPreferHeightWithIntimacyInfo:(id)a0;
+ (double)getCellBottomPadding;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)configWithIntimacyInfo:(id)a0;
- (void)layoutDailyTaskLabel;
- (void).cxx_destruct;

@end
