@class AWEDoubleColumnSearchMerchandiseFilterComponentModel, NSString, UICollectionView, AWEDoubleColumnSearchMerchandiseFilterManager, UIView, NSIndexPath;
@protocol AWESearchMerchandiseComponentDropDownDefaultSelectExpandViewDelegate;

@interface AWESearchMerchandiseComponentDropDownDefaultSelectExpandView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UIView *topContainerView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSIndexPath *lastIndexPath;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterManager *filterManager;
@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel *model;
@property (weak, nonatomic) id<AWESearchMerchandiseComponentDropDownDefaultSelectExpandViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ blankViewTouchBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightWithModel:(id)a0;

- (void)configWithComponentModel:(id)a0 filterManager:(id)a1;
- (void)trackForWillDisplayCellAtIndexPath:(id)a0;
- (void)maskViewClickAction;
- (void)registCell;
- (void)showWithAnimation:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 completionBlock:(id /* block */)a1;
- (void)hiddenWithAnimation:(id /* block */)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
