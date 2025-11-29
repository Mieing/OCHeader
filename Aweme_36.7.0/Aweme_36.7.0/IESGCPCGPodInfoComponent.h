@class NSString, NSDictionary;

@interface IESGCPCGPodInfoComponent : IESGCPCGInstanceBaseComponent <IESGCPCGInstanceActions, IESGCPCGLaunchProcessActions>

@property (nonatomic) BOOL launchResult;
@property (nonatomic) BOOL launchSuccess;
@property (nonatomic) long long launchResultCode;
@property (copy, nonatomic) NSString *launchErrorMsg;
@property (copy, nonatomic) NSDictionary *podInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void)playInstance:(id)a0 didReceivePodInfo:(id)a1;
- (void)onInitProcessResult:(BOOL)a0 code:(long long)a1 errMsg:(id)a2 extraInfo:(id)a3;
- (void)_reportPodInfoVersionLaunchResult;
- (void).cxx_destruct;

@end
