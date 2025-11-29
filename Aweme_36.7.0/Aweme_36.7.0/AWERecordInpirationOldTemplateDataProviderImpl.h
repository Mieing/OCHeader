@class NSNumber, AWERecordInspirationCategoryItem, ACCMVCategoryModel, NSDictionary, NSString, NSMutableArray, AWERecordInspirationDetail;

@interface AWERecordInpirationOldTemplateDataProviderImpl : NSObject <ACCMVTemplatesDataControllerProtocol>

@property (retain, nonatomic) AWERecordInspirationCategoryItem *categoryItem;
@property (retain, nonatomic) AWERecordInspirationDetail *detail;
@property (nonatomic) long long defaultIndex;
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

- (void)refreshContentDataWithCompletion:(id /* block */)a0;
- (void)loadMoreContentDataWithCompletion:(id /* block */)a0;
- (long long)initializeIndex;
- (id)initWithCategoryItem:(id)a0 detail:(id)a1;
- (void)configFeedContentData;
- (id)convertDataFormatWithDetail:(id)a0;
- (void).cxx_destruct;

@end
