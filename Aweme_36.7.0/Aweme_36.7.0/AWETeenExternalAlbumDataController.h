@class NSString, NSDictionary, AWETeenIntroPageMinorAlbumModel, NSObject;
@protocol OS_dispatch_queue;

@interface AWETeenExternalAlbumDataController : AWEListDataController

@property (nonatomic) long long minCursor;
@property (nonatomic) long long maxCursor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *albumDataQueue;
@property (nonatomic) long long initialIndex;
@property (copy, nonatomic) NSString *initialEpisodeID;
@property (retain, nonatomic) AWETeenIntroPageMinorAlbumModel *albumModel;
@property (retain, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) id /* block */ updateModelBlk;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadPreviousWithCompletion:(id /* block */)a0;
- (void)updateInitialIndex:(long long)a0;
- (void)updateMinCursor:(long long)a0;
- (void)updateMaxCursor:(long long)a0;
- (void)fetchAlbumItemsWithCount:(long long)a0 pullType:(long long)a1 initFetch:(BOOL)a2 completion:(id /* block */)a3;
- (id)requestAlbumItemsParamsWithType:(long long)a0 initFetch:(BOOL)a1;
- (void)addLogExtraWithArray:(id)a0 context:(id)a1;
- (void)sortArrayByEpisode:(id)a0;
- (void)setupInitialIndex;
- (id)initWithAlbumModel:(id)a0 logExtra:(id)a1;
- (void)syncWithDataController:(id)a0;
- (void)uploadAlbumPlayStatus:(id)a0 progress:(long long)a1;
- (void)updateInitialEpisodeID:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;
- (unsigned long long)indexOfItemID:(id)a0;

@end
