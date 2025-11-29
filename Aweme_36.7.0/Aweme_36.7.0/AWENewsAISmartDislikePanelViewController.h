@class UIView, NSString, DUXBaseLabel, UICollectionViewFlowLayout, AWENewsAISmartDislikePanelViewModel, UIImageView, AWENewsAISmartFeedPageContext, NSDictionary, UICollectionView, DUXBaseButton;

@interface AWENewsAISmartDislikePanelViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UIGestureRecognizerDelegate>

@property (nonatomic) unsigned long long positionType;
@property (retain, nonatomic) AWENewsAISmartDislikePanelViewModel *viewModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) DUXBaseLabel *mainTitle;
@property (retain, nonatomic) DUXBaseButton *submitButton;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *panelView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) AWENewsAISmartFeedPageContext *pageContext;
@property (copy, nonatomic) NSDictionary *panelParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addGestureRecognizer;
- (void)playPresentAnimation;
- (void)handleTapEvent:(id)a0;
- (void)dismissWithAnimationForCellIndexPath:(id)a0;
- (void)p_makeConstraint;
- (void)submitButtonPressed;
- (id)initWithPageContext:(id)a0 params:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;

@end
