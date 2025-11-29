@class CKDDExeContext, NSString;

@interface AWERecordBeautyItemActionsImpl : NSObject <AWERecordBeautyItemActions>

@property (retain, nonatomic) CKDDExeContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)turnOnBeauty;
- (void)turnOffBeauty;
- (void)resetItemApplyStatusWithNodeIds:(id)a0;
- (void)applyItemStatuaWithNodeIds:(id)a0;
- (void)updateItem:(id)a0 value:(long long)a1;
- (void)resetItemSelectStatusWithNodeIds:(id)a0;
- (void)resetAllBeauty;
- (void)markItemsAsDownloaded:(id)a0;
- (void)markAllItemsAsDownloaded;
- (void)updateBeautyAvailabilities:(id)a0;
- (void)updateItemsWithDictionary:(id)a0;
- (void)p_resetSubTreeWithNode:(id)a0 oldState:(id)a1 newState:(id)a2 shouldResetBranchAvailability:(BOOL)a3;
- (void)selectItem:(id)a0 exposeChildItemNodeIds:(id)a1 isNeedRenderStatus:(BOOL)a2;
- (void)selectItems:(id)a0 exposeChildItemNodeIds:(id)a1 isNeedRenderStatus:(BOOL)a2;
- (void)updateItems:(id)a0 isNeedRenderStatus:(BOOL)a1;
- (void)updateItemsWithNotRenderAndNotAppliedStatus:(id)a0;
- (void)resetNode:(id)a0;
- (void).cxx_destruct;
- (void)removeItems:(id)a0;
- (void)selectItem:(id)a0;
- (void)selectCollection:(id)a0;
- (void)updateItems:(id)a0;

@end
