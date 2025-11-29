@class IESIMButton, UIImageView, UIVisualEffectView, UIView, UILabel, UIButton;

@interface AWEIMFansCouponTopEntryView : UIView

@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIImageView *couponImageView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIButton *entryBtn;
@property (retain, nonatomic) IESIMButton *closeBtn;
@property (nonatomic) long long couponCount;

+ (double)contentHeight;

- (void)refreshBackgroundColorWhileHasBackground:(BOOL)a0;
- (void)updateCouponCount:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
