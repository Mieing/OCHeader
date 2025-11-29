@class AVPlayerViewController, NSString, UIView, BDPUniqueID, NSObject;
@protocol BDPVideoPlayerProtocol, BDPPipStateDelegate, OS_dispatch_semaphore;

@interface BDPPluginPictureInPictureImpl : NSObject <BDPPictureInPicturePluginDelegate, AVPlayerViewControllerDelegate>

@property (weak, nonatomic) id<BDPPipStateDelegate> delegate;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *pipLock;
@property (nonatomic) BOOL supportPip;
@property (nonatomic) BOOL authPip;
@property (nonatomic) BOOL startPip;
@property (nonatomic) BOOL showRealPlyer;
@property (nonatomic) BOOL showShadowPlayer;
@property (nonatomic) BOOL observeForegroundNoti;
@property (nonatomic) BOOL resumeDidStopPip;
@property (weak, nonatomic) UIView *containerView;
@property (retain, nonatomic) AVPlayerViewController *shadowPlayerVC;
@property (weak, nonatomic) UIView *pipView;
@property (weak, nonatomic) id<BDPVideoPlayerProtocol> realPlayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalPlayerFrame;
@property (weak, nonatomic) id<BDPPipStateDelegate> authDelegate;
@property (weak, nonatomic) id<BDPVideoPlayerProtocol> authPlayer;
@property (retain, nonatomic) BDPUniqueID *authUniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (void)registerNotification;
- (void)startPictureInPictureWithDelegate:(id)a0 player:(id)a1 uniqueID:(id)a2;
- (void)updateVideoPlayer:(id)a0 uniqueID:(id)a1;
- (void)pausePictureInPictureWithPlayer:(id)a0;
- (void)stopPictureInPictureWithPlayer:(id)a0;
- (void)stopPictureInPictureWithPageID:(long long)a0;
- (void)stopPictureInPictureByForce;
- (void)stopPictureInPictureIfPermissionNotGranted;
- (BOOL)supportPictureInPictureWithDelegate:(id)a0 player:(id)a1 uniqueID:(id)a2;
- (id)getAVPlayerItemWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)createShadowPlayer;
- (void)playShadowPlayer;
- (BOOL)seekShadowPlayerTime;
- (void)removeShadowPlayer;
- (void)resetSizeToSuperViewWithView:(id)a0;
- (void)avplayerReachEnd;
- (void)audioSessionInterruptionNotification:(id)a0;
- (void)removeRealPlayer;
- (void)insertRealPlayerWithVC:(id)a0;
- (void).cxx_destruct;
- (void)stopPictureInPicture;
- (id)init;
- (void)unregisterNotification;
- (void)dealloc;
- (void)playerViewControllerDidStartPictureInPicture:(id)a0;
- (void)playerViewControllerWillStopPictureInPicture:(id)a0;
- (void)playerViewControllerDidStopPictureInPicture:(id)a0;
- (BOOL)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(id)a0;
- (void)playerViewController:(id)a0 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)a1;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;

@end
