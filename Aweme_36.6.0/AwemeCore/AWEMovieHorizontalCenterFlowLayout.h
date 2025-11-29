@class AWECardModel, NSString, AWECardContext;

@interface AWEMovieHorizontalCenterFlowLayout : UICollectionViewFlowLayout <AWEFlowLayoutProtocol, AWEDataConfigProtocol>

@property (retain, nonatomic) AWECardModel *cardModel;
@property (retain, nonatomic) AWECardContext *context;
@property (copy, nonatomic) id /* block */ proposedIndexPathBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (double)itemMargin;
- (void)setData:(id)a0 extraInfo:(id)a1;
- (double)insetX;
- (double)insetY;
- (id)initWithData:(id)a0 extraInfo:(id)a1;
- (double)itemZoomScale;
- (void).cxx_destruct;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)itemWidth;
- (double)minimumInteritemSpacing;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;
- (double)itemHeight;

@end
