@class UIView, NSString, UITapGestureRecognizer, NSArray, UIPanGestureRecognizer, DUXButton, AWEElderModeAlertViewModel, UILabel;

@interface AWEElderModeAlertView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) AWEElderModeAlertViewModel *model;
@property (copy, nonatomic) id /* block */ dismissCallback;
@property (copy, nonatomic) id /* block */ clickOpenElderModeCallback;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *innerContentView;
@property (retain, nonatomic) NSArray *itemViews;
@property (retain, nonatomic) DUXButton *leftActionButton;
@property (retain, nonatomic) DUXButton *rightActionButton;
@property (retain, nonatomic) UITapGestureRecognizer *tapBlankAreaToDismissGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *swipeToDismissGesture;
@property (nonatomic) double currentSwipeOffset;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (nonatomic) BOOL contentViewDidPresent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contentViewBackgroundColor;
- (void)clickKnownButton;
- (id)initWithPopupMoedl:(id)a0 dismissCallback:(id /* block */)a1 clickOpenElderModeCallback:(id /* block */)a2;
- (BOOL)isModelValid:(id)a0;
- (id)imageFromCacheWithURLString:(id)a0;
- (double)contentViewHorizonMargin;
- (double)contentViewBottomMargin;
- (void)setupInnerContentView;
- (void)didEndShow;
- (void)didEndDismiss;
- (void)UIAccessibilityTargetChanged;
- (void)swipeToDismiss:(id)a0;
- (void)tapBlankAreaToDismiss;
- (void)clickExploreButton;
- (void)dismiss;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)isShowing;
- (BOOL)show;
- (void)setupUI;
- (void)setupContentView;

@end
