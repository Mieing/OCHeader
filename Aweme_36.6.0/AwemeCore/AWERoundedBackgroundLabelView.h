@class UILabel, UIImageView, NSString;

@interface AWERoundedBackgroundLabelView : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) NSString *text;

- (void).cxx_destruct;
- (id)init;
- (void)setContentCompressionResistancePriority:(float)a0 forAxis:(long long)a1;
- (void)setupUI;

@end
