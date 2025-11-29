@class AWERecordInspirationCategoryItem, ACCMVCategoryModel, NSDictionary, NSString, NSMutableArray, NSNumber;

@interface ACCFavoriteMVTemplatesDataController : NSObject <ACCMVTemplatesDataControllerProtocol>

@property (nonatomic) BOOL isRefreshing;
@property (nonatomic) BOOL isLoadMoreing;
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

- (id)p_removeRepetitiveData:(id)a0;
- (void)refreshContentDataWithCompletion:(id /* block */)a0;
- (void)loadMoreContentDataWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
