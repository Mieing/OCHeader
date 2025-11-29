@interface IESECCollectionViewLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext

@property (nonatomic) BOOL sizeChanged;
@property (nonatomic) BOOL originChanged;

- (id)init;
- (BOOL)invalidateEverything;

@end
