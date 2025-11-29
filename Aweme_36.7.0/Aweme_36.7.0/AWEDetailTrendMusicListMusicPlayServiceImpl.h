@class NSString, AWEDetailTrendViewModel;
@protocol AWEMusicStreamingPlayEventService, AWEDetailMusicListViewModelProtocol, MusicService;

@interface AWEDetailTrendMusicListMusicPlayServiceImpl : NSObject <AWEMusicServiceDelegate, AWEDetailMusicListPlayService>

@property (weak, nonatomic) id<AWEDetailMusicListViewModelProtocol> musicListDataContext;
@property (weak, nonatomic) AWEDetailTrendViewModel *trendViewModel;
@property (retain, nonatomic) id<MusicService> musicPlayer;
@property (retain, nonatomic) id<AWEMusicStreamingPlayEventService> playEventService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)musicService:(id)a0 playStatusChanged:(long long)a1;
- (id)initWitServiceProvider:(id)a0;
- (void)updateMusicPlayerParamsWhenMusicListDidFetch;
- (BOOL)switchToMusicInfoAtIndex:(long long)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (BOOL)isPlaying;

@end
