@class NSMutableArray, NSString, UICollectionView, HTSEventContext, UILabel, UIView, UICollectionViewCell;
@protocol IESLiveRoomService, IESLiveFeedAggregateCollectionViewCellProtocol, IESLiveFeedDrawerAnimatorProtocol;

@interface IESLiveFeedAggregateViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, IESLiveFeedDrawerViewControllerProtocol>

@property (retain, nonatomic) UIView *topContainerView;
@property (retain, nonatomic) UICollectionView *aggregateCollectionView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewCell<IESLiveFeedAggregateCollectionViewCellProtocol> *selectedCell;
@property (retain, nonatomic) id<IESLiveRoomService> currentRoom;
@property (retain, nonatomic) NSMutableArray *aggregateModels;
@property (nonatomic) BOOL isAfterAppear;
@property (retain, nonatomic) UIView *backToDrawerView;
@property (nonatomic) BOOL isInnerFromDrawer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<IESLiveFeedDrawerAnimatorProtocol> animator;
@property (copy, nonatomic) id /* block */ clickShowActionBlock;
@property (copy, nonatomic) id /* block */ clickHideActionBlock;
@property (copy, nonatomic) id /* block */ drawShowActionBlock;
@property (copy, nonatomic) id /* block */ drawHideActionBlock;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) HTSEventContext *originTrackContext;
@property (nonatomic) unsigned long long showPosition;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *overlayView;

- (void)hideFooter;
- (id)squareService;
- (void)loadmoreCompletionWithError:(BOOL)a0 hasMore:(BOOL)a1 models:(id)a2;
- (id)aggregateCellModels;
- (void)deleteItems:(id)a0 isDeleteByHand:(BOOL)a1;
- (void)updateCurrentRoom:(id)a0;
- (id)initWithDIContext:(id)a0 isInnerFromDrawer:(BOOL)a1;
- (BOOL)canHideWithGesture;
- (void)p_updateCurrentCellStatus;
- (void)p_changeFooterWithHasMore:(BOOL)a0;
- (void)backToDrawerAction;
- (void)updateCurrentCellStatus:(id)a0 indexPath:(id)a1;
- (void)overlayTapGestureActions:(id)a0;
- (void)updateDefaultTabWithVerticalInfo:(id)a0 roomId:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)updateTitle:(id)a0;

@end
