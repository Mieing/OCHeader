@class NSString, UICollectionView, MJShootVisagePanelViewModel, MMUIView, MMUILabel;
@protocol MJShootVisagePanelViewControllerDelegate;

@interface MJShootVisagePanelViewController : MMPageSheetBaseViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) MJShootVisagePanelViewModel *viewModel;
@property (retain, nonatomic) MMUIView *contentView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) double cellHorizontalPadding;
@property (weak, nonatomic) id<MJShootVisagePanelViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (void)setupPageSheetConfig;
- (void)setupViews;
- (void)pageSheetWillClose:(BOOL)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;

@end
