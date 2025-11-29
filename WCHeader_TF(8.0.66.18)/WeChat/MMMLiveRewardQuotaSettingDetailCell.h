@class UIView, MMUILabel, MMUIButton;

@interface MMMLiveRewardQuotaSettingDetailCell : MMUIView

@property (nonatomic) unsigned long long rewardQuota;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *rewardQuotaLabel;
@property (retain, nonatomic) MMUIButton *arrowButton;
@property (retain, nonatomic) UIView *separatorLine;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateRewardQuota:(unsigned long long)a0;
- (void).cxx_destruct;

@end
