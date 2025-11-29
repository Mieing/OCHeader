@class UIView, NSString, AWEIMMessage, UIButton, AWEIMMessageInteractiveDataManager, NSMutableArray, UIViewController, UICollectionView, AWEIMMessageInteractiveUserListHeaderView, AWEIMConversationContext;

@interface AWEIMMessageInteractiveUserListViewController : UIViewController <IESIMDragDismissViewControllerProtocol, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWEIMMessageInteractiveDataDelegate, AWEIMMessageInteractiveUserDelegate, AWEIMMessageDataEventProtocol>

@property (retain, nonatomic) AWEIMMessageInteractiveUserListHeaderView *headerView;
@property (retain, nonatomic) UIButton *topDismissButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) UIViewController *fromVC;
@property (retain, nonatomic) UIView *forbidNavGesView;
@property (retain, nonatomic) AWEIMMessageInteractiveDataManager *dataManager;
@property (nonatomic) BOOL isMultiType;
@property (nonatomic) unsigned long long interactivePanelType;
@property (retain, nonatomic) NSMutableArray *interactivePanelTypes;
@property (retain, nonatomic) NSMutableArray *titleArray;
@property (nonatomic) long long initIndex;
@property (weak, nonatomic) AWEIMConversationContext *conversationContext;
@property (retain, nonatomic) AWEIMMessage *message;
@property (nonatomic) BOOL isDoubleLike;
@property (nonatomic) BOOL shouldShowState;
@property (copy, nonatomic) NSString *initialKey;
@property (copy, nonatomic) id /* block */ didSelectUserWithPropertyItem;
@property (retain, nonatomic) UIView *baseView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDismissTapGesture:(id)a0;
- (id)dismissTapGesture;
- (void)setDismissPanGesture:(id)a0;
- (id)dismissPanGesture;
- (void)setLastDismissPanGestureLocation:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })lastDismissPanGestureLocation;
- (void)showOnView:(id)a0 initialLayoutBlock:(id /* block */)a1 targetLayoutBlock:(id /* block */)a2 animated:(BOOL)a3;
- (void)performDismissAnimated:(BOOL)a0;
- (void)_layoutBaseView:(BOOL)a0;
- (void)_addMaskToBaseView;
- (void)_layoutBaseViewSubViews;
- (void)ies_setupDismissGesture;
- (void)ies_handleDismissPanGesture:(id)a0;
- (void)ies_handleDismissTapGesture:(id)a0;
- (id)ies_conflictScrollView;
- (void)setIes_conflictScrollView:(id)a0;
- (void)showOnViewController:(id)a0 animated:(BOOL)a1;
- (void)didSelectUserWithPropertyItem:(id)a0;
- (void)onMessagePropertyItemFetchComplete;
- (void)topDismissButtonTapped;
- (void)emptyPanGes:(id)a0;
- (id)_getTabNameWith:(int)a0;
- (void)__trackPanelShowDataWithEnterFrom:(id)a0 enterMethod:(id)a1 tabName:(id)a2;
- (void)refreshHeaderTabView;
- (void)emptyTapGes:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)dismissAnimated:(BOOL)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (double)baseHeight;
- (void)viewDidLoad;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
