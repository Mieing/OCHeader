@class NSString;
@protocol IESGCPCGContainerDelegate;

@interface IESGCPXPlayGameViewController : UIViewController <IESGCPDIContextSubscriber, IESGCPCGContainer>

@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isBackground;
@property (nonatomic) long long beforePresentInterfaceOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESGCPCGContainerDelegate> delegate;

- (BOOL)awe_shouldBypassPresentationHook;
- (id)hmdPageExtension;
- (void)didSetGameCPDIContext;
- (id)relayContainer;
- (void)_addObserverOnWillAppear;
- (void)_removeObserverOnWillDisappear;
- (void)_startPerfSampler;
- (void)_stopPerfSampler;
- (void)_resumeKeyboardToolBarOrientationFix;
- (void)_fixKeyboardToolBarOrientation;
- (void)_onKeyboardWillShow:(id)a0;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)a0;
- (id)viewController;
- (id)containerView;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)appDidEnterBackground;
- (void)appDidBecomeActive;

@end
