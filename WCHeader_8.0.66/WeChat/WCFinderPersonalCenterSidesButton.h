@class NSString, UITapGestureRecognizer, MMBadgeView, NSAttributedString, UIImageView, YYLabel, UILabel, WCFinderRedDotTipsShowInfo;

@interface WCFinderPersonalCenterSidesButton : UIView

@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) MMBadgeView *leftBadgeView;
@property (retain, nonatomic) UILabel *redDotLabel;
@property (retain, nonatomic) MMBadgeView *rightBadgeView;
@property (retain, nonatomic) YYLabel *tailTextLabel;
@property (nonatomic) BOOL hasTouchDown;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) WCFinderRedDotTipsShowInfo *redDotInfo;
@property (retain, nonatomic) WCFinderRedDotTipsShowInfo *rightRedDotInfo;
@property (retain, nonatomic) NSString *tailText;
@property (retain, nonatomic) NSAttributedString *tailAttrText;
@property (retain, nonatomic) NSString *zeroCountRedDotaccessibilityLabel;
@property (retain, nonatomic) NSString *oneCountRedDotaccessibilityLabel;
@property (retain, nonatomic) NSString *multCountRedDotaccessibilityLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addTarget:(id)a0 action:(SEL)a1;
- (void)_handleClick;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (BOOL)showRedText;
- (BOOL)showRedDot;
- (void)layoutSubviews;
- (void)updateRedDotLeftRightConfig;
- (void)buildElementLayouts;
- (void).cxx_destruct;

@end
