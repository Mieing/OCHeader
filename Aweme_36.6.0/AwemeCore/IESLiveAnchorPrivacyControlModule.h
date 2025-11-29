@class NSString, IESLiveAnchorCameraPermissionManager, IESLiveAnchorContext;

@interface IESLiveAnchorPrivacyControlModule : IESLiveAnchorExecutionModule <HTSLiveAnchorActions, IESLiveAnchorStoreService, HTSLiveAnchorActions>

@property (retain, nonatomic) IESLiveAnchorCameraPermissionManager *cameraPermissionManager;
@property (retain, nonatomic) IESLiveAnchorContext *context;
@property (nonatomic) BOOL pauseOnBackground;
@property (nonatomic) BOOL pauseOnEnterNewPage;
@property (nonatomic) BOOL cancelAutoPause;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleWithContext:(id)a0 privacyConfig:(id)a1;

- (void)bindService;
- (void)enablePauseOnBackground:(BOOL)a0 caller:(id)a1;
- (void)enablePauseOnEnterNewPage:(BOOL)a0 caller:(id)a1;
- (void)enableCancelAutoPause:(BOOL)a0 caller:(id)a1;
- (BOOL)shouldCancelAutoPause;
- (void)updateLiveRoom;
- (BOOL)topVCIsAnchor;
- (BOOL)shouldResumeAudioCaptureWhenAppBecomeActive;
- (BOOL)shouldPauseOnBackground;
- (BOOL)shouldPauseOnEnterNewPage;
- (BOOL)isInPKAudioPunish;
- (id)initWithContext:(id)a0 privacyConfig:(id)a1;
- (void).cxx_destruct;
- (void)setup;

@end
