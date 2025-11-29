@class NSLock, NSString, AWEAwemeModel, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWEAdFeedFPSMonitorManager : HTSService <AWEAdFeedFPSMonitorManager>

@property (retain, nonatomic) NSMutableArray *monitorArray;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sampleQueue;
@property (nonatomic) long long timeIndex;
@property (nonatomic) long long monitorState;
@property (weak, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) id /* block */ frameDropCallback;
@property (retain, nonatomic) NSLock *asynLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)adFeedMonitorStartWithModel:(id)a0;
- (void)adFeedMonitorStop;
- (void)adFeedMonitorPause;
- (void)adFeedMonitorResume;
- (id)createSceneWithContext:(id /* block */)a0;
- (void)onSceneStop:(id)a0;
- (BOOL)enableAdFPSMonitoring;
- (id)thresholdDic;
- (void)trackFeedWithFrameDropRecord:(id)a0;
- (void)handlePublicParameter:(id)a0;
- (void)calculateHTR:(id)a0;
- (id)getManagerSettings;
- (void).cxx_destruct;
- (id)init;
- (void)startMonitor;
- (void)stopMonitor;

@end
