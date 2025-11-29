@class NSArray, NSString, NSMutableArray, AWEIMPlusPanelView;

@interface AWEIMMessageListPlusPanelComponent : AWEIMComponentBase <AWEIMMessageListPlusPanelInterface, AWEIMMessageListBottomQuoteAction, AWEIMInputVIewControllerAction>

@property (retain, nonatomic) AWEIMPlusPanelView *panelView;
@property (copy, nonatomic) NSArray *platformItemList;
@property (copy, nonatomic) NSArray *cachedItemList;
@property (copy, nonatomic) NSArray *filteredItemList;
@property (copy, nonatomic) NSArray *localItemList;
@property (copy, nonatomic) NSArray *itemList;
@property (readonly, nonatomic) NSArray *preferredLocalModelOrder;
@property (nonatomic) BOOL panelViewIsReadyOnScreen;
@property (retain, nonatomic) NSMutableArray *insertedItemList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)inputViewTypeDidChange:(long long)a0 oldInputViewType:(long long)a1;
- (id)plusPanelView;
- (void)tryInsertModel:(id)a0;
- (void)updatePanelForInputViewType:(long long)a0 oldType:(long long)a1;
- (void)reloadPanelWithPlatformChatPanels:(id)a0;
- (void)onPlayBottomQuoteCoordinateAnimation:(BOOL)a0;
- (void)p_mergeLocalItemListWithPlatformChatPanels;
- (void)p_lazyInitDataListIfNeededWithContext:(id)a0;
- (void)p_tryInsertModel:(id)a0;
- (id)reduceItemsWith:(id)a0;
- (void)p_trackClickEventForVisible:(BOOL)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (id)conversation;

@end
