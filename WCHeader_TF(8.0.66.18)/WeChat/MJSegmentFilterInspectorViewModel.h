@class NSString, NSArray, MJFilterAdjustmentValueItem, NSIndexPath;

@interface MJSegmentFilterInspectorViewModel : MJSegmentInspectorViewModel <MJMaterialLoadingStatusViewModel>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *titleItems;
@property (copy, nonatomic) NSArray *filterItems;
@property (retain, nonatomic) MJFilterAdjustmentValueItem *originalItem;
@property (retain, nonatomic) NSIndexPath *selectedTitleIndexPath;
@property (retain, nonatomic) NSIndexPath *selectedFilterIndexPath;
@property (retain, nonatomic) NSString *filterID;
@property (nonatomic) BOOL isFilterEnabled;
@property (nonatomic) float filterIntensity;
@property (readonly, nonatomic) BOOL isFilterAdjusted;

- (id)downloadStatus;
- (void)mj_loadMaterialWithID:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (float)mj_loadingProgressWithID:(id)a0;
- (unsigned long long)mj_loadingStatusWithID:(id)a0;
- (void)loadingStatusForID:(id)a0 threadSafetyHandler:(id /* block */)a1;
- (id)initWithSegment:(id)a0 type:(unsigned long long)a1;
- (void)setupData;
- (void)fetchItems:(id /* block */)a0;
- (void)loadMaterial:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (long long)numberOfSections:(BOOL)a0;
- (long long)numberOfItemsInSection:(long long)a0 isTitle:(BOOL)a1;
- (id)cellItemAtIndexPath:(id)a0 isTitle:(BOOL)a1;
- (BOOL)isCancelEnabled;
- (BOOL)isApplyAllEnabled;
- (BOOL)isResetEnabled;
- (id)title;
- (id)adjustableProtocols;
- (BOOL)hasChanges;
- (void)notifyDidCancel;
- (void)setValuesToOriginal;
- (void)notifyDidApplyToAll:(id)a0;
- (void).cxx_destruct;

@end
