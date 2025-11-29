@class UIView, NSString, NSArray, AWEIMChatPanelItemTracker, NSMutableDictionary, AWEIMChatPanelViewModel, NSDictionary, UICollectionView, AWEIMMessageConversation, AWEIMConversationContext;
@protocol AWEIMChatPanelViewDelegate, IESIMCarouselIndicatorProtocol;

@interface AWEIMPlusPanelView : UIView <AWEIMChatPanelCollectionViewLayoutDataSource, UICollectionViewDataSource, UICollectionViewDelegate, AWEIMChatPanelItemTrackerDelegate, AWEIMPlusPanelViewProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView<IESIMCarouselIndicatorProtocol> *carouselIndicator;
@property (retain, nonatomic) NSArray *chatPanelModelArray;
@property (retain, nonatomic) NSMutableDictionary *trackMap;
@property (retain, nonatomic) AWEIMChatPanelItemTracker *tracker;
@property (nonatomic) long long currentPageIndexForSlideTrack;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) AWEIMConversationContext *conversationContext;
@property (nonatomic) BOOL isQuoteReplying;
@property (weak, nonatomic) id<AWEIMChatPanelViewDelegate> delegate;
@property (retain, nonatomic) AWEIMChatPanelViewModel *viewModel;
@property (retain, nonatomic) NSDictionary *nativeChatPanelTypeToPlatformChatPanelType;
@property (nonatomic) BOOL hasBackgroundImage;
@property (nonatomic) BOOL backgroundIsBright;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)panelHeight;

- (void)updateDataSource:(id)a0;
- (id)dynamicTextColorWhileChatHasBackgroundImage;
- (void)updatePanelForInputViewType:(long long)a0 oldType:(long long)a1;
- (unsigned long long)numberOfItemsInChatPanel;
- (id)currentItemsOnScreen;
- (void)checkIfUpdatedPlatformChatPanelTypeWithLocalResults:(id)a0;
- (long long)realItemIndexFromIndexPath:(id)a0;
- (void)reloadDataWithPlatformChatPanelModels;
- (id)p_collectionViewLayout;
- (void)updateCollectionViewWidth:(double)a0;
- (void)updateHasTabBar:(BOOL)a0;
- (void)updatePanelVisible:(BOOL)a0;
- (void)updateVisibleCellsTextColor;
- (void)p_resetCarouseIndicator;
- (void)p_trackPanelSlideWithDirection:(long long)a0;
- (void)p_trackPlusPanelClickWithModel:(id)a0;
- (void)p_trackPlusPanelClickWithItem:(id)a0;
- (long long)p_currentPageCursor;
- (void)p_setupUI;
- (void)reloadData;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)accessibilityElements;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)accessibilityScroll:(long long)a0;

@end
