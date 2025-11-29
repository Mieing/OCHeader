@class HMDThreadSafeDictionary;

@interface AWEIMMediaTracker : NSObject

@property (retain, nonatomic) HMDThreadSafeDictionary *sendMessageLists;
@property (retain, nonatomic) HMDThreadSafeDictionary *receiveMessageLists;

+ (id)commonTrackParamsForMessage:(id)a0;
+ (id)sharedInstance;

- (void)p_appWillResignActive:(id)a0;
- (void)cleanTrackerWhenLeaveScene;
- (BOOL)enableTrackForMessageType:(long long)a0;
- (void)trackStartForType:(unsigned long long)a0 forTrackID:(id)a1 time:(double)a2;
- (void)updateSendTackForTrackID:(id)a0 stage:(unsigned long long)a1 event:(unsigned long long)a2;
- (void)exceptionReportSendStage:(unsigned long long)a0 trackID:(id)a1 error:(id)a2;
- (void)updateSendObjectParamsFor:(id)a0 withSendObject:(id)a1;
- (void)replaceTrackID:(id)a0 type:(unsigned long long)a1 withNew:(id)a2 iesMsg:(id)a3;
- (void)updateSendTackForMessage:(id)a0 stage:(unsigned long long)a1 event:(unsigned long long)a2;
- (void)updateReceiveTackForMessage:(id)a0 stage:(unsigned long long)a1 event:(unsigned long long)a2;
- (void)cleanTrackerWhenLeaveSceneForType:(unsigned long long)a0;
- (void)p_updateTimeFor:(id)a0 inMap:(id)a1 stage:(long long)a2 event:(unsigned long long)a3;
- (long long)p_getStageDuration:(long long)a0 inMetric:(id)a1;
- (long long)p_getStageDurationFrom:(long long)a0 toStage:(long long)a1 inMetric:(id)a2;
- (void)updateUploadUseCacheFor:(id)a0 useCache:(BOOL)a1;
- (void)exceptionReportResendStage:(unsigned long long)a0 messageType:(long long)a1 error:(id)a2;
- (void)addOrignVideoInfoFor:(id)a0 withAssetTrack:(id)a1 withAsset:(id)a2;
- (void)addTranscodedVideoInfoFor:(id)a0 withPath:(id)a1 skipTranscode:(BOOL)a2;
- (void)updateSendObjectParamsFor:(id)a0 messageType:(long long)a1 content:(id)a2 videoGalleryPath:(id)a3 resourceSize:(double)a4 isLivePhoto:(BOOL)a5;
- (void)updateSendTackForTrackID:(id)a0 stage:(unsigned long long)a1 event:(unsigned long long)a2 time:(double)a3;
- (void)p_addParams:(id)a0 forMessageID:(id)a1 inMap:(id)a2;
- (BOOL)p_isOtherBusinessImageTypeWithType:(long long)a0;
- (BOOL)p_isOtherBusinessVideoTypeWithType:(long long)a0;
- (BOOL)p_enableTrackAttachmentMessageType:(long long)a0;
- (id)p_metricMapForType:(unsigned long long)a0;
- (void)p_setupMetricForKey:(id)a0 inMap:(id)a1;
- (long long)p_startStageForType:(unsigned long long)a0;
- (void)p_updateTimeFor:(id)a0 inMap:(id)a1 stage:(long long)a2 event:(unsigned long long)a3 time:(double)a4;
- (void)p_addCommonParamsIfNeededForType:(unsigned long long)a0 forMessage:(id)a1;
- (void)updateReceiveTackForTrackID:(id)a0 stage:(unsigned long long)a1 event:(unsigned long long)a2;
- (long long)p_lastStageForType:(unsigned long long)a0;
- (void)p_reportWithType:(unsigned long long)a0 forTrackID:(id)a1;
- (id)p_reportKeyForType:(unsigned long long)a0;
- (id)p_getResolution:(id)a0;
- (id)p_key_sendStage:(unsigned long long)a0;
- (id)p_key_receiveStage:(unsigned long long)a0;
- (id)p_key_stageForType:(unsigned long long)a0 stage:(long long)a1;
- (void)trackStartForType:(unsigned long long)a0 forTrackID:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
