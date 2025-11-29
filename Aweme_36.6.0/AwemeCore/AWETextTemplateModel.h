@class NSString, NSArray, NSMutableDictionary, IESEffectModel, AWETextTemplateCategoryModel;
@protocol AWETextTemplateModelDelegate, AWETextTemplateModelDataSource;

@interface AWETextTemplateModel : NSObject <AWETextTemplateCategoryModelDelegate, AWETextTemplateCategoryModelDataSource, AWETextTemplateDownloadObserverProtocol>

@property (copy, nonatomic) NSString *panelName;
@property (copy, nonatomic) NSArray *urlPrefix;
@property (retain, nonatomic) NSMutableDictionary *bindStickerMap;
@property (nonatomic) BOOL hotTabChanged;
@property (nonatomic) BOOL enableNewTextTemplate;
@property (retain, nonatomic) IESEffectModel *currentSticker;
@property (retain, nonatomic) IESEffectModel *currentChildSticker;
@property (retain, nonatomic) IESEffectModel *stickerWillSelect;
@property (retain, nonatomic) NSString *currentStickerIdentifier;
@property (copy, nonatomic) NSArray *stickerCategoryModels;
@property (retain, nonatomic) AWETextTemplateCategoryModel *currentCategoryModel;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (weak, nonatomic) id<AWETextTemplateModelDelegate> delegate;
@property (weak, nonatomic) id<AWETextTemplateModelDataSource> dataSource;
@property (nonatomic) unsigned long long stickerCategoryListLoadMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stickerDownloadManager:(id)a0 didFinishDownloadSticker:(id)a1 extraParams:(id)a2;
- (void)stickerDownloadManager:(id)a0 didFailDownloadSticker:(id)a1 withError:(id)a2;
- (void)stickerDownloadManager:(id)a0 didBeginDownloadSticker:(id)a1;
- (void)downloadStickerIfNeed:(id)a0;
- (void)stickerCategoryModelDidBeginLoadStickers:(id)a0;
- (void)stickerCategoryModelDidFailLoadStickers:(id)a0 withError:(id)a1;
- (void)stickerCategoryModelDidFinishLoadStickers:(id)a0;
- (void)stickerCategoryModelDidUpdateStickers:(id)a0;
- (void)fetchStickerCategoryListInternal;
- (void)loadStickerCategoryList;
- (void)handleWithCategories:(id)a0 urlPrefix:(id)a1 error:(id)a2;
- (long long)tabIndexForCategoryModel:(id)a0;
- (void)loadStickerCategoryListIfNeeded;
- (void)insertStickersAtHotTab:(id)a0;
- (void)resetHotTab;
- (id)initWithPanelName:(id)a0 currentSticker:(id)a1 currentChildSticker:(id)a2 enableNewTextTemplate:(BOOL)a3;
- (BOOL)supportMultiCategories;
- (void)monitorOpenEditorDurationWithSuccess:(BOOL)a0 error:(id)a1 logTypeStr:(id)a2;
- (void)stickerCategoryModel:(id)a0 fetchEffectListForPanelName:(id)a1 categoryKey:(id)a2 completionHandler:(id /* block */)a3;
- (void)updateDownloadedCell:(id)a0;
- (void).cxx_destruct;

@end
