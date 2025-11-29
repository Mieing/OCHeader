@class NSArray, MJShootBeautyMainPanelItem, NSMutableDictionary, MJShootBeautyItem, OMJBeautyAdjustmentDesc;

@interface MJShootBeautyInspectorViewModel : MJShootEffectMaterialViewModel

@property (retain, nonatomic) MJShootBeautyMainPanelItem *selectedBeautyMainPanelItem;
@property (retain, nonatomic) NSArray *beautyMainPanelItems;
@property (retain, nonatomic) OMJBeautyAdjustmentDesc *adjustingBeautyDesc;
@property (retain, nonatomic) MJShootBeautyItem *selectedBeautyItem;
@property (retain, nonatomic) NSArray *beautyItemsForAdjustingDesc;
@property (retain, nonatomic) NSMutableDictionary *beautyDescByID;
@property (retain, nonatomic) NSMutableDictionary *originalBeautyDescByID;
@property (nonatomic) BOOL didAdjustBeautyParam;

+ (id)defaultMainPanelItems;

- (id)init;
- (void)fetchBeautyDataIfNeededWithCompletion:(id /* block */)a0;
- (void)fetchBeautyDataWithCompletion:(id /* block */)a0;
- (id)getBeautyDescWithItem:(id)a0;
- (id)getOriginalBeautyDescWithItem:(id)a0;
- (void)didSelectBeautyMainPanelItem:(id)a0;
- (void)didSelectBeautyItem:(id)a0;
- (void)clearSelectedBeautyItem;
- (void)refetchAndRestoreBeautyEffectWithCompletion:(id /* block */)a0;
- (void)loadBeautyMainPanelItem:(id)a0 shouldUpdateEffect:(BOOL)a1 completion:(id /* block */)a2;
- (void)prepareToAdjustingDescWithCompletion:(id /* block */)a0;
- (void)didFinishAdjustingDesc;
- (void)resetAdjustingDesc;
- (void)resetAllBeautyDescs;
- (void)adjustingDescOnItemValueChanged:(id)a0;
- (void)updateCamEffectWithBeautyDesc:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearBeautyEffectWithCompletion:(id /* block */)a0;
- (id)selectedBeautyMainPanelItemIndexPath;
- (id)selectedBeautyItemIndexPath;
- (id)beautyItemsWithAdjustingDesc:(id)a0 originalDesc:(id)a1;
- (void)updateUserCachedBeautyDesc:(id)a0 materialID:(id)a1;
- (id)getUserCachedBeautyDescWithID:(id)a0 materialID:(id)a1;
- (id)calcUserCachedBeautyDescKeyWithID:(id)a0;
- (void).cxx_destruct;

@end
