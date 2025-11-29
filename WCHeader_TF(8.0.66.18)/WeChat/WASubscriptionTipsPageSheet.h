@class UIImageView, UILabel, UIButton;

@interface WASubscriptionTipsPageSheet : WAPageSheet

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titlelLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIButton *okButton;
@property (copy, nonatomic) id /* block */ okAction;

- (double)contentHeight;
- (id)init;
- (void)setupUI;
- (void).cxx_destruct;

@end
