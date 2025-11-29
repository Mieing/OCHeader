@class UIButton, NSString, UIView, UILabel, UITapGestureRecognizer;

@interface BDASifPopupHeaderView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UITapGestureRecognizer *maskGes;
@property (retain, nonatomic) UIView *navBar;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *sepLine;
@property (nonatomic) double radius;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ onLeftButtonClick;
@property (copy, nonatomic) id /* block */ onMaskViewClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)navBarHeight;
+ (double)headerHeight;

- (void)handleCloseButton:(id)a0;
- (void)handleTapOnMask;
- (void)makeConstraints;
- (void)popupDidChangeToStatus:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)setupUI;

@end
