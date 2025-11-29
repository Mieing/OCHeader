@class AWEMusicPlayEventService, NSString, AWEMusicDSPEventModel, AWEMusicPlayerModel, AWEMusicMainFeedViewController;
@protocol MusicService;

@interface AWEMusicSharePlayerService : NSObject <AWEMusicFeedPlayerDelegate, AWEMusicStreamingQueueDelegate>

@property (copy, nonatomic) NSString *relativeMusicId;
@property (retain, nonatomic) id<MusicService> musicService;
@property (retain, nonatomic) AWEMusicPlayEventService *eventService;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL originHashMore;
@property (retain, nonatomic) AWEMusicPlayerModel *originPlayModel;
@property (copy, nonatomic) NSString *originPage;
@property (copy, nonatomic) NSString *originEnterFrom;
@property (copy, nonatomic) NSString *originPreviousPage;
@property (copy, nonatomic) NSString *originQueueName;
@property (weak, nonatomic) AWEMusicMainFeedViewController *playerVC;
@property (copy, nonatomic) id /* block */ playerDismissBlock;
@property (retain, nonatomic) AWEMusicDSPEventModel *eventModel;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL ignoreSetModelsWhenReset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)feedViewDidLoad:(id)a0;
- (BOOL)hasMoreOfScene:(id)a0;
- (void)loadMoreScene:(id)a0 responseBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)feedDidRetry:(id)a0;
- (void)feed:(id)a0 willDismissAnimation:(BOOL)a1;
- (void)feed:(id)a0 didDismissAnimation:(BOOL)a1;
- (id)collectToast:(BOOL)a0;
- (id)queueHandler;
- (void)loadRecommandInfoResponseBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)etReportLoadFinish;
- (void)resetMusicService;
- (id)initWithMusicService:(id)a0 eventService:(id)a1 relativeMusicId:(id)a2;
- (void)bgGuideDidDisappear;
- (void).cxx_destruct;

@end
