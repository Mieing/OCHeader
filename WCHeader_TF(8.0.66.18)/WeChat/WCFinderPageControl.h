@class WCFinderPageControlStyleConfig, UISwipeGestureRecognizer, NSString, NSMutableArray;

@interface WCFinderPageControl : UIControl <UIGestureRecognizerDelegate>

@property (retain, nonatomic) WCFinderPageControlStyleConfig *config;
@property (retain, nonatomic) NSMutableArray *dotsView;
@property (retain, nonatomic) UISwipeGestureRecognizer *swipeLeft;
@property (retain, nonatomic) UISwipeGestureRecognizer *swipeRight;
@property (nonatomic) long long numberOfPages;
@property (nonatomic) unsigned long long currentPage;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } touchInsets;
@property (nonatomic) BOOL isMoving;
@property (nonatomic) BOOL disableChangeEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)setupValues;
- (void)setupGestures;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateCurrentPageDisplay;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)onSwipeLeft;
- (void)onSwipeRight;
- (void)onTap:(id)a0;
- (void).cxx_destruct;

@end
