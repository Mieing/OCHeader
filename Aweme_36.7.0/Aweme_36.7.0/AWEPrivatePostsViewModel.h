@class NSString, AWEPrivatePostsDataController, NSArray, NSMutableArray;
@protocol AWERecycledWorksPrivatePostViewModelProtocol, AWECloudAlbumPrivatePostViewModel, AWECloudAlbumChangeProtocol, AWEInTodayPrivatePostViewModelProtocol;

@interface AWEPrivatePostsViewModel : NSObject <AWECloudAlbumChangeProtocol, AWEPrivatePostsViewModel>

@property (retain, nonatomic) AWEPrivatePostsDataController *privateDataController;
@property (retain, nonatomic) id<AWECloudAlbumPrivatePostViewModel> cloudAlbumDataController;
@property (retain, nonatomic) id<AWEInTodayPrivatePostViewModelProtocol> memoriesDataController;
@property (retain, nonatomic) id<AWERecycledWorksPrivatePostViewModelProtocol> recycledWorksViewModel;
@property (nonatomic) BOOL isRequestOnAir;
@property (copy, nonatomic) NSString *currentUserID;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (readonly, nonatomic) NSArray *cloudAlbumList;
@property (readonly, nonatomic) NSArray *privatePostList;
@property (readonly, nonatomic) NSArray *memoriesList;
@property (readonly, nonatomic) NSArray *recycledWorksList;
@property (readonly, nonatomic) long long recycledWorksTotalCount;
@property (weak, nonatomic) id<AWECloudAlbumChangeProtocol> cloudAlbumDelegate;
@property (readonly, nonatomic) BOOL loadmoreHasMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)willDisplayCell:(id)a0;
- (BOOL)removeAwemeWithItemID:(id)a0;
- (void)insertAwemeModel:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)addAwemeWithItemID:(id)a0;
- (id)privatePostDataController;
- (BOOL)cloudAlbumHasMore;
- (void)softDeleteAweme:(id)a0;
- (void)changeVideFavoritedStatus:(BOOL)a0 itemID:(id)a1;
- (void)removeRecycledWorksCellIfNeeded;
- (id)removeLocalAlbum;
- (void)cloudAlbumUpdate;
- (void)updataMemoriesData:(id /* block */)a0;
- (long long)memoriesListDelete;
- (long long)memoriesCellIndex;
- (void)cloudAlbumUploadAssetWithCompletion:(id /* block */)a0;
- (void)cloudAlbumDelete:(id)a0;
- (void)p_combineAlbumsWithPostsDataSource;
- (BOOL)p_isPrivatePostListShow;
- (long long)indexOfTargetData:(id)a0;
- (BOOL)hasCloudAlbumExcludeLocalAlbum;
- (BOOL)hasCloudAlbumVisible:(id)a0;
- (BOOL)memoriesCellNeedRefresh;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)refreshWithCompletion:(id /* block */)a0;
- (void)viewWillDisappear;

@end
