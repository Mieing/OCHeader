@class BDPAudioSessionLock, NSString, NSRecursiveLock, BDPUniqueID, NSMutableDictionary, BDPAudioInterruptionConfig, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface BDPAudioPlayerService : NSObject <BDPAudioPlayerStateDelegate, BDPWarmBootMessage, BDPAudioInterruptionDelegate> {
    NSObject<OS_dispatch_semaphore> *_lock;
}

@property (retain, nonatomic) NSMutableDictionary *playerDic;
@property (retain, nonatomic) NSMutableArray *pauseListAudioInterruption;
@property (retain, nonatomic) NSMutableDictionary *lastEndTimeDict;
@property (nonatomic, getter=generateNewAudioID) long long newAudioID;
@property (retain, nonatomic) BDPAudioSessionLock *audioSessionLock;
@property (nonatomic) unsigned long long audioNumber;
@property (retain, nonatomic) NSRecursiveLock *locker;
@property (retain, nonatomic) BDPAudioInterruptionConfig *audioInterruptionConfig;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (void)heapPhonesUnavailable;
- (void)pauseByInterrupt;
- (void)resumeByInterrupt;
- (id)getInterruptUniqueID;
- (void)subscribeErrorWithPlayer:(id)a0 errMsg:(id)a1;
- (void)destroyAudioPlayerWithID:(long long)a0;
- (void)increaseActiveInstanceIfNeed:(long long)a0;
- (void)decreaseActiveInstanceIfNeed:(long long)a0;
- (void)audioPlayer:(long long)a0 stateChangeTo:(id)a1 data:(id)a2;
- (void)audioPlayer:(long long)a0 playingChangeTo:(BOOL)a1;
- (id)getAudioPlayerWithID:(long long)a0;
- (void)updateAudioPlayerWithID:(long long)a0 model:(id)a1 completion:(id /* block */)a2;
- (BOOL)playAudioPlayer:(long long)a0;
- (BOOL)pauseAudioPlayer:(long long)a0;
- (BOOL)stopAudioPlayer:(long long)a0;
- (void)audioPlayer:(long long)a0 seek:(double)a1 completion:(id /* block */)a2;
- (void)updateAudioActive:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)setMuteSwitch:(BOOL)a0;
- (id)initWithUniqueID:(id)a0;
- (id)createAudioPlayer;

@end
