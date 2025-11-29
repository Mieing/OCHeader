@class MMFinderLiveFansGroupUpgradeInfo, MMUILabel;

@interface MMFinderLiveFansGroupUpgradeInfoTableCell : MMFinderLiveFansGroupDetailBaseTableViewCell

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *upgradeConditionLabel;
@property (retain, nonatomic) MMUILabel *intimacyIncCountLabel;
@property (retain, nonatomic) MMUILabel *upgradeStatusLabel;
@property (retain, nonatomic) MMFinderLiveFansGroupUpgradeInfo *upgradeInfo;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)prepareForReuse;
- (void)updateWithUpgradeInfo:(id)a0;
- (void).cxx_destruct;

@end
