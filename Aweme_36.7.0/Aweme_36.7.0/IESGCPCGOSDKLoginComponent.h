@class NSString;

@interface IESGCPCGOSDKLoginComponent : IESGCPCGInstanceBaseComponent <IESGCPCGMessageChannelActions, IESGCPCGOSDKLoginRouter, IESGCPCGContainerActions, IESGCPCGLaunchProcessActions>

@property (nonatomic) long long currentLoginStatus;
@property (nonatomic, getter=isInitGameSDKSucceeded) BOOL initGameSDKSucceeded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long loginStatus;

- (void)didSetGameCPDIContext;
- (void)onInitProcessResult:(BOOL)a0 code:(long long)a1 errMsg:(id)a2 extraInfo:(id)a3;
- (void)componentDidAttached;
- (void)didReceiveOSDKChannelMessage:(id)a0;
- (void)containerWillMoveToViewStackInPresent:(BOOL)a0;
- (void)trackOSDKTimeOutLaterIfNeeded;
- (void)didReceiveInternalSDKEvent:(id)a0;
- (id)timeoutConfig;

@end
