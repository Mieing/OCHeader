@class NSString, NSMutableArray, AWEVideoPublishViewModel;
@protocol ACCPropPickerService, IESServiceProvider;

@interface ACCSideslipPropFetchListStrategy : NSObject <ACCStickerPickerServiceSubscriber>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCPropPickerService> propPickerService;
@property (copy, nonatomic) id /* block */ fetchCategoryCompletion;
@property (copy, nonatomic) id /* block */ fetchFavoriteCompletion;
@property (copy, nonatomic) id /* block */ fetchHotCompletion;
@property (nonatomic) unsigned long long dataSource;
@property (nonatomic) unsigned long long loadedDataSource;
@property (nonatomic) unsigned long long waitDataSource;
@property (nonatomic) unsigned long long hitCacheDataSource;
@property (nonatomic) long long timeout;
@property (nonatomic) BOOL isFetching;
@property (retain, nonatomic) NSMutableArray *completions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stickerPickerService;
- (void)stickerPickerServiceDidFinishLoadCategories:(id)a0;
- (void)stickerPickerServiceDidFailLoadCategories:(id)a0 withError:(id)a1;
- (void)stickerPickerService:(id)a0 didFinishLoadStickersWithCategory:(id)a1 tabIndex:(long long)a2;
- (void)stickerPickerService:(id)a0 didFailLoadStickersWithCategory:(id)a1 tabIndex:(long long)a2 error:(id)a3;
- (void)p_handleResult:(id)a0;
- (id)loadSourceDescWithSource:(unsigned long long)a0;
- (BOOL)isHitCacheWithSource:(unsigned long long)a0;
- (id)primaryCategoryModelWithService:(id)a0;
- (void)fetchPropListWithCompletion:(id /* block */)a0;
- (void)fetchPropListWithTimeOut:(long long)a0 completion:(id /* block */)a1;
- (BOOL)p_shouldLoadSource:(unsigned long long)a0;
- (void)p_changeLoadState:(BOOL)a0 hitCache:(BOOL)a1 forSource:(unsigned long long)a2;
- (BOOL)p_hasLoadedSource:(unsigned long long)a0;
- (void)p_fetchHotPropListWithCompletion:(id /* block */)a0;
- (BOOL)p_shouldWaitSource:(unsigned long long)a0;
- (void)p_fetchFavoritePropListWithCompletion:(id /* block */)a0;
- (void)p_fetchPropCategoryWithCompletion:(id /* block */)a0;
- (BOOL)p_hasPropCategoryList;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
