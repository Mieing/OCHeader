@class NSString, NSArray, AEKBasicResource, ACCAEEffectPanelCategoryModel, IESEffectModel, ACCAEEffectPanelDataSource, AWEStickerPickerTabViewLayout;
@protocol ACCAEEffectPanelViewModelDelegate, ACCAEEffectTrackerService, ACCAEGlobalDraftDownloadProtocol;

@interface ACCAEEffectPanelViewModel : NSObject <ACCAEEffectPanelCategoryModelDelegate, AWEStickerDownloadManagerObserverProtocol, ACCGenericEffectPanelViewModel>

@property (retain, nonatomic) NSArray *categories;
@property (nonatomic) long long categoryLoadStatus;
@property (retain, nonatomic) ACCAEEffectPanelCategoryModel *currentAppliedCategory;
@property (retain, nonatomic) IESEffectModel *currentAppliedEffect;
@property (retain, nonatomic) IESEffectModel *willApplyEffect;
@property (retain, nonatomic) AEKBasicResource *APJSResource;
@property (retain, nonatomic) ACCAEEffectPanelDataSource *dataSource;
@property (retain, nonatomic) AWEStickerPickerTabViewLayout *tabViewLayout;
@property (copy, nonatomic) NSString *defaultLandingCategoryKey;
@property (copy, nonatomic) NSString *defaultLandingEffectID;
@property (nonatomic) BOOL shouldUpdateDefaultLandingCategory;
@property (nonatomic) BOOL shouldUpdateDefaultLandingEffect;
@property (weak, nonatomic) id<ACCAEEffectPanelViewModelDelegate> delegate;
@property (retain, nonatomic) id<ACCAEEffectTrackerService> tracker;
@property (weak, nonatomic) id<ACCAEGlobalDraftDownloadProtocol> globalDraftDownloadHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stickerDownloadManager:(id)a0 didFailDownloadSticker:(id)a1 withError:(id)a2;
- (void)stickerDownloadManager:(id)a0 didBeginDownloadSticker:(id)a1;
- (void)stickerDownloadManager:(id)a0 didFinishDownloadSticker:(id)a1;
- (void)trackProSwitchCategoryShowDuration:(long long)a0 averageDuration:(long long)a1 forStickerCategory:(id)a2 isFirstScreen:(BOOL)a3;
- (void)configDefaultLandingCategory:(id)a0 defaultSelectedEffect:(id)a1;
- (void)prefetchCategoryInfoAndEffectListsOfSpecificCategories:(id)a0;
- (void)advanceEditorEffectPanelCategoryModelDidFinishLoadList:(id)a0 isLoadMore:(BOOL)a1;
- (void)advanceEditorEffectPanelCategoryModelDidBeginLoadList:(id)a0 isLoadMore:(BOOL)a1;
- (void)advanceEditorEffectPanelCategoryModelDidFailLoadList:(id)a0 isLoadMore:(BOOL)a1;
- (void)__fetchCategoriesInfoIfNeededWithCompletion:(id /* block */)a0;
- (void)notifyCurrentApplyModelDidUpdate;
- (void)clearCurrentAppliedEffect;
- (id)configDefaultLandingCategoryWithKey:(id)a0;
- (id)configDefaultLandingEffectWithID:(id)a0 inCategoryModel:(id)a1;
- (unsigned long long)findTabIndexForCategory:(id)a0;
- (void)predownloadCurrentCategoryEffectsIfNeeded:(id)a0;
- (void)updateAndBindCategories:(id)a0;
- (void)predownloadEffects:(id)a0;
- (void)fetchCategoriesInfoIfNeeded;
- (void)updateCurrentSelectCategoryWithIndex:(long long)a0;
- (void)downloadAndSelectEffectModel:(id)a0;
- (BOOL)isCurrentAppliedEffectModelEqualToEffectModel:(id)a0;
- (unsigned long long)findEffectIndexForCategory:(id)a0 effectModel:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
