@class NSNumber, AWERecordInspirationCategoryItem, ACCMVCategoryModel, NSDictionary, NSString, NSMutableArray, AWEAweMVTemplateModel;

@interface AWEFavoriteTemplatesDataController : AWEListDataController <AWEFavoriteTemplatesDataControllerProtocol>

@property (retain, nonatomic) AWEAweMVTemplateModel *justRemovedModel;
@property (retain, nonatomic) NSMutableArray *toBeRemovedFromDetailPage;
@property (retain, nonatomic) NSMutableArray *toBeAddedFromDetailPage;
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

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)fetchDataWithCompletion:(id /* block */)a0 isLoadmore:(BOOL)a1;
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
