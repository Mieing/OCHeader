@class UILabel, DUXRadioBox, AWELongPressPanelAdsActionViewModel;

@interface AWELongPressPanelAdsActionViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXRadioBox *checkBox;
@property (retain, nonatomic) AWELongPressPanelAdsActionViewModel *adsActionViewModel;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateState;
- (void)setUpUI;

@end
