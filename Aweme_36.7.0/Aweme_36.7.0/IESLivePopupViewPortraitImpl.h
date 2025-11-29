@class UIScrollView, NSString, IESLivePopupPanServiceImp, IESLivePopupItem, UIView, UITapGestureRecognizer;
@protocol IESLivePopupAction;

@interface IESLivePopupViewPortraitImpl : UIView <UIGestureRecognizerDelegate, CAAnimationDelegate, IESLivePopupView, IESLivePopupDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL showing;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } expectedShowingFrame;
@property (nonatomic) BOOL isKeyboardShow;
@property (nonatomic) BOOL listDidReachTop;
@property (nonatomic) BOOL listDidReachLeft;
@property (nonatomic) BOOL listIsDragging;
@property (weak, nonatomic) IESLivePopupItem *item;
@property (weak, nonatomic) UIScrollView *insideListView;
@property (retain, nonatomic) UIView *accessView;
@property (retain, nonatomic) IESLivePopupPanServiceImp *panService;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) UIView *animContainer;
@property (retain, nonatomic) id<IESLivePopupAction> popupAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupPanGesture;
- (void)onHideCompletion;
- (void)showBackAfterPan;
- (void)showInAutoLayout;
- (void)showforKey:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })showingFrame;
- (void)setVisible:(BOOL)a0 withAnimated:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hideFrame;
- (void)setupFollowGesture;
- (void)setupPushGesture;
- (void)showAnimationInAutoLayout;
- (void)showPopupAnimWithKey:(id)a0;
- (void)showPushAnimWithKey:(id)a0;
- (void)hidePopupAnim;
- (void)hidePushAnim;
- (void)doSomethingWhenDraggingEnd:(id)a0;
- (BOOL)shouldShowHideAnimWebp;
- (void)showHideAnimWebp;
- (void)p_handleAnimationEnded;
- (void)tap:(id)a0;
- (void)animationDidStart:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)removeFromSuperview;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)hide;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)show;
- (id)initWithItem:(id)a0;
- (void)setupUI;
- (void)setupAccessibility;
- (void)updateFrame;
- (double)bottomOffset;
- (void)clean;
- (void)p_addObservers;

@end
