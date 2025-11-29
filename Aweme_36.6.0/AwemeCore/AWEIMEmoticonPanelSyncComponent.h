@class AWEIMEmoticonThemesCollectionView, NSString, UICollectionView;
@protocol AWEIMEmoticonActionComponent, AWEIMEmoticonPanelDataComponent, AWEIMEmoticonTabDataComponent, AWEIMEmoticonPanelPage, AWEIMEmoticonTrackComponent;

@interface AWEIMEmoticonPanelSyncComponent : AWEIMComponentBase <AWEIMEmoticonPanelSyncComponent>

@property (weak, nonatomic) UICollectionView *tabCollectionView;
@property (weak, nonatomic) UICollectionView *panelCollectionView;
@property (weak, nonatomic) AWEIMEmoticonThemesCollectionView *themesCollectionView;
@property (weak, nonatomic) id<AWEIMEmoticonTabDataComponent> tabDataComponent;
@property (weak, nonatomic) id<AWEIMEmoticonPanelDataComponent> panelDataComponent;
@property (weak, nonatomic) id<AWEIMEmoticonTrackComponent> trackComponent;
@property (weak, nonatomic) id<AWEIMEmoticonActionComponent> actionComponent;
@property (retain, nonatomic) id<AWEIMEmoticonPanelPage> selectedPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)syncTabToUniqueID:(id)a0 animated:(BOOL)a1 enterMethod:(id)a2;
- (void)syncPanelToUniqueID:(id)a0 animated:(BOOL)a1 enterMethod:(id)a2;
- (void)syncTabToCurrentUniqueIDWithAnimated:(BOOL)a0;
- (void)syncPanelToCurrentUniqueIDWithAnimated:(BOOL)a0;
- (long long)p_findIndexWithUniqueID:(id)a0 inPageArray:(id)a1;
- (void)p_updateSelectionIfNeededWithPage:(id)a0 enterMethod:(id)a1;
- (void)p_collectionView:(id)a0 scrollToItemAtIndex:(long long)a1 pageCount:(long long)a2 animated:(BOOL)a3 isPanelCollectionView:(BOOL)a4;
- (void).cxx_destruct;

@end
