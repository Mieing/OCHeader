@class UIImageView, UILabel, UIImage;

@interface AWELunaUgPopViewElement : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) long long *count;

- (void)updateCount:(id)a0;
- (void)updateWithIcon:(id)a0 count:(id)a1;
- (id)initWithIcon:(id)a0 count:(id)a1;
- (void).cxx_destruct;
- (void)updateTintColor:(id)a0;
- (void)setUpUI;

@end
