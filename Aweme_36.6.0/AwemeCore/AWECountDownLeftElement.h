@class NSString, AWECountDownAnchorView, UIView, AWECountDownElementViewModel;

@interface AWECountDownLeftElement : AWEPlayInteractionLeftElement <AWECountDownAnchorViewDelegate, AWEElementSelfFilterProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWECountDownAnchorView *timerView;
@property (retain, nonatomic) AWECountDownElementViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (BOOL)shouldActiveWithModel:(id)a0 context:(id)a1;

- (void)videoDidActivity;
- (void)initializeElement;
- (void)viewController_viewDidDisappear;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)addNotifications;
- (void)bindEvent;
- (void)timerViewDidClicked;
- (void)videoPauseIfNeed:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)reset;
- (void)resume;
- (void)viewDidLoad;
- (void)dealloc;

@end
