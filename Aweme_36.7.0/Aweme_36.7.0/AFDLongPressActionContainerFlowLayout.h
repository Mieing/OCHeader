@class NSMutableArray, NSMutableDictionary;

@interface AFDLongPressActionContainerFlowLayout : UICollectionViewFlowLayout

@property (retain, nonatomic) NSMutableArray *insertIndexPath;
@property (retain, nonatomic) NSMutableDictionary *insertedLength;

- (void).cxx_destruct;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (void)prepareLayout;
- (void)prepareForCollectionViewUpdates:(id)a0;

@end
