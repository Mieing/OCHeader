@class NSString, NSArray, MJMaterialCache, NSMutableDictionary, MJSegmentViewModel, OMJMaterialManager, NSIndexPath;
@protocol MJStickerPickerViewModelDelegate;

@interface MJStickerPickerViewModel : NSObject <MJMaterialCacheDelegate, MJMaterialLoadingStatusViewModel>

@property (retain, nonatomic) OMJMaterialManager *manager;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSArray *materialItems;
@property (copy, nonatomic) NSArray *recentItems;
@property (retain, nonatomic) MJMaterialCache *materialCache;
@property (retain, nonatomic) NSMutableDictionary *downloadStatus;
@property (weak, nonatomic) id<MJStickerPickerViewModelDelegate> delegate;
@property (retain, nonatomic) MJSegmentViewModel *entranceSegmentVM;
@property (retain, nonatomic) NSIndexPath *entranceIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMaterailManager:(id)a0 scene:(unsigned long long)a1;
- (id)initWithMaterailManager:(id)a0 scene:(unsigned long long)a1 materialCache:(id)a2;
- (id)entranceMaterialId;
- (void)fetchDatas:(id /* block */)a0;
- (BOOL)shouldShowSectionHeader;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)itemAtIndexPath:(id)a0;
- (long long)adjustSectionIndexIfNeeded:(long long)a0;
- (BOOL)isReplaceMode;
- (BOOL)needFilterMaterial;
- (BOOL)isValidMaterial:(id)a0;
- (void)loadMaterail:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (void)materialCacheDidUpdate:(id)a0 withCacheKey:(id)a1;
- (void)updateRecentItems;
- (unsigned long long)mj_loadingStatusWithID:(id)a0;
- (float)mj_loadingProgressWithID:(id)a0;
- (void)mj_loadMaterialWithID:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)loadingStatusForID:(id)a0 threadSafetyHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
