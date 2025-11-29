@class MMBGMSelectedConfig, MJPublisherContext, NSMutableArray, EditVideoMusicController;
@protocol MMBGMSelectedMusicDataProtocol;

@interface MJMusicPickingViewModel : NSObject

@property (nonatomic) BOOL isMusicDownloadCancelled;
@property (copy, nonatomic) id /* block */ musicDownloadCompletion;
@property (retain, nonatomic) id<MMBGMSelectedMusicDataProtocol> followMusicData;
@property (retain, nonatomic) id<MMBGMSelectedMusicDataProtocol> currentPlayingMusicData;
@property (readonly, nonatomic) NSMutableArray *bgmPanelTabModels;
@property (readonly, nonatomic) MMBGMSelectedConfig *bgmPanelConfig;
@property (readonly, nonatomic) EditVideoMusicController *musicController;
@property (nonatomic) BOOL shouldChangeComposingState;
@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) MJPublisherContext *publisherContext;

- (id)initWithFollowMusicInfo:(id)a0 assetClassfyResult:(id)a1;
- (void)loadAndPlayMusic:(id)a0;
- (void)pauseMusic;
- (void)replayMusic;
- (void)handleApplicationDidEnterBackground:(id)a0;
- (void)handleApplicationWillEnterForeground:(id)a0;
- (id)convertMusicLyricInfos:(id)a0;
- (void)downloadMusic:(id)a0 timeout:(double)a1 completion:(id /* block */)a2;
- (void)cancelMusicDownload:(id)a0;
- (void)callCompletionWithDownloadSucceed:(BOOL)a0 musicID:(id)a1;
- (void).cxx_destruct;

@end
