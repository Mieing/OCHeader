@class NSString, IESLiveDI, HTSLiveRecordCameraProcesser, HTSEventContext, HTSLive4LayerContainerView, IESLiveComponentContext, IESLiveDirectorRoomModel;
@protocol IESLiveComponentBootLoaderProtocol, HTSLivePluginLayoutMachineProvider, IESLiveRecoder;

@interface IESLiveDirectorViewController : UIViewController <IESLiveDirectorStatusService>

@property (retain, nonatomic) IESLiveDI *roomDI;
@property (retain, nonatomic) id<IESLiveComponentBootLoaderProtocol> componentLoader;
@property (weak, nonatomic) HTSLive4LayerContainerView *containerView;
@property (retain, nonatomic) id<HTSLivePluginLayoutMachineProvider> pluginLayoutMachine;
@property (retain, nonatomic) HTSLiveRecordCameraProcesser *cameraProcessor;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *pageContext;
@property (retain, nonatomic) IESLiveDirectorRoomModel *roomModel;
@property (retain, nonatomic) id<IESLiveRecoder> recoder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAppWillResignActive;
- (void)onAppBecomeActive;
- (id)initWithRoomModel:(id)a0;
- (void)preloadPluginComponents;
- (void)closeDirectorRoom;
- (void)loadVideoEffectProcessor;
- (void)clearController;
- (void)clearAndQuit;
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
- (void)prepareForClose;

@end
