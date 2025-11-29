@class NSLock, NSMutableDictionary, NSString;

@interface IESLiveLinkMultiChorusLiveCore : IESLiveLinkBizBaseLiveCore <IESLiveLinkMultiChorusLiveCoreProtocol>

@property (retain, nonatomic) NSMutableDictionary *chorus_layer_map;
@property (retain, nonatomic) NSLock *chorus_map_lock;
@property (nonatomic) BOOL firstChorusFrame;
@property (nonatomic) BOOL isChorus;
@property (nonatomic) BOOL isFrame;
@property (nonatomic) BOOL enableSingleChorusFixedAVSync;
@property (nonatomic) long long singleChorusFrameBufferMaxAllowSize;
@property (nonatomic) long long singleChorusAuxMaxAllowDelay;
@property (nonatomic) struct __CVBuffer { } *ref;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)fetchSingleViewStatus;
- (int)sendSEIMsgWithKey:(id)a0 value:(id)a1 repeatTimes:(long long)a2 keyFrameOnly:(BOOL)a3 allowsCovered:(BOOL)a4 timeGap:(int)a5 seiFlag:(int)a6;
- (void)pushRTCExtraDataToKTV:(id)a0;
- (id)initWithCommonContext:(id)a0 liveCore:(id)a1 livelinkLiveCore:(id)a2;
- (unsigned long long)changeRenderModeFrom:(unsigned long long)a0;
- (void)updateChorusLayout:(id)a0;
- (void)startChorus;
- (void)pushMixingCacheSyncVideo:(struct __CFArray { } *)a0 withUids:(id)a1 withLayout:(id)a2;
- (void)stopSignleWayChorus;
- (void)pushLastFrameForChorus:(struct __CVBuffer { } *)a0 pts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)enableSingleDirChorusPipeline:(BOOL)a0;
- (void)setSingleChorusAVSyncParams:(BOOL)a0 frameBufferMaxAllowSize:(long long)a1 auxMaxAllowDelay:(long long)a2;
- (void)pushSingleDirChorusAudioData:(short *)a0 samplesPerChannel:(int)a1 sampleRate:(int)a2 numChannels:(int)a3 timestamp:(long long)a4;
- (void).cxx_destruct;

@end
