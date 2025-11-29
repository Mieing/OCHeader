@class UIView, NSString, NSMutableDictionary, NSArray, AWEIMAudioPlayStatusObserver, FBKVOController, AVPlayer;
@protocol NSObject;

@interface AWEIMAudioMessagePlayerManager : NSObject <AVAudioPlayerDelegate, AWEIMProximityStateObserver> {
    int _playMode;
}

@property (nonatomic) BOOL proximityMonitorAvailable;
@property (retain, nonatomic) NSMutableDictionary *dictionaryObserver;
@property (retain, nonatomic) NSString *conversation;
@property (retain, nonatomic) NSArray *playList;
@property (retain, nonatomic) NSArray *messageList;
@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) NSString *currentPlayId;
@property (retain, nonatomic) NSString *currentReplyMessageId;
@property (retain, nonatomic) id timeObserver;
@property (retain, nonatomic) id<NSObject> playEndObserver;
@property (retain, nonatomic) AWEIMAudioPlayStatusObserver *playObserver;
@property (nonatomic) BOOL headphoneInstalled;
@property (retain, nonatomic) FBKVOController *playRateKVO;
@property (nonatomic) BOOL secondaryAudioShouldBeSilencedHintWhenWePlay;
@property (nonatomic) BOOL shouldAutoPlayAudioAfterPaused;
@property (nonatomic) BOOL previousKeepAlive;
@property (nonatomic) BOOL didOpenProximityMonitor;
@property (retain, nonatomic) UIView *fullScreenMask;
@property (nonatomic) int playMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableNearbyEarPlayAudioAB;
+ (void)findAllUnreadAudioMessageWithCompletion:(id /* block */)a0;
+ (BOOL)p_enableAudioPlayDisableIdle;
+ (id)sharedInstance;

- (void)handleDidEnterBackgroundNotification:(id)a0;
- (void)pauseAudio;
- (BOOL)isPlayerPlaying;
- (void)playAudioSeekToTime:(double)a0;
- (void)handleAudioSessionInterruptionNotification:(id)a0;
- (void)handleAudioSessionRouteChangeNotification:(id)a0;
- (void)handleInAppAudioNotification:(id)a0;
- (void)postWillStartPlayNotification;
- (void)postDidEndPlayNotification;
- (BOOL)setAudioCategory:(id)a0 activeAudioSession:(BOOL)a1;
- (void)stopAudioWithClearAllObservers:(BOOL)a0;
- (id)getObserverForMessageId:(id)a0 conversationId:(id)a1;
- (void)onProximityStateChanged:(BOOL)a0;
- (void)playAudioWithConfig:(id)a0;
- (void)stopPlayerIfRecalledMessageIsPlaying:(id)a0;
- (void)stopAudioEmojiIfNeeded;
- (void)stopPlayAudioWithMessageId:(id)a0 conversationId:(id)a1;
- (id)getObserverForAllAudioMessage;
- (BOOL)containsHeadphoneForRoute:(id)a0;
- (id)getObserverForMessageId:(id)a0 replyedMessageID:(id)a1 conversationId:(id)a2;
- (id)audioFilePathForMessageId:(id)a0 conversationId:(id)a1;
- (void)p_trackAudioPlayPerformanceType:(id)a0 status:(long long)a1 errCode:(long long)a2 withActive:(BOOL)a3 playId:(id)a4;
- (void)playerDidPlayForPlayId:(id)a0 replyedID:(id)a1 conversationId:(id)a2 player:(id)a3 allCompletion:(id /* block */)a4;
- (void)trackMessagePlayWithType:(id)a0 isNearbyEarPlay:(BOOL)a1 playId:(id)a2 conversationId:(id)a3;
- (void)playerDidStopForPlayId:(id)a0 replyedID:(id)a1 conversationId:(id)a2 deactivateAudioSession:(BOOL)a3;
- (void)p_bindPlayerItem:(id)a0 type:(id)a1;
- (void)postSeekToTimeAudioPlayNotification;
- (void)playerDidPauseForPlayId:(id)a0 replyedID:(id)a1 conversationId:(id)a2;
- (void)p_trackFormatAudioPlayTimeIfNeededWithPlayId:(id)a0 conversationId:(id)a1 isFinished:(BOOL)a2;
- (void)postDidPausePlayNotification;
- (void)postContinueAudioPlayNotification;
- (void)disableProximityMonitor;
- (BOOL)p_setCategory:(id)a0 error:(id *)a1;
- (void)enableProximityMonitor;
- (void)autoPlayAudioWhenNearScreenTop:(BOOL)a0;
- (void)continueAudioPlayWithNearEar:(BOOL)a0;
- (BOOL)p_setCategory:(id)a0 withOptions:(unsigned long long)a1 error:(id *)a2;
- (void)player:(id)a0 playRateDidChange:(float)a1;
- (void)p_timerFired:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)playerDidFinishForPlayId:(id)a0 replyedID:(id)a1 conversationId:(id)a2 allCompletion:(id /* block */)a3;
- (void)p_trackAudioPlayFinishWithPlayId:(id)a0 conversationId:(id)a1;
- (void)p_stopAudioWithDeactivateAudioSession:(BOOL)a0;
- (void)eatTapped;
- (BOOL)canOpenProximityMonitor;
- (void)playerDidStopForPlayId:(id)a0 replyedID:(id)a1 conversationId:(id)a2;
- (void)p_fakeTurnOffScreen;
- (void)p_fakeTurnOnScreen;
- (BOOL)isIphone14ProOrProMax;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
