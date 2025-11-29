@class AWERecordInspirationCategoryItem, NSArray, NSString, AWERecordInspirationDetail;

@interface AWERecordInspirationFeedDataProviderImpl : NSObject <AWERecordInspirationDataProviderProtocol>

@property (retain, nonatomic) AWERecordInspirationDetail *detail;
@property (retain, nonatomic) AWERecordInspirationCategoryItem *categoryItem;
@property (retain, nonatomic) NSArray *dataSource;
@property (nonatomic) long long initIndex;
@property (retain, nonatomic) NSArray *detailList;
@property (nonatomic) BOOL isFromSearchRecommendHeaderViewStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (long long)initializeIndex;
- (id)initWithCategoryItem:(id)a0 detail:(id)a1;
- (id)initWithEffectNoAwemeInfoCategoryItem:(id)a0 detail:(id)a1;
- (id)initWithCategoryItem:(id)a0 detail:(id)a1 detailList:(id)a2 isFromSearchRecommendHeaderViewStatus:(BOOL)a3;
- (void)configFeedContentData;
- (id)convertDataFormatWithDetail:(id)a0;
- (void)configFeedContentDataWithEffectNoAwemeInfo;
- (id)updateFilteredCategoryDetail:(id)a0;
- (id)convertDataFormatWithEffectNoAwemeInfoDetail:(id)a0;
- (id)videoTemplateConvertAwemeModel:(id)a0;
- (void)bindTemplateWithAwemeModel:(id)a0 detail:(id)a1;
- (id)pictureTemplateConvertAwemeModel:(id)a0;
- (id)effectConvertAwemeModel:(id)a0;
- (id)initializeDataSource;
- (BOOL)initializeHasMore;
- (long long)localItemIndexPositionWith:(id)a0;
- (BOOL)isNeedCustomCoverPhotoStatus:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
