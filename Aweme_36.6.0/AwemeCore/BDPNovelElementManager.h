@class BDPLynxCardUtil, NSArray, NSMutableDictionary, NSString, NSMutableArray, BDPNovelComponentModel;
@protocol BDPPluginAppFlowAdvertisementImplProtocol, BDPFlowAdProtocol;

@interface BDPNovelElementManager : NSObject <BDPNovelInsertElementDelegate, BDPNovelManageFlowAdPolicyDelegate>

@property (retain, nonatomic) NSArray *insertPageConditions;
@property (retain, nonatomic) NSArray *generalElements;
@property (nonatomic) long long pageCount;
@property (retain, nonatomic) NSMutableDictionary *keyToGeneralElement;
@property (retain, nonatomic) NSMutableDictionary *keyToInsertPages;
@property (retain, nonatomic) NSMutableDictionary *idToInsertElement;
@property (retain, nonatomic) NSMutableDictionary *idToView;
@property (retain, nonatomic) NSMutableArray *pageElements;
@property (nonatomic) double adTimeStamp;
@property (nonatomic) double adViewTimeStamp;
@property (nonatomic) BOOL enablePreload;
@property (retain, nonatomic) BDPLynxCardUtil *lynxCardUtil;
@property (weak, nonatomic) BDPNovelComponentModel *model;
@property (retain, nonatomic) id<BDPPluginAppFlowAdvertisementImplProtocol> flowAdImpl;
@property (nonatomic) long long pageExposeCount;
@property (nonatomic) long long lastDirection;
@property (nonatomic) long long currentFlowAdPageGap;
@property (nonatomic) BOOL currentlFowAdTypeIsForce;
@property (retain, nonatomic) id<BDPFlowAdProtocol> cacheFlowAd;
@property (nonatomic) BOOL cacheFlowAdWaitingToDisplay;
@property (nonatomic) BOOL requestingFlowAd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cleanCacheIfNeeded;
- (void)clearAllElements;
- (void)doLoadFlowAd:(id)a0;
- (void)sendOnNovelFlowAdStateChange:(id)a0 pageCondition:(id)a1 error:(id)a2;
- (id)generatePageConditionForManagedFlowAdWithUnitID:(id)a0 realPageGap:(long long)a1;
- (id)genElementId;
- (BOOL)isValidUnitID:(id)a0 uniqueID:(id)a1 isForceFlowAd:(BOOL)a2 error:(id *)a3;
- (id)elementKeyMeta:(id)a0 offsetStart:(long long)a1 forChapterEnd:(BOOL)a2;
- (BOOL)isRelatedLynxSchemeValid:(id)a0;
- (id)prepreViewForGeneralElement:(id)a0 andContentMeta:(id)a1;
- (id)insertPageKey:(long long)a0 meta:(id)a1 forChapterEnd:(BOOL)a2;
- (void)generatePageElementWithCondition:(id)a0 contentMeta:(id)a1 shouldAddToArray:(id)a2;
- (void)sortInsertPageArray:(id)a0;
- (void)preloadFlowAd:(id)a0;
- (id)prepreViewForInsertPageElement:(id)a0 andContentMeta:(id)a1;
- (id)satisfied:(long long)a0 offsetEnd:(long long)a1 meta:(id)a2;
- (id)satisfiedForEndMeta:(id)a0;
- (id)satisfiedForStartMeta:(id)a0;
- (id)getSatisfiedPageConditionForChapterPageNo:(long long)a0 meta:(id)a1 readDirection:(long long)a2;
- (id)getSatisfiedPageConditionForChapterEnd:(id)a0;
- (id)getSatisfiedPageConditionForDynamicPage:(long long)a0 readDirection:(long long)a1 contentMeta:(id)a2;
- (id)getInsertViewForId:(id)a0 meta:(id)a1;
- (void)preloadFlowAdForChapterEnd:(id)a0;
- (void)preloadFlowAdForChapterPageNo:(long long)a0 meta:(id)a1 readDirection:(long long)a2;
- (void)preloadFlowAdForForDynamicPage:(long long)a0 readDirection:(long long)a1 contentMeta:(id)a2;
- (id)getGeneralElementsForIds:(id)a0 meta:(id)a1;
- (BOOL)enableFlowAdManaged;
- (void)needRefreshManagedFlowAdWaitingToDisplayState;
- (void)newPageExpose:(long long)a0 isFlowAd:(BOOL)a1;
- (void)updateExposeCountForUpdateRenderConfig;
- (id)getManagedFlowAdIfNeededWithReadDirection:(long long)a0 numberOfCVsBettwen:(long long)a1 contentMeta:(id)a2;
- (void)setGeneralElements:(id)a0 andPageContditions:(id)a1 model:(id)a2;
- (void)clearDynamicViewPages;
- (void)doLoadFlowAd;
- (void)stopAllFlowAd;
- (void).cxx_destruct;

@end
