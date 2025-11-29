@class TingLyricItem, NSMutableDictionary, NSString, NSDate, MPMediaItemArtwork;
@protocol TingNowPlayingInfoCenterDelegate;

@interface TingNowPlayingInfoCenter : NSObject <IRemoteControlCheckExt, MMImageLoaderObserver, TingFlowPlayerNotification, TingNowPlayingInfoCenterDelegate, TingLyricDataServiceListener, TingNowPlayingModule>

@property (retain, nonatomic) NSMutableDictionary *nowPlayingInfo;
@property (retain, nonatomic) NSDate *lastCheckNowPlayingInfoTime;
@property (nonatomic) long long backgroundState;
@property (retain, nonatomic) MPMediaItemArtwork *defaultArtwork;
@property (weak, nonatomic) id<TingNowPlayingInfoCenterDelegate> delegate;
@property (copy, nonatomic) NSString *curListenId;
@property (retain, nonatomic) TingLyricItem *curLyricItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)handlerArtworkResponseImage:(id)a0;
+ (id)reportParamWithPlayer:(id)a0;

- (id)init;
- (void)dealloc;
- (id)activePlayer;
- (void)resumePlayer;
- (void)pausePlayer;
- (id)moduleId;
- (BOOL)canResetNowPlay;
- (BOOL)canUpdateNowPlayingInfoCenter;
- (void)resetRemoteControlAndPlayingInfo;
- (void)resetRemoteControlAndPlayingInfoWithPlayingItem:(id)a0;
- (long long)onPlayCommand:(id)a0;
- (long long)onPauseCommand:(id)a0;
- (long long)onPlayPauseCommand:(id)a0;
- (long long)onChangePlaybackPositionCommand:(id)a0;
- (long long)onNextTrackCommand:(id)a0;
- (long long)onPrevTrackCommand:(id)a0;
- (void)registerCommandCenterActions;
- (void)refreshRemoteControlButtonStatus:(int)a0;
- (void)registerMPRemoteCommand:(id)a0 action:(SEL)a1;
- (void)setMPRemoteCommand:(id)a0 actionHandler:(id /* block */)a1;
- (long long)onHandleMPRemoteCommandClicked:(id)a0;
- (void)updateNowPlayingInfoIfNeedWithPlayingItem:(id)a0 player:(id)a1;
- (void)onNowPlayingInfoUpdated:(id)a0;
- (id)nowPlayingInfoWithPlayingItem:(id)a0 player:(id)a1;
- (id)nowPlayingInfoWithPlayingItemBase:(id)a0 player:(id)a1;
- (id)genNowPlayingArtworkForImage:(id)a0;
- (unsigned long long)__genNowPlayingPlayBackState:(int)a0;
- (void)iRemoteControlCheckEvent:(id)a0;
- (void)iRemoteControlCheckPluginOn;
- (void)iRemoteControlCheckPluginOff;
- (void)onRemoteControlCheckPluginOn;
- (void)onRemoteControlCheckPluginOff;
- (void)onPlayingInfoUpdate:(id)a0;
- (void)flowPlayer:(id)a0 onItemLoaded:(id)a1;
- (void)flowPlayer:(id)a0 onPlayingContextUpdated:(id)a1;
- (void)flowPlayer:(id)a0 onPlayTaskStatusChanged:(int)a1 tingItem:(id)a2 onEvent:(int)a3 withContext:(id)a4;
- (void)flowPlayer:(id)a0 tingItem:(id)a1 updateCurrentTime:(double)a2 displayTime:(double)a3 duration:(double)a4;
- (void)flowPlayer:(id)a0 listenId:(id)a1 lyricItem:(id)a2;
- (void)applicationEnterForeground;
- (void)applicationEnterBackground;
- (void)checkUpdateProgressChanged:(id)a0;
- (void)forceUpdateNowPlayingInfo;
- (void)onLyricTextChange:(id)a0 lyricItem:(id)a1;
- (void)resetLyric;
- (void).cxx_destruct;

@end
