@class IESLiveDI, NSString, IESLiveExecutionContainer, IESLiveGuideContainerContext, HTSLiveRoom;

@interface HTSLiveGuideViewController : UIViewController <IESLiveControllerLifeCycleProtocol, IESLiveOpenLiveProtocol>

@property (retain, nonatomic) IESLiveDI *guideDI;
@property (retain, nonatomic) IESLiveGuideContainerContext *context;
@property (retain, nonatomic) IESLiveExecutionContainer *executionContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL enableBack;
@property (copy, nonatomic) id /* block */ backHandler;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (copy, nonatomic) id /* block */ buildCameraAfterPassAuthBlock;
@property (retain, nonatomic) HTSLiveRoom *room;
@property (copy, nonatomic) id /* block */ hideBottomBarHandler;

- (void)setShootWay:(id)a0;
- (void)setupContainer;
- (void)willSwitchToOtherTab;
- (void)willSwitchToLiveTab;
- (void)didEnterLiveTabWithStartTime:(double)a0;
- (void)setEntryFaceSticker:(id)a0;
- (void)updateLiveModel:(id)a0;
- (BOOL)isVCWillClose;
- (void).cxx_destruct;
- (void)setCamera:(id)a0;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setActive:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)prefersNavigationBarHidden;

@end
