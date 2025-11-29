@class NSArray;
@protocol IESECStoreSearchHistoryLayoutDelegate;

@interface IESECStoreSearchHistoryLayout : UICollectionViewFlowLayout

@property (copy, nonatomic) NSArray *layoutSections;
@property (nonatomic) double contentHeight;
@property (nonatomic) double marginHorizontal;
@property (nonatomic) double marginVertical;
@property (nonatomic) double itemSpacing;
@property (nonatomic) double marginBottom;
@property (weak, nonatomic) id<IESECStoreSearchHistoryLayoutDelegate> delegate;

- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
