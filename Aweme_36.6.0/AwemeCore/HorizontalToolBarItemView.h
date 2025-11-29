@class NSString, UIImageView, UIView, UILabel, HorizontalToolBarItem;
@protocol _TtP9AWELottie13AWELottieView_;

@interface HorizontalToolBarItemView : UIControl {
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lottieView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_label;
    void /* unknown type, empty encoding */ rotateAngle;
    void /* unknown type, empty encoding */ onClick;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic) long long type;
@property (nonatomic, retain) HorizontalToolBarItem *barItem;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UIView<_TtP9AWELottie13AWELottieView_> *lottieView;
@property (nonatomic, retain) UILabel *label;

- (void)itemDidClick:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)dealloc;

@end
