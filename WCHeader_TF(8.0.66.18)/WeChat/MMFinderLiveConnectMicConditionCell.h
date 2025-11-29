@class UILabel, UIImageView, UIView;

@interface MMFinderLiveConnectMicConditionCell : MMTableViewCell

@property (retain, nonatomic) UILabel *typeTitle;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIImageView *checkIconView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (void)updateWithTitle:(id)a0;
- (void)layoutSubviews;
- (void)toggle;
- (void)unToggle;
- (void).cxx_destruct;

@end
