@class NSArray, UICollectionView, IESECHorizonFlowLayout, IESECGradientView, NSString;
@protocol IESECHorizonFlowDelegate;

@interface IESECHorizonFlowView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, IESECHorizonFlowItemSizeDelegate>

@property (retain, nonatomic) Class cellClass;
@property (copy, nonatomic) NSArray *dataSourceInput;
@property (nonatomic) BOOL isScrollable;
@property (nonatomic) double space;
@property (nonatomic) BOOL showEdgeFade;
@property (nonatomic) BOOL fixedEdgeFade;
@property (retain, nonatomic) IESECHorizonFlowLayout *layout;
@property (nonatomic) double viewWidth;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESECGradientView *leftEdgeFadeView;
@property (retain, nonatomic) IESECGradientView *rightEdgeFadeView;
@property (weak, nonatomic) id<IESECHorizonFlowDelegate> scrollDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })itemSizeForData:(id)a0 containerWidth:(double)a1;
+ (double)heightOfFlowViewWithDataSource:(id)a0 isScrollable:(BOOL)a1 width:(double)a2 space:(double)a3;

- (double)collectionViewWidth;
- (void)registerCellClass:(Class)a0;
- (id)initWithViewWidth:(double)a0;
- (void)setShowLeftMask:(BOOL)a0 ShowRighMaskt:(BOOL)a1 fixedEdgeMask:(BOOL)a2 edgeMaskWidth:(id)a3;
- (void)updateDataSource:(id)a0 isScrollable:(BOOL)a1 space:(double)a2;
- (void)handleActionForCell:(id)a0 atIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })itemSizeAtIndex:(long long)a0;
- (void)clickCollectionView:(id)a0;
- (void)updateEdgeFadeState;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
