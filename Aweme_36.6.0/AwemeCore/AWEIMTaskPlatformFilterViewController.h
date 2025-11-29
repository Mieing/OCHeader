@class UIView, NSString, NSArray, AWEIMTaskFilterAccessibilityMaskView, UIButton, NSMutableArray, AWEIMTaskPlatformTracker, UICollectionView, AWEIMFilterContext, AWEIMWorkSpaceDetailFilterInfoModel;
@protocol AWEIMTaskPlatformFilterViewControllerDelegate;

@interface AWEIMTaskPlatformFilterViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *containerViewRoundCornerView;
@property (retain, nonatomic) UICollectionView *filterCollectionView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) AWEIMTaskFilterAccessibilityMaskView *maskView;
@property (nonatomic) BOOL isConfirmButtonActive;
@property (copy, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) AWEIMFilterContext *context;
@property (retain, nonatomic) AWEIMTaskPlatformTracker *taskPlatformTracker;
@property (retain, nonatomic) AWEIMWorkSpaceDetailFilterInfoModel *missionInfo;
@property (weak, nonatomic) id<AWEIMTaskPlatformFilterViewControllerDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *source;
@property (retain, nonatomic) NSMutableArray *status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupLayout;
- (void)p_dismiss;
- (void)renderWithFilterModel:(id)a0 dataSource:(id)a1;
- (void)p_updateConfirmButtonUI:(BOOL)a0;
- (void)p_updateContainerViewUI;
- (BOOL)confirmShouldBecomeActive;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)fetchData;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)confirmButtonClicked;

@end
