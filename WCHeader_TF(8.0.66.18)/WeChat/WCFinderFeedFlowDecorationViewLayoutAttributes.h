@class NSArray;

@interface WCFinderFeedFlowDecorationViewLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying>

@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) struct CGPoint { double x; double y; } endPoint;
@property (retain, nonatomic) NSArray *colors;

- (id)init;
- (void)initPropertiesValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
