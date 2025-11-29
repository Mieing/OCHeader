@class NSArray, NSMutableDictionary, MMLiveTaskId, NSString;
@protocol MMLivePerformanceViewModelDelegate;

@interface MMLivePerformanceViewModel : NSObject <MMLiveTaskMgrExt>

@property (copy, nonatomic) NSArray *performanceKeys;
@property (retain, nonatomic) NSMutableDictionary *performanceTexts;
@property (readonly, nonatomic) MMLiveTaskId *taskId;
@property (weak, nonatomic) id<MMLivePerformanceViewModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)dealloc;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (id)performanceKeysForTaskId:(id)a0;
- (void)notifyUpdate;
- (void)prepareNotifyUpdate;
- (void)updateMetricsInfo:(id)a0 liveTask:(id)a1;
- (void)updateGPUInfo;
- (void)updateGPUInfoWithGPUUtilization:(id)a0;
- (void)updateThermalDescription:(id)a0;
- (void)updateEnergyModeWithLiveTask:(id)a0;
- (void)onLiveTask:(id)a0 statistics:(id)a1;
- (void)onLiveTask:(id)a0 netStatus:(id)a1 p2pStatus:(id)a2;
- (void)onLiveTask:(id)a0 pushNetStatus:(id)a1;
- (void)onLiveTask:(id)a0 didCollectMetricsInfo:(id)a1;
- (void)onLiveTask:(id)a0 trtcAudioFrameCostTime:(long long)a1 userId:(id)a2 business:(long long)a3;
- (id)transferBusinessTypeToName:(long long)a0;
- (id)getNickName:(id)a0 userId:(id)a1;
- (BOOL)needPrintTrtcAudioFrameCostTimeFromUser:(id)a0 business:(long long)a1 liveTask:(id)a2;
- (void).cxx_destruct;

@end
