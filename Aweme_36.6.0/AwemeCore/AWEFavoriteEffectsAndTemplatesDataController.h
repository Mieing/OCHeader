@class ACCMVCategoryModel, AWEFavoriteEffectsAndTemplatesDetail, NSString, AWEUserModel, NSDictionary, AWERecordInspirationCategoryItem, NSMutableArray, NSNumber;

@interface AWEFavoriteEffectsAndTemplatesDataController : AWEListDataController <AWEFavoriteTemplatesDataControllerProtocol, AWEFavoriteEffectsDataControllerProtocol>

@property (retain, nonatomic) AWEFavoriteEffectsAndTemplatesDetail *justRemovedModel;
@property (nonatomic) long long minCursor;
@property (nonatomic) long long maxCursor;
@property (retain, nonatomic) NSMutableArray *toBeRemovedFromDetailPage;
@property (retain, nonatomic) NSMutableArray *toBeAddedFromDetailPage;
@property (nonatomic) BOOL isEffect;
@property (nonatomic) BOOL isTemplate;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) ACCMVCategoryModel *categoryModel;
@property (readonly, nonatomic) AWERecordInspirationCategoryItem *inspirationCategoryItem;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSNumber *longCursor;
@property (retain, nonatomic) NSNumber *sortedPosition;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (retain, nonatomic) NSDictionary *musicDetailTrackParams;
@property (nonatomic) BOOL isFromMusicDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)paramForEffectChannel;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (BOOL)removeWithItemID:(id)a0;
- (void)fetchDataWithCompletion:(id /* block */)a0 isLoadmore:(BOOL)a1;
- (BOOL)addAwemeWithItemID:(id)a0;
- (void)refreshContentDataWithCompletion:(id /* block */)a0;
- (void)loadMoreContentDataWithCompletion:(id /* block */)a0;
- (long long)templateCountPerPage;
- (BOOL)removeTemplateWithItemID:(id)a0;
- (BOOL)addTemplateWithItemID:(id)a0;
- (void)markTemplateToBeRemoved:(id)a0;
- (void)markTemplateToBeAdded:(id)a0;
- (BOOL)templatesModifiedInDetailPage;
- (void)resortTempaltesDataSource;
- (void)addTemplateModelToDataSource:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
