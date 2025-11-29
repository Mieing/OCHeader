@class AWEListenFeedPlayListHeaderView, NSString, AWEListenFeedCellViewModel, AWEListenFeedViewModel, AWEListenFeedPlayListCell, AWEListenFeedContext, DUXButton, AWEListenFeedPlayModel;
@protocol AWEListenFeedPlayListViewControllerDelegate;

@interface AWEListenFeedPlayListViewController : AWEBaseListViewController <UICollectionViewDelegate, UIGestureRecognizerDelegate, AWEListSectionControllerDelegate, DUXActionSheetDelegate, AWEListenFeedCollectionListViewControllerDelegate>

@property (weak, nonatomic) AWEListenFeedViewModel *externalViewModel;
@property (nonatomic) long long locatedIndex;
@property (retain, nonatomic) AWEListenFeedPlayModel *playModel;
@property (retain, nonatomic) AWEListenFeedPlayListHeaderView *headerView;
@property (nonatomic) BOOL isScrolling;
@property (retain, nonatomic) AWEListenFeedContext *context;
@property (weak, nonatomic) AWEListenFeedPlayListCell *movingCell;
@property (retain, nonatomic) AWEListenFeedCellViewModel *cellModelToDelete;
@property (nonatomic) BOOL isEnhanceCollect;
@property (retain, nonatomic) DUXButton *playStyleButton;
@property (weak, nonatomic) id<AWEListenFeedPlayListViewControllerDelegate> delegate;
@property (weak, nonatomic) id<AWEListenFeedPlayListViewControllerDelegate> collectVCDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewModelClass;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;

- (void)sectionController:(id)a0 didMoveModel:(id)a1 fromIndex:(long long)a2 toIndex:(long long)a3 finalModelsArray:(id)a4;
- (void)actionSheet:(id)a0 didClickButtonAtIndex:(long long)a1;
- (void)customLayoutCollectionView:(id)a0;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (BOOL)isSlideEnable;
- (void)containerWillBeginInteractiveMovementAtIndexPath:(id)a0;
- (struct CGPoint { double x0; double x1; })targetPointForMovementWithOriginalPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)containerDidEndInteractiveMovement;
- (BOOL)enableInteractiveMovement;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)collectionListVC:(id)a0 onAddListenLaterItem:(id)a1;
- (void)collectionListVC:(id)a0 onSelectedItem:(id)a1 dataController:(id)a2;
- (void)updateUIToPauseState;
- (void)updatePlayStyle:(unsigned long long)a0;
- (void)scrollToTopWithIndex:(long long)a0;
- (long long)numberOfCellInVisibleRect;
- (void)p_bind;
- (void)setupDefaultDataLoadBehavior;
- (void)deleteModel:(id)a0;
- (void)addListenLaterWithItem:(id)a0;
- (void)updateHeaderPlayStyleButton:(unsigned long long)a0;
- (void)closeDidClick;
- (void)changePlayStyle;
- (id)initWithViewModel:(id)a0 locatedIndex:(long long)a1 playModel:(id)a2 context:(id)a3;
- (void)updatePlayModel:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)setupUI;
- (double)cellHeight;
- (void)setupCollectionView:(id)a0;

@end
