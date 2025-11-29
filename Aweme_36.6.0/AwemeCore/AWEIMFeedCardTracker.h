@class IESIMFeedCardTapTrackItem, NSDictionary, HMDThreadSafeDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWEIMFeedCardTracker : NSObject

@property (retain, nonatomic) HMDThreadSafeDictionary *messageLists;
@property (retain, nonatomic) HMDThreadSafeDictionary *trackedMessageLists;
@property (retain, nonatomic) HMDThreadSafeDictionary *statusBeginMessageLists;
@property (retain, nonatomic) HMDThreadSafeDictionary *statusFinishMessageLists;
@property (retain, nonatomic) NSDictionary *shareMediaConfig;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) IESIMFeedCardTapTrackItem *lastTapItem;

+ (id)sharedInstance;

- (void)imFeedVideoPlayWithAwemeModel:(id)a0;
- (BOOL)feedPlayFrameTime;
- (void)cleanTrackerWhenLeaveScene;
- (void)__async:(id /* block */)a0;
- (BOOL)enableTrackForMessageType:(long long)a0;
- (void)p_trackFeedVideoPlayFrameWithDate:(id)a0 awemeId:(id)a1;
- (void)p_setupMsgMetricForKey:(id)a0 inMap:(id)a1;
- (void)p_updateTimeFor:(id)a0 inMap:(id)a1 stage:(unsigned long long)a2 event:(unsigned long long)a3;
- (BOOL)enableTrackRenderFinish;
- (void)p_trackRenderWithMessage:(id)a0 state:(long long)a1 error:(id)a2;
- (long long)p_getLastStage;
- (void)p_reportForMessageID:(id)a0;
- (id)p_getKeyForStage:(unsigned long long)a0;
- (long long)p_getStageDuration:(long long)a0 inMetric:(id)a1;
- (long long)p_getStageDurationFrom:(long long)a0 toStage:(long long)a1 inMetric:(id)a2;
- (BOOL)enableTrackRenderTime;
- (void)imFeedCardTapWithTapInfo:(id)a0;
- (void)trackStartForMessage:(id)a0;
- (void)trackErrorForMessage:(id)a0 error:(id)a1;
- (void)trackFinishForMessage:(id)a0;
- (void)updateForMessage:(id)a0 stage:(unsigned long long)a1 event:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)init;

@end
