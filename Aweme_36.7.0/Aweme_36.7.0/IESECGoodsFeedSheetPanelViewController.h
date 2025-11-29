@class UIView, NSString, UITapGestureRecognizer, NSArray, UIButton, UIPanGestureRecognizer, UICollectionView, UILabel;

@interface IESECGoodsFeedSheetPanelViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *panelView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) id /* block */ closeHandler;
@property (copy, nonatomic) id /* block */ viewDidAppearHander;
@property (copy, nonatomic) id /* block */ viewDidLoadHander;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSArray *cellList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0 headerView:(id)a1 viewDidAppearHander:(id /* block */)a2 viewDidLoadHander:(id /* block */)a3 closeHandler:(id /* block */)a4;
- (void)clickCollectionView:(id)a0;
- (void)addCellWithAction:(id)a0 atIndex:(id)a1;
- (void)close;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)handleGesture:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupUI;
- (void)handlePanGesture:(id)a0;

@end
