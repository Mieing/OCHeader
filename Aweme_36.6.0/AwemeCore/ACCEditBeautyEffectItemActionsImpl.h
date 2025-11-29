@class ACCEditBeautyEffectDDExeContext, NSString;

@interface ACCEditBeautyEffectItemActionsImpl : NSObject <ACCEditBeautyEffectItemActions>

@property (retain, nonatomic) ACCEditBeautyEffectDDExeContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)turnOnBeauty;
- (void)turnOffBeauty;
- (void)resetItemApplyStatusWithNodeIds:(id)a0;
- (void)updateItemInfo:(id)a0;
- (void)applyItemStatuaWithNodeIds:(id)a0;
- (void)updateItem:(id)a0 value:(long long)a1;
- (void)resetItemSelectStatusWithNodeIds:(id)a0;
- (void)selectItem:(id)a0 exposeChildItemNodeIds:(id)a1;
- (void)resetNodeIds:(id)a0;
- (void)resetAllBeauty;
- (void)markItemsAsDownloaded:(id)a0;
- (void)markAllItemsAsDownloaded;
- (void)updateBeautyAvailabilities:(id)a0;
- (void)updateItemsWithDictionary:(id)a0;
- (void)selectItemParentIsCategoryModelWithModel:(id)a0 itemId:(id)a1 oldData:(id)a2 newData:(id)a3 toRemoveItemIds:(id)a4 exposeChildItemNodeIds:(id)a5;
- (void)selectItemParentIsStyleMoreNodeWithModel:(id)a0 itemId:(id)a1 oldData:(id)a2 newData:(id)a3 isParentItemAppliable:(BOOL)a4 toRemoveItemIds:(id)a5 exposeChildItemNodeIds:(id)a6;
- (void)selectItemParentIsItemModelWithModel:(id)a0 itemId:(id)a1 oldData:(id)a2 newData:(id)a3 isParentItemAppliable:(BOOL)a4 toRemoveItemIds:(id)a5 exposeChildItemNodeIds:(id)a6;
- (void)p_resetSubTreeWithNode:(id)a0 oldState:(id)a1 newState:(id)a2 shouldResetBranchAvailability:(BOOL)a3;
- (void)p_resetSubTreeCurrentNodeIsKindOffClassStyleMoreNodeWithNode:(id)a0 oldState:(id)a1 newState:(id)a2 shouldResetBranchAvailability:(BOOL)a3;
- (void)p_resetSubTreeCurrentNodeChildNodesNotEmptyWithNode:(id)a0 oldState:(id)a1 newState:(id)a2 shouldResetBranchAvailability:(BOOL)a3;
- (void)p_resetSubTreeCurrentNodeIsKindOffClassItemModelWithNode:(id)a0 oldState:(id)a1 newState:(id)a2 shouldResetBranchAvailability:(BOOL)a3;
- (void)p_resetSubTreeCurrentNodeIsKindOffClassCategoryModelWithNode:(id)a0 oldState:(id)a1 newState:(id)a2 shouldResetBranchAvailability:(BOOL)a3;
- (void).cxx_destruct;
- (void)selectItem:(id)a0;
- (void)selectCollection:(id)a0;

@end
