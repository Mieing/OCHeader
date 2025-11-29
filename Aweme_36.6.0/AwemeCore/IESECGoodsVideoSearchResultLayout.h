@class NSMutableArray;
@protocol IESECGoodsVideoSearchResultLayoutProtocol;

@interface IESECGoodsVideoSearchResultLayout : UICollectionViewLayout

@property (retain, nonatomic) NSMutableArray *columnHeights;
@property (retain, nonatomic) NSMutableArray *attributesArray;
@property (weak, nonatomic) id<IESECGoodsVideoSearchResultLayoutProtocol> delegate;
@property (nonatomic) unsigned long long columns;
@property (nonatomic) double columnSpacing;
@property (nonatomic) double itemSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) double itemContainerWidth;

- (id)getLayoutAttributesForItem:(id)a0;
- (long long)columnOfMinHeight;
- (long long)columnOfMaxHeight;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;

@end
