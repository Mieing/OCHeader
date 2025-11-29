@class MJShootComposingViewModel, NSString, NSArray, MJShootComposingTemplateSinglePageViewModel, NSMutableDictionary, WCGetCameraTemplateListParams, NSMutableArray, NSMutableSet, UBDictionarySignal, MMCameraTemplateItem, MJShootTemplateItemReportModel;
@protocol MJShootComposingTemplatePanelViewModelDelegate;

@interface MJShootComposingTemplatePanelViewModel : NSObject <MJShootComposingTemplateSinglePageViewModelTabDataSource>

@property (retain, nonatomic) NSArray *singlePageVMs;
@property (readonly, nonatomic) NSMutableDictionary *downloadTemplateIDByRequestID;
@property (retain, nonatomic) MJShootComposingTemplateSinglePageViewModel *defaultTabVM;
@property (nonatomic) long long favTabIndex;
@property (retain, nonatomic) NSArray *tabInfos;
@property (retain, nonatomic) NSArray *templateItemsForDefaultTab;
@property (retain, nonatomic) NSString *downloadingTemplateID;
@property (weak, nonatomic) MJShootComposingViewModel *shootComposingVM;
@property (nonatomic) unsigned long long selectedTabID;
@property (retain, nonatomic) NSString *selectedTemplateID;
@property (nonatomic) BOOL isInSingleTemplateShowingMode;
@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) WCGetCameraTemplateListParams *cgiParams;
@property (retain, nonatomic) NSMutableArray *templateItemsForListView;
@property (readonly, nonatomic) UBDictionarySignal *templateDownloadingProgressDidChangeSignal;
@property (readonly, nonatomic) UBDictionarySignal *templateDownloadingDidFinishSignal;
@property (readonly, nonatomic) UBDictionarySignal *templatePanelDidLocalUpdateFavTabSignal;
@property (weak, nonatomic) id<MJShootComposingTemplatePanelViewModelDelegate> delegate;
@property (nonatomic) unsigned long long enterScene;
@property (retain, nonatomic) NSMutableSet *loadedTemplateItemReportModels;
@property (retain, nonatomic) NSMutableSet *displayedTemplateItemReportModels;
@property (nonatomic) unsigned long long currentTabID;
@property (retain, nonatomic) MJShootTemplateItemReportModel *userSelectedTemplateItemReportModel;
@property (nonatomic) BOOL shouldHideNoneTemplateShootEntry;
@property (readonly, nonatomic) MMCameraTemplateItem *emptyItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createDummyFavTabInfo;
+ (long long)createDummyFavTabIndex;
+ (id)favTabInfoInTabs:(id)a0;
+ (long long)favTabIndexInTabs:(id)a0;

- (id)initWithUsername:(id)a0 cgiParams:(id)a1;
- (id)templatePageViewModels;
- (void)fetchTemplateItemsForDefaultTab;
- (void)fetchTemplateItemWithShortURL:(id)a0;
- (void)fetchTemplateItemWithID:(id)a0 notUseCache:(BOOL)a1;
- (id)tabIDKeyWithID:(unsigned long long)a0;
- (BOOL)isTemplateLoadedWithItem:(id)a0;
- (void)startDownloadingTemplateWithItem:(id)a0;
- (void)didFinishCurrentTemplateItemDownloading;
- (void)templateSinglePageViewModel:(id)a0 didFetchTabInfos:(id)a1 currentTabInfo:(id)a2 itemsForDefaultTab:(id)a3;
- (void)templateSinglePageViewModel:(id)a0 didUpdateTemplateItems:(id)a1;
- (void)loadMoreTemplateItemsForDefaultTab;
- (unsigned long long)getTemplateScene;
- (void)addTemplateToFavoritesWithItem:(id)a0 completionHandler:(id /* block */)a1;
- (void)onDidAddFavTemplateItem:(id)a0;
- (void)removeTemplateFromFavoritesWithItem:(id)a0 completionHandler:(id /* block */)a1;
- (void)onDidRemoveFavTemplateItem:(id)a0;
- (BOOL)updateTemplateItemFavoriteStatus:(id)a0;
- (void)insertFavTabWithInfo:(id)a0 atIndex:(long long)a1;
- (void)removeFavTabAtIndex:(long long)a0;
- (id)createTemplateSinglePageViewModelWithTabID:(unsigned long long)a0 tabType:(unsigned int)a1;
- (void).cxx_destruct;

@end
