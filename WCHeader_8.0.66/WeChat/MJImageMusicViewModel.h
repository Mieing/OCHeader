@class MMBGMSelectedConfig, MJPublisherContext, NSMutableArray, EditVideoMusicController;
@protocol MJImageMusicViewModelDelegate, MMBGMSelectedMusicDataProtocol;

@interface MJImageMusicViewModel : NSObject

@property (retain, nonatomic) EditVideoMusicController *musicController;
@property (nonatomic) BOOL isMusicDownloadCancelled;
@property (copy, nonatomic) id /* block */ musicDownloadCompletion;
@property (retain, nonatomic) id<MMBGMSelectedMusicDataProtocol> currentPlayingMusicData;
@property (readonly, nonatomic) MMBGMSelectedConfig *bgmPanelConfig;
@property (readonly, nonatomic) NSMutableArray *bgmPanelTabModels;
@property (weak, nonatomic) id<MJImageMusicViewModelDelegate> delegate;
@property (retain, nonatomic) MJPublisherContext *publisherContext;

- (id)initWithAssetClassfyResult:(id)a0 fetchMusicDefaultly:(BOOL)a1;
- (void)fetchRecMusicWithViewModel:(id)a0;
- (void)loadAndPlayMusic:(id)a0;
- (void)pauseMusic;
- (void)replayMusic;
- (void)clearMusic;
- (void)downloadMusic:(id)a0 timeout:(double)a1 completion:(id /* block */)a2;
- (void)cancelMusicDownload:(id)a0;
- (void)callCompletionWithDownloadSucceed:(BOOL)a0 musicID:(id)a1;
- (id)convertMusicLyricInfos:(id)a0;
- (void).cxx_destruct;

@end
