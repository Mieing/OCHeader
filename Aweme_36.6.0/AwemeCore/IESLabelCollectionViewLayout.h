@class NSMutableArray, UIFont;

@interface IESLabelCollectionViewLayout : UICollectionViewFlowLayout {
    struct CurrentOrigin { double lineX; long long lineNumber; long long section; double totalY; double totalX; } origin;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (retain, nonatomic) NSMutableArray *attributesArray;
@property (retain, nonatomic) UIFont *titleFont;
@property (nonatomic) double maxLayoutWidth;
@property (nonatomic) double lineSpace;
@property (nonatomic) double itemSpace;
@property (readonly, nonatomic) long long lineNums;

- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;

@end
