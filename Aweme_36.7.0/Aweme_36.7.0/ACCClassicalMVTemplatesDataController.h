@class NSString, ACCMVCategoryModel, AWERecordInspirationCategoryItem, NSDictionary, NSMutableArray, NSNumber;
@protocol ACCMVTemplateModelProtocol;

@interface ACCClassicalMVTemplatesDataController : NSObject <ACCClassicalMVTemplatesDataController, ACCMVTemplatesDataControllerProtocol>

@property (nonatomic) BOOL isRefreshing;
@property (retain, nonatomic) id<ACCMVTemplateModelProtocol> sameMVTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
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

+ (id)classicalMVTemplatesDataController;

- (void)refreshContentDataWithCompletion:(id /* block */)a0;
- (void)loadMoreContentDataWithCompletion:(id /* block */)a0;
- (void)fetchUsageCountAndCollectState:(id)a0 urlPrefix:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
