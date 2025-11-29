@class NSString, NSDictionary, AWEShowTheaterTableViewController, NSNumber;
@protocol AWEHttpTask;

@interface AWEShowTheaterListDataController : AWEListDataController <AWEShowTheaterTableViewDataControllerProtocol>

@property (retain, nonatomic) NSString *awemeIDList;
@property (retain, nonatomic) NSString *albumIDList;
@property (retain, nonatomic) NSString *episodeIDList;
@property (retain, nonatomic) NSString *previousPage;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSNumber *offset;
@property (retain, nonatomic) NSNumber *enterScene;
@property (retain, nonatomic) NSDictionary *requestParamsDic;
@property (nonatomic) BOOL forbidLoadMore;
@property (nonatomic) BOOL loadPrevious;
@property (nonatomic) long long feedType;
@property (retain, nonatomic) NSNumber *targetCursor;
@property (retain, nonatomic) NSString *targetAlbumId;
@property (nonatomic) BOOL albumHasMore;
@property (retain, nonatomic) NSNumber *headCursor;
@property (retain, nonatomic) NSNumber *initialOffset;
@property (nonatomic) BOOL initialStreamHasFinished;
@property (retain, nonatomic) id<AWEHttpTask> reloadTask;
@property (retain, nonatomic) Class longVideoDataService;
@property (weak, nonatomic) AWEShowTheaterTableViewController *parentVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)loadPreviousWithCompletion:(id /* block */)a0;
- (void)reloadWithPullType:(long long)a0 Completion:(id /* block */)a1;
- (id)initWithAwemeModelList:(id)a0 context:(id)a1;
- (void)reloadCommonPathWithPullType:(long long)a0 Completion:(id /* block */)a1;
- (void)reloadAlbumWithPullType:(long long)a0 Completion:(id /* block */)a1;
- (id)dealResponseModelArrayWithModels:(id)a0 pullType:(long long)a1;
- (void)switchEpisodeResetWithLvideoAwemeModel:(id)a0;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
