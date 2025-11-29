@class BDPBgAudioModel, NSString, BDPAudioInterruptionConfig, BDPUniqueID, BDPAudioSessionLock;
@protocol BDPBackgroundAudioAVPlayerProtocol;

@interface BDPBackgroundAudioAVPlayer : AVPlayer <BDPAudioInterruptionDelegate, BDPCrossTalkComponentDelegate>

@property (retain, nonatomic) id timeObserve;
@property (nonatomic) double currentOffset;
@property (nonatomic) BOOL needPlay;
@property (retain, nonatomic) BDPAudioSessionLock *audioSessionLock;
@property (retain, nonatomic) BDPAudioInterruptionConfig *audioInterruptionConfig;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) double realRate;
@property (nonatomic) BOOL isStopping;
@property (nonatomic) BOOL initialFlag;
@property (nonatomic) long long initialTime;
@property (nonatomic) BOOL hasStuck;
@property (nonatomic) BOOL inStuck;
@property (nonatomic) long long stuckStartTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double buffered;
@property (copy, nonatomic) NSString *src;
@property (weak, nonatomic) id<BDPBackgroundAudioAVPlayerProtocol> delegate;
@property (retain, nonatomic) BDPBgAudioModel *currentModel;
@property (copy, nonatomic) NSString *audioShareMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupObserver;
- (long long)currentActionType;
- (id)currentUniqueID;
- (void)p_resetStatus;
- (void)heapPhonesUnavailable;
- (void)pauseByInterrupt;
- (void)resumeByInterrupt;
- (id)getInterruptUniqueID;
- (void)initialEndAction:(id)a0 status:(id)a1;
- (void)onRateChange:(id)a0;
- (void)onWaitingState:(id)a0;
- (void)offWaitingState:(id)a0;
- (void)onAudioStateChange:(id)a0;
- (void)onPlayEndNotification:(id)a0;
- (void)p_stateChange:(id)a0 data:(id)a1;
- (void)trackAudioEvent:(id)a0 extra:(id)a1;
- (void)playImmediatelyAtRateDirectly:(double)a0;
- (void)postPlayEvent;
- (void)playDirectly;
- (void)pauseDirectly;
- (void)removeAudioObserver;
- (void)addAudioObserver;
- (id)ttComponentName;
- (id)ttComponentId;
- (long long)currentPageID;
- (void)pauseByCrossTalk:(id)a0;
- (void)setSrc:(id)a0 headers:(id)a1 uniqueID:(id)a2;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)init;
- (void)stop;
- (void)dealloc;
- (id)shareMode;
- (void)playImmediatelyAtRate:(double)a0;
- (void)initialAction;
- (void)seekToTime:(double)a0 completion:(id /* block */)a1;

@end
