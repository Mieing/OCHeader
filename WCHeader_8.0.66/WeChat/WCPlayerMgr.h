@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface WCPlayerMgr : MMUserService <WCPlayerCoreAdapterDelegate, MMServiceProtocol>

@property (retain, nonatomic) NSMutableArray *arrAggregate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioSessionQueue;
@property (nonatomic) BOOL bDownloadProxyInitFail;
@property (nonatomic) int localServerReinitFailCount;
@property (nonatomic) unsigned int taskCount;
@property (nonatomic) BOOL isAppResignActive;
@property (nonatomic) double currOutputVolume;
@property (nonatomic) unsigned int lastNoDataBufferingTime;
@property (retain, nonatomic) NSMutableArray *arrBufferingTimes;
@property (nonatomic) unsigned int backgroundSequence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)onServiceInit;
- (id)shareQueue;
- (unsigned int)getBackgroundSeq;
- (double)getCurrOutputVolume;
- (BOOL)isPictureInPictureSupported;
- (void)setDownloadProxyInitFail;
- (BOOL)isProxyUnavailable;
- (void)onLocalServerReinitFail;
- (unsigned int)newPlayerTaskId;
- (void)addNotification;
- (void)onApplicationBecomeActive;
- (void)onApplicationWillResignActive;
- (void)startObserveOutputVolume;
- (void)stopObserveOutputVolume;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)addPlayerObj:(id)a0;
- (void)removePlayerObj:(id)a0;
- (BOOL)hasAnyUnMutePlayingPlayer;
- (BOOL)isPlayingWithFilePath:(id)a0;
- (id)getAllPlayingItemsIdentifier;
- (BOOL)isPlayingWithIdentifier:(id)a0;
- (BOOL)isPlayingWithPlayerScene:(unsigned long long)a0;
- (id)getPlayerPlaybackInfoWithIdentifier:(id)a0;
- (void)setScreenLightAlways:(BOOL)a0;
- (unsigned int)getAndIncPlayCount:(id)a0;
- (unsigned int)clearAllPlayerWithPlayerScene:(unsigned long long)a0;
- (void)onPlayerStartBuffering:(id)a0;
- (unsigned long long)getHaveNoDataBufferingCount;
- (void).cxx_destruct;

@end
