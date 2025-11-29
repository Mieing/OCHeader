@class UIView, NSString, AWEDoubleColumnSearchMerchandiseFilterManager, NSMutableDictionary, NSDictionary, UIButton, CAGradientLayer, UICollectionView, AWEDoubleColumnSearchMerchandiseFilterComponentModel;
@protocol AWESearchMerchandiseComponentDropDownExpandViewDelegate;

@interface AWESearchMerchandiseComponentDropDownExpandView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIButton *resetButton;
@property (retain, nonatomic) UIButton *resultButton;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterManager *filterManager;
@property (retain, nonatomic) NSMutableDictionary *selectItems;
@property (retain, nonatomic) NSMutableDictionary *needSelectItems;
@property (retain, nonatomic) NSMutableDictionary *needCancelSelectItems;
@property (nonatomic) BOOL resetButtonTracked;
@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) CAGradientLayer *resultButtonBGLayer;
@property (copy, nonatomic) NSDictionary *searchInfoDict;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel *model;
@property (weak, nonatomic) id<AWESearchMerchandiseComponentDropDownExpandViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ filterBlankViewTouch;
@property (copy, nonatomic) id /* block */ filterBlankViewTouchSimply;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightWithComponentModel:(id)a0;
+ (double)columnCountWithComponentModel:(id)a0;

- (void)showResult;
- (void)configWithComponentModel:(id)a0 filterManager:(id)a1;
- (void)trackForWillDisplayCellAtIndexPath:(id)a0;
- (void)maskViewClickAction;
- (BOOL)isSelectWithModel:(id)a0;
- (void)trackForDidSelectItemAtIndexPath:(id)a0;
- (void)registCell;
- (void)showWithAnimation:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 completionBlock:(id /* block */)a1;
- (void)hiddenWithAnimation:(id /* block */)a0;
- (void)trackForResetButtonShow;
- (void)dismiss;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)layoutSubviews;
- (void)setupUI;

@end
