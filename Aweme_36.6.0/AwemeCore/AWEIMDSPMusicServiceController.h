@class AWEIMShareDSPMusicMessage, AWEIMMessage, NSString;
@protocol AWEMusicStreamingPlayEventService, MusicService, AWEMusicShareServiceProtocol;

@interface AWEIMDSPMusicServiceController : NSObject <AWEMusicServiceDelegate, AWEMusicStreamingQueueDelegate, AWEMusicFeedPlayerDelegate, IESIMDSPMusicServiceControllerProtocol>

@property (retain, nonatomic) id<MusicService> musicService;
@property (retain, nonatomic) id<MusicService> secondaryMusicService;
@property (retain, nonatomic) id<AWEMusicStreamingPlayEventService> eventService;
@property (retain, nonatomic) AWEIMShareDSPMusicMessage *playMessage;
@property (retain, nonatomic) AWEIMMessage *possibleMatchedQuote;
@property (weak, nonatomic) id<AWEMusicShareServiceProtocol> shareDspService;
@property (nonatomic) BOOL isRequstingPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)musicService:(id)a0 playStatusChanged:(long long)a1;
- (void)p_addSelfObserveNotifications;
- (void)reportMusicMessageClickWithMessage:(id)a0;
- (void)destroyIfNeeded;
- (id)finalMusicIdWithMessage:(id)a0;
- (BOOL)p_isRecalledByMyselfWithRecalledMessage:(id)a0 recallingMessage:(id)a1;
- (void)p_resetMusicMessagePlayStatus;
- (void)p_removeSelfObserveNotifications;
- (void)p_postPlayStatusChangedNotification;
- (void)p_imAudioPlayWillStartNotified;
- (void)p_imAudioWillRecordNotified;
- (BOOL)hasMoreOfScene:(id)a0;
- (void)playSharedMusicWithMessage:(id)a0 quotingMessage:(id)a1 stopPlayWhenExitDSPPlayer:(BOOL)a2 completed:(id /* block */)a3;
- (void)stopPlayMusicMessageAfterRecallMessage:(id)a0 recallingMessage:(id)a1;
- (void)stopPlayMusicMessageAfterDeleteMessage:(id)a0;
- (void)stopMusicWhenHostViewControllerDidDisappear;
- (id)playMessageMusicId;
- (id)playMessageID;
- (void)playWithMusicMessage:(id)a0;
- (void)pauseWithMusicMessage:(id)a0;
- (BOOL)p_isSameQuote:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
