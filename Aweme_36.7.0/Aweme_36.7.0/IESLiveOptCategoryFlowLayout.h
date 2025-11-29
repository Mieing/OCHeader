@protocol IESLiveCollectionViewLockHeaderProtocol;

@interface IESLiveOptCategoryFlowLayout : UICollectionViewFlowLayout

@property (retain, nonatomic) id<IESLiveCollectionViewLockHeaderProtocol> lockView;
@property (nonatomic) long long lockSection;

- (void)updateLockSectionElements:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
