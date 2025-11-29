@class NSDictionary, NSString;

@interface IESGCPRTCMultiPathComponent : IESGCPCGInstanceBaseComponent <IESGCPCGRTCMultiPathRouter, IESGCPCGInstanceActions>

@property (copy, nonatomic) NSDictionary *multiPathConfig;
@property (nonatomic) double firstFrameTime;
@property (nonatomic) long long rtcNetTraffic;
@property (nonatomic, getter=isMultiPathEnabled) BOOL multiPathEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isAwemeGeneralMultiPathEnabled;
- (void)enableAwemeGeneralMultiPathOn;
- (void)didSetGameCPDIContext;
- (void)playInstance:(id)a0 playStatusDidUpdated:(long long)a1 info:(id)a2;
- (void)playInstance:(id)a0 didReceivePlayStats:(id)a1;
- (long long)cellularConsumeToday;
- (void)calcRTCCellularNetTraffic:(long long)a0;
- (void)startRTCMultiPathIfNeed:(id)a0;
- (void)startMultiPath;
- (BOOL)shouldShowMultiPathToast:(id)a0;
- (void)showMultiPathToast;
- (void)showConsumeTrafficToastIfNeed;
- (long long)cellularConsumeToastCountToday;
- (BOOL)isTodayWithTimestamp:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
