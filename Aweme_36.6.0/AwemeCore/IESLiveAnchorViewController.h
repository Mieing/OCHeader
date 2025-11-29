@class IESLiveAnchorContext, IESLiveDI, NSString, IESLiveExecutionContainer, IESLiveUIAspectUtil;
@protocol IESLiveRoomService;

@interface IESLiveAnchorViewController : UIViewController <IESLiveControllerLifeCycleProtocol>

@property (retain, nonatomic) IESLiveAnchorContext *context;
@property (retain, nonatomic) IESLiveDI *roomDI;
@property (retain, nonatomic) id<IESLiveRoomService> roomService;
@property (retain, nonatomic) IESLiveExecutionContainer *container;
@property (retain, nonatomic) IESLiveUIAspectUtil *uiAspectUtil;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateLiveRoom;
- (BOOL)isVCWillClose;
- (id)initWithContext:(id)a0 roomModel:(id)a1 config:(id)a2 modules:(id)a3;
- (void)attachDIContext;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupView;

@end
