@class NSString, NSMutableSet, IESLiveMediaPermissionManager;

@interface IESLiveInteractiveMediaPermissionProviderImpl : NSObject <IESLiveInteractiveMediaPermissionProvider>

@property (retain, nonatomic) IESLiveMediaPermissionManager *manager;
@property (retain, nonatomic) NSMutableSet *ignoreViewControllers;
@property (retain, nonatomic) NSMutableSet *videoCaptureStartIgnoreViewControllers;
@property (nonatomic) BOOL isViewAppearing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)startInteract;
- (BOOL)isIgnoreTopViewController;
- (BOOL)isVideoCaptureStartIgnoreViewController;
- (BOOL)isVideoInterrupt;
- (void)releaseMonitor;
- (void)resumeMediaSession;
- (void)interruptMediaSession;
- (BOOL)enableAudienceMediaCaptureOpt;
- (void).cxx_destruct;
- (void)registerMonitor:(unsigned long long)a0;

@end
