@class CAGradientLayer, NSArray, UICollectionView, NSString, UIView;

@interface BDPVideoSideBar : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *timorMaskView;
@property (retain, nonatomic) CAGradientLayer *gradientMaskLayer;
@property (retain, nonatomic) UICollectionView *valueView;
@property (retain, nonatomic) NSArray *valueArr;
@property (nonatomic) unsigned long long type;
@property (nonatomic) long long selectIndex;
@property (copy, nonatomic) id /* block */ selectCellBlock;
@property (copy, nonatomic) id /* block */ backgroundClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeWithAnimated:(BOOL)a0;
- (void)backgroundClicked;
- (id)initWithValueArr:(id)a0 type:(unsigned long long)a1 selectIndex:(long long)a2;
- (void)showWithAnimated:(BOOL)a0 targetView:(id)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)setup;

@end
