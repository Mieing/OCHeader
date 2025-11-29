@class NSMutableArray;
@protocol AWESearchRecommWordsCollectionViewLayoutDelegate;

@interface AWESearchRecomWordsCollectionViewMultiColLayout : UICollectionViewLayout

@property (weak, nonatomic) id<AWESearchRecommWordsCollectionViewLayoutDelegate> delegate;
@property (nonatomic) double itemHeight;
@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) double rightExtraMargin;
@property (retain, nonatomic) NSMutableArray *rowsLength;
@property (nonatomic) double maxLength;
@property (nonatomic) double minLength;
@property (nonatomic) long long minIndex;
@property (nonatomic) long long maxIndex;
@property (nonatomic) long long tempItemX;
@property (retain, nonatomic) NSMutableArray *attributes;

- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;

@end
