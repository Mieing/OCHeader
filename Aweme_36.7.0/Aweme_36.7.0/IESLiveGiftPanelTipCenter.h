@class NSMutableDictionary;

@interface IESLiveGiftPanelTipCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *graph;
@property (retain, nonatomic) NSMutableDictionary *items;

- (void)showTipsIfNeededWithContext:(id)a0;
- (void)p_addItem:(id)a0;
- (id)p_sortedItemsFromGraph;
- (void)p_showTipIfNeeded:(long long)a0 sortedItems:(id)a1 context:(id)a2;
- (void)p_updateDP;
- (void)showTipsIfNeeded;
- (void).cxx_destruct;
- (id)init;
- (id)graphDescription;
- (void)registerItem:(id)a0;

@end
