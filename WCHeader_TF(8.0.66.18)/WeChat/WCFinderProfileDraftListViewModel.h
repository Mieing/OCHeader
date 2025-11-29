@class WCFinderBaseCgi, NSMutableDictionary, NSArray, NSData, NSString, NSMutableArray;
@protocol WCFinderProfileDraftListViewModelDelegate;

@interface WCFinderProfileDraftListViewModel : WCFinderStreamProfilePageModel <WCFinderFeedDraftExt, WCFinderLocalDraftExt>

@property (retain, nonatomic) NSMutableArray *mutableContentVMS;
@property (nonatomic) BOOL continueFlag;
@property (retain, nonatomic) NSData *lastBuff;
@property (weak, nonatomic) WCFinderBaseCgi *loadingCGI;
@property (retain, nonatomic) NSMutableArray *savingDraftList;
@property (nonatomic) BOOL forbidenModifyMVDraft;
@property (retain, nonatomic) NSMutableDictionary *aigcTaskIdDic;
@property (weak, nonatomic) id<WCFinderProfileDraftListViewModelDelegate> delegate;
@property (readonly, nonatomic) NSArray *contentVMS;
@property (readonly, nonatomic) BOOL loading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldDisplay:(id)a0;
+ (int)tabId;
+ (long long)compareDraftA:(id)a0 draftB:(id)a1;
+ (id)mergeAndSortWithArray:(id)a0 anotherArray:(id)a1;

- (id)init;
- (void)doLoadCache;
- (void)requestPageData;
- (void)dealloc;
- (id)currentTabUsername;
- (id)displayName;
- (id)viewPageClassName;
- (BOOL)shouldDisplayTab;
- (void)reportClickTab:(int)a0;
- (void)reportExposeTab:(int)a0;
- (void)_loadCacheData:(id)a0;
- (void)requestNextPageData;
- (void)_requestNextPageData:(BOOL)a0;
- (void)appendSavingDraftList:(id)a0 firstPage:(BOOL)a1;
- (void)_addObjectsFromArrayToContentVMs:(id)a0 firstPage:(BOOL)a1;
- (void)_handleEmptyAppendArray;
- (id)_getLocalDraftArrayForAppendArray:(id)a0 firstPage:(BOOL)a1;
- (id)_getLocalDraftArrayBySvrFirstAppendVM:(id)a0 lastAppendVM:(id)a1 firstPage:(BOOL)a2 isContinue:(BOOL)a3;
- (id)mapDataItems:(id)a0;
- (id)mapDraftItems:(id)a0;
- (id)createDraftVM:(id)a0;
- (void)deleteItem:(id)a0 callback:(id /* block */)a1;
- (void)retryItem:(id)a0;
- (BOOL)deleteLocalDraft:(id)a0;
- (BOOL)hasTargetDraftByDraftId:(id)a0;
- (void)onFinderFeedDraftDeleted:(id)a0;
- (void)onFinderFeedDraftAdded:(id)a0;
- (void)onFinderFeedDraftCreated:(id)a0;
- (void)onFinderLocalDraftDeleted:(id)a0;
- (void)onFinderLocalDraftAdded:(id)a0;
- (void)queryAigcTaskProgressByLocalDraft:(id)a0;
- (void)_handleAIGCAsyncDidRecevieQueryResponseNoti:(id)a0;
- (void).cxx_destruct;

@end
