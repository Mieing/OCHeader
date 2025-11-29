@class UIPanGestureRecognizer, NSValue, UICollectionView, UILabel, UITapGestureRecognizer, MASConstraint, AWEBarPanelVCPanelUIConfig, UIButton, UIView, AWEListDataController, NSString, AWEAwemeModel, UIControl, AWEFeedRefreshFooter, UIImageView;
@protocol AWEBarPanelViewControllerDelegate, AWEBBarPanelDataControllerProtocol;

@interface AWEBarPanelViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *indicator;
@property (retain, nonatomic) UIControl *topContentView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEListDataController<AWEBBarPanelDataControllerProtocol> *dataController;
@property (retain, nonatomic) AWEFeedRefreshFooter *footer;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (retain, nonatomic) NSValue *leftPanGesStartPoint;
@property (retain, nonatomic) NSValue *downPanGesStartPoint;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (nonatomic) double baseViewBottomOffset;
@property (retain, nonatomic) MASConstraint *baseViewBottom;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (nonatomic) BOOL hasAppear;
@property (nonatomic) BOOL hasRequestLoadMore;
@property (weak, nonatomic) id<AWEBarPanelViewControllerDelegate> delegate;
@property (retain, nonatomic) AWEBarPanelVCPanelUIConfig *uiConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)selfPanned:(id)a0;
- (void)selfTapped:(id)a0;
- (double)currentPanelHeight;
- (void)showBottomTip;
- (id)p_invalidItemTextWithCleanButton;
- (void)addLoadPreviousRequest;
- (void)reloadDataWithCurrentModel:(id)a0;
- (void)updateCollectionLayout;
- (id)initWithConfig:(id)a0 dataController:(id)a1;
- (void)addLoadMoreIfNeeded;
- (void)addLoadPreviousIfNeeded;
- (void)addLoadMoreRequest;
- (double)defaultPanelHeight;
- (BOOL)isDarkStyle;
- (void)didClickTopContent;
- (void)tryLoadMore:(id)a0;
- (void)tryLoadPrevious:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)contentScrollView;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)viewWillLayoutSubviews;
- (void)setupUI;
- (void)closeButtonTapped:(id)a0;

@end
