@class AWEMusicPlayEventService, NSString, NSDictionary, AWEMusicPlayerQueue, AWEMusicMainFeedViewController, NSNumber;
@protocol MusicService;

@interface AWEMusicFullMusicService : NSObject <AWEMusicFeedPlayerDelegate, AWEMusicStreamingQueueDelegate>

@property (copy, nonatomic) NSString *relativeMusicId;
@property (nonatomic) BOOL hasFullMusicData;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) double enterTime;
@property (nonatomic) BOOL haveReportedLoadFinish;
@property (retain, nonatomic) AWEMusicPlayEventService *eventService;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL shouldStartPlay;
@property (nonatomic) BOOL mustBeSingleSong;
@property (retain, nonatomic) AWEMusicPlayerQueue *queue;
@property (retain, nonatomic) NSNumber *scene;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *previousPage;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (weak, nonatomic) AWEMusicMainFeedViewController *playerVC;
@property (weak, nonatomic) id<MusicService> musicService;
@property (nonatomic) BOOL showLunaTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)feedViewDidLoad:(id)a0;
- (BOOL)hasMoreOfScene:(id)a0;
- (void)loadMoreScene:(id)a0 responseBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)feedDidRetry:(id)a0;
- (void)feed:(id)a0 didDismissAnimation:(BOOL)a1;
- (void)feedBgGuideDidDisappear:(id)a0;
- (id)collectToast:(BOOL)a0;
- (id)queueHandler;
- (void)etReportLoadFinish:(id)a0 error:(id)a1;
- (BOOL)isSingleSongMode;
- (id)convert:(id)a0 queueNane:(id)a1;
- (id)viewModelsFromMediaModels:(id)a0 queueName:(id)a1;
- (void)loadFullMusicInfoResponseBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)loadRecommandInfoResponseBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (id)initWithFullMusicId:(id)a0 mustBeSingleSong:(BOOL)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
