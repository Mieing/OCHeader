@class ACCAIGCLoraProfileModel, AWERecordInspirationNetHelper, NSString, NSNumber, AWERecordInspirationDataMemoryCache;
@protocol ACCAIGCRecordListDataSourceProtocol;

@interface AWERecordInspirationDataContext : NSObject <AWERecordInspirationDataContextProtocol, AWERecordInspirationDataContextClassProtocol>

@property (retain, nonatomic) AWERecordInspirationDataMemoryCache *dataCache;
@property (retain, nonatomic) AWERecordInspirationNetHelper *netHelper;
@property (copy, nonatomic) id /* block */ categoryInfoCompletion;
@property (retain, nonatomic) AWERecordInspirationNetHelper *collectNetHelper;
@property (retain, nonatomic) ACCAIGCLoraProfileModel *preloadLoraProfileModel;
@property (copy, nonatomic) id /* block */ trasitionRefreshBlock;
@property (retain, nonatomic) NSNumber *loraCreateRemainingTime;
@property (retain, nonatomic) id<ACCAIGCRecordListDataSourceProtocol> aigcLibraryDataSource;
@property (copy, nonatomic) NSString *creationId;
@property (copy, nonatomic) NSString *shootWay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)syncGetLoraProfileModel;
+ (void)clearAllCacheData;
+ (void)loadMoreInspirationCategoryDetail:(id)a0 completion:(id /* block */)a1;
+ (void)refreshInspirationCategoryDetail:(id)a0 completion:(id /* block */)a1;
+ (id)createAIGCTabDataSource;
+ (id)syncQuerySearchDetailModelWithInspirationCategoryDetail:(id)a0;
+ (id)syncLoadInspirationCategoryDetail:(id)a0;
+ (void)loadAIGCLoraProfileCompletion:(id /* block */)a0;
+ (void)deletedInspirationDetail:(id)a0 item:(id)a1;
+ (void)cancelFavorInspirationDetail:(id)a0;
+ (void)insertInspirationDetail:(id)a0 item:(id)a1 location:(long long)a2;
+ (void)deletedAIGCLoraProfileCompletion:(id /* block */)a0;
+ (void)deletedAIGCLoraProfileWithoutNet:(long long)a0 completion:(id /* block */)a1;
+ (id)syncGetLoraRemainingTime;
+ (void)observerDataChangedEvent:(id /* block */)a0;
+ (id)syncQueryEffectWithModel:(id)a0;
+ (void)videoTemplateCancelCollectWithTemplateId:(unsigned long long)a0 templateType:(unsigned long long)a1 completion:(id /* block */)a2;
+ (void)videoTemplateCollectWithTemplateId:(unsigned long long)a0 templateType:(unsigned long long)a1 completion:(id /* block */)a2;
+ (void)sendDataChangedMessageWithCategoryItem:(id)a0;
+ (void)preloadInspirationData;
+ (void)loadInspirationCategoryItemCompletion:(id /* block */)a0;
+ (id)syncGetAIGCLibraryData;
+ (id)syncQueryPresetTemplateWithId:(id)a0;
+ (void)removeSearchDetailModel;
+ (void)loadMoreInspirationSearchCategoryDetail:(id)a0 completion:(id /* block */)a1;
+ (void)preloadEffectResourceWithModel:(id)a0;
+ (void)asyncQueryPresetTemplateWithId:(id)a0 templateType:(long long)a1 completion:(id /* block */)a2;
+ (id)defaultManager;

- (void)loadCategoryTab:(id /* block */)a0 preload:(BOOL)a1;
- (void)loadCategoryDetail:(id)a0 refresh:(BOOL)a1 preload:(BOOL)a2 completion:(id /* block */)a3;
- (void)preloadTemplateListWithArray:(id)a0 completion:(id /* block */)a1;
- (void)sendNetRequestTrackWithParam:(id)a0;
- (void)loadInspirationSearchCategoryDetailWithQueryParams:(id)a0 item:(id)a1 refresh:(BOOL)a2 preload:(BOOL)a3 config:(id)a4 completion:(id /* block */)a5;
- (id)updateFilteredCategory:(id)a0 Detail:(id)a1;
- (void)bindReqIdWithItem:(id)a0 reqId:(id)a1;
- (void)sendNoMoreTrackWithParam:(id)a0;
- (void)loadCategoryCardInfoWithDetail:(id)a0;
- (void)preloadEffectListWithArray:(id)a0;
- (id)updateFilteredTalentTaskCard:(id)a0;
- (void).cxx_destruct;

@end
