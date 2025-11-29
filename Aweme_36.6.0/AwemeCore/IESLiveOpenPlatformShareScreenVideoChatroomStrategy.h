@class NSString;

@interface IESLiveOpenPlatformShareScreenVideoChatroomStrategy : IESLiveOpenPlatformShareScreenBaseStrategy <IESLiveSocialInteractAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)shouldAddCameraPreviewInput;
- (long long)castScreenStrategy;
- (void)changeScreenCastUIStatusWhenReturnButtonClicked;
- (void)forceStopCastScreenWithRunnerResponse:(id)a0 continueBlock:(id /* block */)a1;
- (id)anchorCameraPreviewRatioTuple;
- (id)interactCastInfo;
- (id)interactCameraPreview;
- (void)clickStartShareScreenWithCallback:(id /* block */)a0;
- (void)clickStopShareScreenWithCallback:(id /* block */)a0;
- (void)stopShareScreenWhenQuitWithCallback:(id /* block */)a0;
- (id)openContainerInterface;
- (int)profile;
- (long long)businessType;

@end
