@class AWEDoubleColumnDislikeViewModel, NSString, UICollectionView, UIImageView, UIView, UICollectionViewFlowLayout, UIButton;
@protocol AWEDoubleColumnDislikeVMProtocol;

@interface AWEDoubleColumnDislikeViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (nonatomic) struct CGPoint { double x; double y; } touchLocation;
@property (nonatomic) unsigned long long positionType;
@property (retain, nonatomic) AWEDoubleColumnDislikeViewModel<AWEDoubleColumnDislikeVMProtocol> *viewModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *panelView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *dotView;
@property (retain, nonatomic) UIView *innerDotView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (nonatomic) BOOL enableDCFeedCardDislikeItemBtnLargeFont;
@property (nonatomic) BOOL enableDCFeedCardDislikeBGColorOpt;
@property (copy, nonatomic) id /* block */ onDidDisappearBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLocation:(struct CGPoint { double x0; double x1; })a0 viewModel:(id)a1;
- (void)addGestureRecognizer;
- (void)playPresentAnimation;
- (void)triggerImpactFeedback;
- (void)handleTapEvent:(id)a0;
- (void)dismissWithAnimationForCellIndexPath:(id)a0;
- (id)setupDislikeItemConfig;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (Class)collectionViewCellClass;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupUI;
- (void)closeButtonPressed:(id)a0;
- (Class)headerClass;

@end
