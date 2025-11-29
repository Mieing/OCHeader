@class UIImageView, MMUILabel;

@interface MMLiveRewardQuotaCell : MMTableViewCell

@property (retain, nonatomic) UIImageView *selectionIndicatorView;
@property (retain, nonatomic) MMUILabel *rewardQuotaLabel;
@property (nonatomic) unsigned int rewardQuota;

+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateWithRewardQuota:(unsigned int)a0 optionName:(id)a1 isSelected:(BOOL)a2;
- (void)layoutSubviews;
- (void)layoutUI;
- (void).cxx_destruct;

@end
