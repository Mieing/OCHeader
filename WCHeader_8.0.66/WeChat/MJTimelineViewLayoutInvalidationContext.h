@interface MJTimelineViewLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext

@property (nonatomic) BOOL initiatedFromChangeScale;
@property (nonatomic) BOOL initiatedFromChangeMode;

@end
