@class UIView, NSString, UITapGestureRecognizer, AWEAwemeModel, AWEIMDouyinRedPacketInfoResponse, UIScrollView, MASConstraint, UIViewController, UIPanGestureRecognizer, BDXBridgeEventSubscriber;
@protocol BDXContainerProtocol, AWEAwemePlayInteractionPanelControllerProtocol;

@interface AWEPayVideoRPHalfVC : UIViewController <UIGestureRecognizerDelegate, BDXContainerLifecycleProtocol>

@property (retain, nonatomic) UIView *scrollContentView;
@property (retain, nonatomic) MASConstraint *contentBottomConstraint;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (nonatomic) BOOL isShrink;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) UIViewController<BDXContainerProtocol> *lynxVC;
@property (nonatomic) BOOL isVideoCover;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEIMDouyinRedPacketInfoResponse *info;
@property (weak, nonatomic) id<AWEAwemePlayInteractionPanelControllerProtocol> panelController;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) double currentOffset;
@property (nonatomic) double lastTrans;
@property (weak, nonatomic) UIScrollView *lynxScrollerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (BOOL)shouldShowComment;
- (double)getPanelHeight;
- (void)showOnView;
- (void)p_dismiss;
- (void)p_subscribeEvent;
- (void)p_unsubscribeEvent;
- (id)initWithAwemeModel:(id)a0 info:(id)a1 panelController:(id)a2 completion:(id /* block */)a3;
- (BOOL)shouldShowRewardButton;
- (void)p_present;
- (void)p_dismissAnimation;
- (void)p_addGestureWithLynxUIName:(id)a0;
- (void)p_gestureProcess:(id)a0;
- (void)p_restoreWithDuration:(double)a0;
- (id)getLynxVC;
- (void)p_setupUI;
- (void)handlePan:(id)a0;
- (void).cxx_destruct;
- (BOOL)isReady;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)handleTap:(id)a0;

@end
