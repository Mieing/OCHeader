@class NSString, BDPThreadSafeDictionary, BDPAudioInterruptionConfig, BDPThreadSafeArray, BDPUniqueID, NSObject;
@protocol OS_dispatch_semaphore;

@interface BDPPluginStreamAudio : BDPBridgeInstancePlugin <BDPStreamAudioPlayerStateDelegate, BDPAudioInterruptionDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic, getter=generateNewAudioID) long long newAudioID;
@property (retain, nonatomic) BDPThreadSafeDictionary *playerList;
@property (retain, nonatomic) BDPThreadSafeArray *pauseListAudioInterruption;
@property (retain, nonatomic) BDPAudioInterruptionConfig *audioInterruptionConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)pluginMode;

- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (void)heapPhonesUnavailable;
- (void)pauseByInterrupt;
- (void)resumeByInterrupt;
- (id)getInterruptUniqueID;
- (void)audioPlayer:(long long)a0 stateChangeTo:(long long)a1 data:(id)a2;
- (void)trackDiagnosePageEvent:(id)a0;
- (id)mapStateToString:(long long)a0;
- (id)p_playerWithAudioID:(long long)a0;
- (void)createStreamAudioContextWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)setStreamAudioStateWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getStreamAudioStateSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)destroyStreamAudioContextWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateStreamAudioWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
