@class NSString, IESLiveGCDTimer, NSMutableSet, UIViewController;
@protocol IESLiveMediaPermissionManagerAction;

@interface IESLiveMediaPermissionManager : NSObject <HTSLiveAnchorActions, HTSLiveAudienceActions>

@property (nonatomic) BOOL isVideoInterrupt;
@property (retain, nonatomic) NSMutableSet *ignoreViewControllers;
@property (weak, nonatomic) UIViewController *hostViewController;
@property (nonatomic) BOOL isPresentingViewController;
@property (nonatomic) BOOL hasBeenSetup;
@property (nonatomic) unsigned long long strategies;
@property (nonatomic) BOOL isHostViewControllerVisable;
@property (retain, nonatomic) id<IESLiveMediaPermissionManagerAction> actionCreater;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) BOOL isLinkMicSmallWindowShowing;
@property (nonatomic) unsigned long long neededInterrupt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)liveWillAppear;
- (void)liveDidAppear;
- (void)liveWillDisappear;
- (void)liveDidDisappear;
- (void)startInteract;
- (void)resumeMediaSession;
- (void)interruptMediaSession;
- (void)setupApplicationActiveChangeStrategy;
- (void)setupHostViewControllerAppearChangeStrategy;
- (void)setupOtherPageOpenStrtegy;
- (void)interruptMediaSessionWithStrategy:(unsigned long long)a0;
- (id)strategMap:(unsigned long long)a0;
- (BOOL)onVideoCaptureRunning;
- (void)resumeMediaSessionWithStrategy:(unsigned long long)a0;
- (void)onVideoCaptureStartRunning:(id)a0;
- (void)onAudioCaptureStartRunning:(id)a0;
- (BOOL)isGuestVideoOrVirtualLinkmic;
- (void)WillResignActive;
- (void)onVideoCaptureStartInterrupted:(id)a0;
- (void)setupPresentViewControllerStrategy;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (void)setup;

@end
