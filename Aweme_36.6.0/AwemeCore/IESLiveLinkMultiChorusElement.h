@class NSString, NSMutableSet, IESLiveLinkMultiChorusMixedParam, NSLock, IESLiveLinkNodePipeline;
@protocol IESLiveLinkRTCSyncedDataReceiver, IESLiveLinkMultiChorusLiveCoreProtocol, IESLiveLinkMultiChorusRTCClientProtocol;

@interface IESLiveLinkMultiChorusElement : IESLiveLinkBizBaseElement <IESLiveLinkMultiChorusRTCClientDelegate, IESLiveLinkTranscoderManagerObserver, IESLiveLinkTranscoderEventDelegate, IESLiveLinkTranscoderDataDelegate, IESLiveLinkRTCSyncedOutputNodeDelegate, IESLiveLinkRTCSyncedOutputNodeDataSource, IESLiveLinkMultiChorusElementProtocol>

@property (retain, nonatomic) id<IESLiveLinkMultiChorusLiveCoreProtocol> multiChorusLiveCore;
@property (retain, nonatomic) id<IESLiveLinkMultiChorusRTCClientProtocol> multiChorusRTC;
@property (nonatomic) unsigned long long singleChorusMode;
@property (nonatomic) unsigned long long multiChorusRole;
@property (retain, nonatomic) IESLiveLinkMultiChorusMixedParam *multiChorusMixParam;
@property (retain, nonatomic) NSMutableSet *syncCacheUser;
@property (retain, nonatomic) NSLock *syncCacheLock;
@property (nonatomic) BOOL isSyncCacheRunning;
@property (retain, nonatomic) IESLiveLinkNodePipeline *pipeline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLiveLinkRTCSyncedDataReceiver> syncedVideoFramesReceiver;

- (long long)bizType;
- (BOOL)fetchSingleViewStatus;
- (int)startChorusCacheSync:(id)a0;
- (int)updateMultiChorusMixedAction:(unsigned long long)a0 withBaseUid:(id)a1;
- (int)startChorus:(BOOL)a0 withOnlySendPts:(BOOL)a1;
- (int)stopChorus;
- (void)pushRTCExtraDataToKTV:(id)a0;
- (BOOL)willRenderVideoBufferOnNewFrameReadyWithUID:(id)a0;
- (BOOL)shouldNotifyCompositingChangedAgain;
- (id)initWithCommonContext:(id)a0 liveCore:(id)a1 rtcClient:(id)a2 liveLink:(id)a3;
- (void)onMixingAudioFrame:(id)a0 sampleCount:(long long)a1 channel:(long long)a2 sampleRate:(long long)a3 timeStamp:(long long)a4 taskID:(id)a5;
- (void)onMixingVideoFrame:(struct __CVBuffer { } *)a0 taskID:(id)a1;
- (void)onMixingDataFrame:(id)a0 taskID:(id)a1;
- (void)liveLinkTranscoder:(id)a0 willUpdateMixedStream:(id)a1 taskID:(id)a2;
- (void)onTranscoderCreated:(id)a0 mixType:(long long)a1;
- (void)addMultiChorusPipline;
- (void)removeMultiChorusPipline;
- (void)updateRemoteRenderNodeSessionsWithUids:(id)a0;
- (void)liveLinkMultiChorusRTCClient:(id)a0 onSyncedVideoFrames:(struct __CFArray { } *)a1 withDataFrame:(id)a2 withUids:(id)a3;
- (void)onSyncEvent:(unsigned long long)a0 withError:(unsigned long long)a1;
- (void)onSyncedUsersChanged:(id)a0;
- (int)stopChorusCacheSync;
- (void).cxx_destruct;

@end
