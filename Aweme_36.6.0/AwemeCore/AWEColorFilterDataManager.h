@class NSString, NSArray, NSMutableDictionary, NSOperationQueue, NSMutableSet, IESEffectModel, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AWEColorFilterDataManager : NSObject <AWEColorFilterDataManager>

@property (retain, nonatomic) NSString *frontFilterId;
@property (retain, nonatomic) NSString *rearFilterId;
@property (retain, nonatomic) NSMutableSet *tempURLSet;
@property (retain, nonatomic) IESEffectModel *frontCameraFilter;
@property (retain, nonatomic) IESEffectModel *rearCameraFilter;
@property (retain, nonatomic) IESEffectModel *normalFilter;
@property (copy, nonatomic) NSString *panel;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *downloadQueue;
@property (retain, nonatomic) NSMutableArray *downloadingEffects;
@property (nonatomic) long long nextDownloadIndex;
@property (nonatomic) BOOL isFetching;
@property (nonatomic) BOOL enableComposerFilter;
@property (retain, nonatomic) NSArray *allEffects;
@property (retain, nonatomic) NSMutableDictionary *colorFilterConfigurationHelperDic;
@property (retain, nonatomic) NSOperationQueue *downloadOpQueue;
@property (nonatomic) BOOL forbidPostNotify;
@property (retain, nonatomic) NSMutableArray *updateEffectCompletions;
@property (nonatomic) unsigned long long filterPanelType;
@property (nonatomic) BOOL enablePrefetchOptimize;
@property (copy, nonatomic) NSArray *flattenAllEffects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)effectWithID:(id)a0;
+ (void)loadEffectWithID:(id)a0 completion:(id /* block */)a1;
+ (id)prevFilterOfFilter:(id)a0 filterArray:(id)a1;
+ (id)nextFilterOfFilter:(id)a0 filterArray:(id)a1;
+ (id)defaultManager;

- (id)effectWithID:(id)a0;
- (id)initWithCustomPanelName:(id)a0;
- (id)colorFilterConfigurationHelperWithType:(unsigned long long)a0;
- (void)addEffectToDownloadQueue:(id)a0 preload:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateEffectFiltersWithCompletion:(id /* block */)a0;
- (id)flattenedAggregatedEffects;
- (void)disablePostNotify;
- (id)childEffects;
- (id)getIPArrayFromHost:(id)a0;
- (id)getIPFromURLList:(id)a0;
- (void)downloadEffect:(id)a0 completion:(id /* block */)a1;
- (id)aggregatedEffects;
- (void)fetchEffectListStateCompletion:(id /* block */)a0;
- (void)updateEffectListStateWithCheckArray:(id)a0 uncheckArray:(id)a1;
- (void)updateEffectFilters;
- (long long)downloadStatusOfEffect:(id)a0;
- (void)addEffectToDownloadQueue:(id)a0;
- (void)addEffectToDownloadQueue:(id)a0 preload:(BOOL)a1;
- (id)allAggregatedEffects;
- (id)getDefaultPanelWithEnableComposer:(BOOL)a0;
- (void)handleLanguageChangedRefreshFilterResource:(id)a0;
- (void)updateEffectFiltersForce:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateAllEffectsWithResponse:(id)a0 reset:(BOOL)a1;
- (void)addNextEffectToDownloadQueue;
- (void)p_sendUpdateCompletionWithError:(id)a0;
- (void)p_tryPostNotify:(id)a0 obj:(id)a1;
- (id)effectsWithoutCategoryModel;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)availableEffects;

@end
