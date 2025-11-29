@class UIButton, NSString, UIView, UIPanGestureRecognizer, AWERVDetailPageContext;

@interface AWERVMetaPanelViewController : UIViewController <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originFrame;
@property (nonatomic) double panelHeight;
@property (retain, nonatomic) AWERVDetailPageContext *pageContext;
@property (nonatomic) BOOL isAllowClickMaskArea;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic, getter=isFromFeedShare) BOOL fromFeedShare;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)selfPanned:(id)a0;
- (void)setToFullContainerForPad;
- (void)handleCloseButtonAccessibilityAnnouncementIfNeed;
- (id)panelContentView;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)viewDidLayoutSubviews;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)contentScrollView;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)viewDidLoad;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)loadView;
- (void)setupContentView;
- (void)closeButtonTapped;

@end
