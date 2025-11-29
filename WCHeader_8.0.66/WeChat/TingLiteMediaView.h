@class NSString, TingLyricsView, TingItem, TingFlowPlayerConfiguration, MusicDefualtImageView;
@protocol TingFlowPlayerProtocol;

@interface TingLiteMediaView : UIView <TingItemDataServiceExtension, TingFlowPlayerNotification>

@property (copy, nonatomic) NSString *listenId;
@property (retain, nonatomic) TingItem *tingItem;
@property (retain, nonatomic) TingLyricsView *lyricView;
@property (retain, nonatomic) id<TingFlowPlayerProtocol> player;
@property (retain, nonatomic) MusicDefualtImageView *coverView;
@property (nonatomic) int playScene;
@property (retain, nonatomic) TingFlowPlayerConfiguration *playerConfiguration;
@property (nonatomic) BOOL disableMinimizeWhenMusicStop;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (copy, nonatomic) NSString *coverUrlString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithListenId:(id)a0;
- (id)initWithMusicInfo:(id)a0;
- (id)initWithTingItem:(id)a0;
- (void)commentInit;
- (void)dealloc;
- (void)layoutSubviews;
- (id)displayCoverUrlString;
- (id)generatePlayerConfiguration;
- (void)startPlay;
- (BOOL)bindExistedPlayerAndPlay;
- (void)playAfterBindOrCreate;
- (void)pausePlay;
- (void)resumePlay;
- (void)stopPlay;
- (void)setupPlayer:(id)a0;
- (void)setMinimizeWindowShowing:(BOOL)a0;
- (BOOL)isCurrentActivePlayerPlayingSameItem;
- (BOOL)bindOrCreateNewPlayer;
- (void)creatPlayerIfNeeded;
- (id)movePlayerOut;
- (void)becomeResidentPlayer;
- (void)onListenIdAvailable:(id)a0;
- (void)releasePlayer;
- (void)flowPlayer:(id)a0 tingItem:(id)a1 onStatusChanged:(int)a2;
- (void)onTingItemUpdatedWithId:(id)a0 item:(id)a1;
- (void)onTingItemListenIdAvailable:(id)a0 item:(id)a1;
- (void).cxx_destruct;

@end
