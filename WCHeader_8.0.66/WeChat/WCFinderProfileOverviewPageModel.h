@class WCFinderCGIProfile, NSString, NSArray, WCFinderProfileOverviewSection, NSMutableDictionary, NSMutableSet, AnyPromise, NSMutableArray, WCFinderStreamLoadingState;
@protocol WCFinderProfileOverviewPageModelDelegate;

@interface WCFinderProfileOverviewPageModel : WCFinderStreamProfilePageModel <WCFinderProfileOverviewSectionCountCangeExt, WCFinderOverviewFeedChangedExt, WCFinderStickTopChangeExt> {
    long long *layoutIdx;
}

@property (retain, nonatomic) NSMutableArray *supportSectionCtrls;
@property (retain, nonatomic) AnyPromise *pageDataLoadedValue;
@property (copy, nonatomic) id /* block */ pageDataLoadedValueSetter;
@property (retain, nonatomic) NSMutableDictionary *defaultOrders;
@property (retain, nonatomic) NSMutableDictionary *secCtrlClsMap;
@property (retain, nonatomic) NSMutableDictionary *secCtrlMap;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSMutableDictionary *layoutMap;
@property (nonatomic) unsigned long long cacheItemSaveKey;
@property (nonatomic) BOOL checkAllCGIFinish;
@property (retain, nonatomic) NSMutableDictionary *pbSectionIdMap;
@property (retain, nonatomic) NSMutableDictionary *secitonDefMap;
@property (retain, nonatomic) NSMutableDictionary *cacheSections;
@property (retain, nonatomic) NSMutableDictionary *sectionMap;
@property (retain, nonatomic) NSMutableSet *pendingFetch;
@property (retain, nonatomic) WCFinderStreamLoadingState *homeCGILoadingState;
@property (retain, nonatomic) WCFinderCGIProfile *firstCGIProfile;
@property (nonatomic) BOOL waittingFirstPageData;
@property (nonatomic) long long cgiState;
@property (nonatomic) BOOL hasLoadCache;
@property (retain, nonatomic) WCFinderProfileOverviewSection *moreFeedSec;
@property (readonly, nonatomic) BOOL pageDataLoaded;
@property (readonly, nonatomic) BOOL isPullingMode;
@property (weak, nonatomic) id<WCFinderProfileOverviewPageModelDelegate> delegate;
@property (retain, nonatomic) NSArray *pendingFetchSections;
@property (readonly, nonatomic) WCFinderStreamLoadingState *loadingState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)allowLimitMode;
+ (BOOL)shouldDisplay:(id)a0;
+ (BOOL)pageIsRequired;
+ (BOOL)recordTabDisplayFlagToExtInfo;
+ (int)tabId;

- (id)init;
- (id)displayName;
- (id)viewPageClassName;
- (void)loadSectionDefines;
- (void)resetLayoutDefaultSortIndex;
- (void)dealloc;
- (id)displaySectionCtrls;
- (id)sectionCtrlForSecType:(long long)a0;
- (id)sectionWithType:(long long)a0;
- (BOOL)isMoreFeedSectionLoadingFristPage;
- (void)beforeLoadCache;
- (void)doLoadCache;
- (void)doLoadCache:(id /* block */)a0;
- (BOOL)enableInsertUploadFeeds;
- (void)update:(long long)a0 necessary:(BOOL)a1 block:(id /* block */)a2;
- (id)ensureSection:(long long)a0;
- (BOOL)shouldDisplayTab;
- (void)requestPageData;
- (void)refetchPageData;
- (void)startFetchCGI:(id /* block */)a0;
- (void)_fetchCGITryEnterIdle;
- (id)handleCGISectionList:(id)a0;
- (void)_initizlizeSectionWithSecInfo:(id)a0;
- (void)notifyRequestDataFinish:(BOOL)a0;
- (void)storeCache;
- (void)resortSectionsFromMap;
- (long long)sortSections:(id)a0 right:(id)a1;
- (id)createClickFeedVM:(id)a0;
- (void)ensurePullableJustWatchData:(id)a0 watchAction:(id)a1;
- (BOOL)triggerFetchMore:(id)a0 complete:(id /* block */)a1;
- (void)onNextFeedArrayChange;
- (void)onProfileOverviewSection:(long long)a0 changedCount:(long long)a1;
- (void)onFinderStickTopChanged:(id)a0;
- (void)profileFeedPageNotifyFeedChanged:(id)a0;
- (id)reportParamsBlock;
- (void).cxx_destruct;

@end
