@class IESLiveLinkRTCEngineManager, NSMutableDictionary, NSString, IESLiveLinkMultiCaster;
@protocol IESLiveLinkBizFilterProtocol, IESLiveLinkReporterProtocol, IESLiveLinkLiveCore;

@interface IESLiveLinkTranscoderManager : NSObject <IESLiveLinkTranscoderEventDelegate, IESLiveLinkTranscoderDataDelegate> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutexLock;
}

@property (weak, nonatomic) IESLiveLinkRTCEngineManager *engineManager;
@property (weak, nonatomic) id<IESLiveLinkLiveCore> liveCoreClient;
@property (retain, nonatomic) IESLiveLinkMultiCaster *observer;
@property (retain, nonatomic) NSMutableDictionary *transcodeDict;
@property (retain, nonatomic) NSMutableDictionary *switchTranscodeDict;
@property (retain, nonatomic) NSMutableDictionary *waterMarksDict;
@property (copy, nonatomic) NSString *mainTranscodeTaskID;
@property (nonatomic) BOOL isMixingVideoFramePtsCompensate;
@property (weak, nonatomic) id<IESLiveLinkBizFilterProtocol> bizFilter;
@property (weak, nonatomic) id<IESLiveLinkReporterProtocol> liveLinkReporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendRtcEffectMsg:(long long)a0 arg1:(long long)a1 arg2:(long long)a2 arg3:(id)a3;
- (void)updateAudioEffectType:(id)a0;
- (void)updateAllStreamingOutputSize:(struct CGSize { double x0; double x1; })a0 withBitrate:(long long)a1 withFps:(long long)a2;
- (void)updateEffectResourceLocalPath:(id)a0;
- (int)addWaterMarkWithId:(id)a0 region:(id)a1 pts:(long long)a2;
- (int)removeWaterMarkWithId:(id)a0;
- (int)updateWaterMarkWithId:(id)a0 region:(id)a1 pts:(long long)a2;
- (int)removeAllWaterMarks;
- (int)composeCurrentWaterMarks;
- (void)setMixingVideoFramePtsCompensate:(BOOL)a0;
- (void)destroyAllExtraTranscoding;
- (id)initWithEngineManager:(id)a0 liveCoreClient:(id)a1;
- (void)updateAllLiveTranscodingLayout:(BOOL)a0;
- (long long)getMainMixType;
- (id)allTranscoderInfo;
- (BOOL)shouldNotifyCompositingChangedAgain;
- (void)removeTranscoderDataDelegate:(id)a0 taskID:(id)a1;
- (void)addTranscoderDataDelegate:(id)a0 taskID:(id)a1;
- (void)onMixingAudioFrame:(id)a0 sampleCount:(long long)a1 channel:(long long)a2 sampleRate:(long long)a3 timeStamp:(long long)a4 taskID:(id)a5;
- (void)onMixingVideoFrame:(struct __CVBuffer { } *)a0 taskID:(id)a1;
- (void)onMixingDataFrame:(id)a0 taskID:(id)a1;
- (int)switchMainTranscoderMixType:(long long)a0 params:(id)a1;
- (id)mainTranscoder;
- (void)updateAllAuthInfo:(id)a0 FrameType:(long long)a1;
- (void)stopAllTranscoding;
- (void)startAllLiveTranscoding;
- (void)stopAllExtraTranscoding;
- (id)transcoderWithTaskId:(id)a0;
- (void)destroyTranscodeWithTaskId:(id)a0;
- (id)createTranscode:(id)a0 isMainTranscode:(BOOL)a1;
- (void)updateWithParam:(id)a0 taskID:(id)a1;
- (void)didLiveExtraTranscoderUpdateLayoutOfPublisher:(id)a0 taskID:(id)a1;
- (void)didLiveTranscoderUpdateLayoutOfPublisher:(id)a0 taskID:(id)a1;
- (void)didLiveTranscoder:(id)a0 CompositingChanged:(BOOL)a1 taskID:(id)a2;
- (void)didLiveTranscoderMixingEvent:(unsigned long long)a0 mixType:(long long)a1 error:(long long)a2 taskId:(id)a3;
- (void)didLiveExtraStreamKeyEventUpdate:(id)a0 extra:(id)a1 taskID:(id)a2;
- (void)didLiveTranscoderReportInteractStatusLog:(id)a0 params:(id)a1 taskID:(id)a2;
- (void)didStopLiveTranscoding:(id)a0;
- (void)liveLinkTranscoder:(id)a0 willUpdateMixedStream:(id)a1 taskID:(id)a2;
- (void)didUpdateSyncControlConfig:(id)a0 taskID:(id)a1;
- (void)didUpdateSpatialAudio:(id)a0 taskID:(id)a1;
- (long long)getMixType:(id)a0;
- (void)addTranscoderEventDelegate:(id)a0 taskID:(id)a1;
- (int)checkParam:(id)a0;
- (id)p_createTranscode:(id)a0 isMainTranscode:(BOOL)a1 isInternal:(BOOL)a2;
- (void)p_destroyTranscodeWithTaskId:(id)a0 isInternal:(BOOL)a1;
- (int)switchMixType:(long long)a0 params:(id)a1 taskID:(id)a2;
- (int)p_switchMixType:(long long)a0 params:(id)a1 taskID:(id)a2 isSwitch:(BOOL)a3;
- (void)updateAllTranscodeWaterMask;
- (void)removeTranscoderEventDelegate:(id)a0 taskID:(id)a1;
- (void)destroyMainTranscoder;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)dealloc;

@end
