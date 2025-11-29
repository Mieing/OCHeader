@class NSString, UIView, NSMutableArray, NSObject;
@protocol AWESearchMusicListenMusicPlayerManagerDelegate, MusicService, AWEMusicStreamingBottomPlayer;

@interface AWESearchMusicListenMusicPlayerManager : NSObject <AWEMusicStreamingBottomPlayerDelegate, AWEMusicStreamingQueueDelegate, AWEMusicFeedPlayerDelegate, AWEMusicServiceDelegate>

@property (retain, nonatomic) NSObject<MusicService> *lunaPlayer;
@property (retain, nonatomic) UIView<AWEMusicStreamingBottomPlayer> *playerView;
@property (retain, nonatomic) NSMutableArray *lunaPlayerArr;
@property (nonatomic) BOOL isPlayingAll;
@property (weak, nonatomic) id<AWESearchMusicListenMusicPlayerManagerDelegate> delegate;
@property (nonatomic) BOOL isLunaPlayShow;
@property (nonatomic) BOOL isSearchHasMore;
@property (nonatomic) BOOL isBottomPlayerShow;
@property (readonly, nonatomic) double bottomPlayerHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getLunaModel:(id)a0;

- (void)musicService:(id)a0 playStatusChanged:(long long)a1;
- (void)onAudioPlay:(id)a0 model:(id)a1;
- (void)onAudioOver:(id)a0 model:(id)a1 duration:(double)a2;
- (BOOL)hasMoreOfScene:(id)a0;
- (void)loadMoreScene:(id)a0 responseBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)feedGoBackDidTapped:(id)a0;
- (void)bottomPlayerWillShow:(id)a0;
- (void)bottomPlayerWillDismiss:(id)a0;
- (void)playerViewDidTapBottomView:(id)a0 withMusicService:(id)a1;
- (void)playAll:(id)a0;
- (void)showPlayerViewIfNeeded;
- (void)addingPlayerInfoArrWithModel:(id)a0;
- (void)pauseAndDismissBottomPlayerIfNeed;
- (void)resetPlayerInfo;
- (id)curMusiId;
- (id)curPlayStatus:(id)a0;
- (id)getPlayStatusString:(long long)a0;
- (id)extractLunaModel:(id)a0;
- (id)findFirstLunaPlayerModel:(id)a0;
- (void)openLunaPlayerWithSongId:(id)a0 trackParams:(id)a1;
- (void)p_openLunaPlayerIfNeeded;
- (void)p_openLunaPlayer;
- (void)playMusicStart:(id)a0;
- (void)playMusicEnd:(id)a0;
- (void)playMusicStop:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (void)stop;
- (void)dealloc;

@end
