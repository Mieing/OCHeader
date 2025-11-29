@class AWEListDataController, DUXLoadingToast, NSString, DUXButton, UIView, NSMutableSet, AWEProfileBatchChooseWorkViewController;
@protocol AWEProfileBatchModifyViewControllerDelegate, AWEProfileBatchChooseWorkDataControllerProtocol;

@interface AWEProfileBatchModifyViewController : UIViewController <AWEProfileBatchChooseWorkDelegate, AWEProfileBatchChooseWorkDataSource, AWEProfileBatchModifyViewControllerProtocol>

@property (nonatomic) long long scene;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) DUXButton *leftButton;
@property (retain, nonatomic) DUXButton *rightButton;
@property (retain, nonatomic) AWEProfileBatchChooseWorkViewController *workVC;
@property (retain, nonatomic) AWEListDataController<AWEProfileBatchChooseWorkDataControllerProtocol> *dataController;
@property (weak, nonatomic) id<AWEProfileBatchModifyViewControllerDelegate> delegate;
@property (retain, nonatomic) DUXLoadingToast *loadingToast;
@property (nonatomic) BOOL isViewOnAppear;
@property (nonatomic) BOOL needReloadData;
@property (copy, nonatomic) NSString *cancelMulti;
@property (retain, nonatomic) NSMutableSet *removedAwemeIDSet;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configDelegate:(id)a0;
- (void)closeButtonClick;
- (void)refreshBtn;
- (id)initWithDataController:(id)a0;
- (void)handleVideoFavoriteNotification:(id)a0;
- (void)deleteButtonClick;
- (void)removeItemsAtIndexPaths:(id)a0 completion:(id /* block */)a1;
- (void)configItemID:(id)a0 isRemove:(BOOL)a1;
- (void)configScene:(long long)a0;
- (void)configMaxChosenCount:(long long)a0;
- (void)configInitialCollectionViewContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)handleDiggedNotification:(id)a0;
- (void)didSelectedByGestureAtIndexPath:(id)a0 isChoose:(BOOL)a1;
- (void)didClickChooseButtonAtIndexPath:(id)a0 isChoose:(BOOL)a1;
- (void)addPCManageGuideButton;
- (void)addToFavoriteFolderButtonClick;
- (void)configButtonEnabled:(BOOL)a0;
- (void)trackPCGuide:(BOOL)a0;
- (void)trackItemClickWithItemCount:(unsigned long long)a0 clickPosition:(id)a1;
- (void)pcManageGuideClicked;
- (void)configInitialCollectionViewContentOffsetWithLongPressItemID:(id)a0;
- (void)handleVideoFavoriteNotification;
- (void)handleVideoLikeNotification;
- (void)moreButtonClick;
- (void)reloadData;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)show;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;
- (void)didSelectItemAtIndexPath:(id)a0;
- (id)tabName;

@end
