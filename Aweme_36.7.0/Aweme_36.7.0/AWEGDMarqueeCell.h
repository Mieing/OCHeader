@class NSString, UIImageView, UILabel, UIView;

@interface AWEGDMarqueeCell : UIView

@property (retain, nonatomic) NSString *avatarImage;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *marqueeContainer;

- (void)configureWithAvatar:(id)a0 text:(id)a1;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
