@class NSArray, AWEHomePageRemoteManager, AWEHomePageRemoteModuleModel, AWEHomePageRemoteModuleContext, NSString;

@interface AWEHomePageRemoteBaseModuleController : NSObject <AWEHomePageRemoteModuleControllerProtocol>

@property (weak, nonatomic) AWEHomePageRemoteManager *manager;
@property (retain, nonatomic) AWEHomePageRemoteModuleModel *model;
@property (retain, nonatomic) AWEHomePageRemoteModuleContext *context;
@property (copy, nonatomic) NSArray *itemControllers;
@property (copy, nonatomic) NSArray *itemModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)homePageRemotePanelWillShow;
- (void)homePageRemotePanelDidShow;
- (void)homePageRemotePanelWillDismissWithReason:(long long)a0;
- (void)homePageRemotePanelDidDismissWithReason:(long long)a0;
- (void)rootVCWillAppear;
- (id)consumedBusinessIDArray;
- (long long)canShowItemCount;
- (void)reloadModuleControllerView;
- (BOOL)shouldShowModuleView;
- (void)moduleControllerThemeDidChange:(long long)a0;
- (double)moduleControllerHeightByWidth:(double)a0 withSection:(long long)a1;
- (id)initWithManager:(id)a0 withModel:(id)a1 withContext:(id)a2;
- (id)supportBusinessTypes;
- (long long)collectionViewNumberOfItems:(id)a0;
- (id)getItemModelAtRow:(long long)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 sizeForItemAtRow:(long long)a1 withCollectionWidth:(double)a2;
- (double)collectionViewMinimumInteritemSpacing:(id)a0;
- (double)collectionViewMinimumLineSpacing:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 referenceSizeForHeaderInSection:(long long)a1 withCollectionWidth:(double)a2;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)updateWithModel:(id)a0;

@end
