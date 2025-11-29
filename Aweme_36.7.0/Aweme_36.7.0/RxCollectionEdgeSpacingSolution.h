@interface RxCollectionEdgeSpacingSolution : NSObject

@property (readonly, nonatomic, getter=isFlexible) BOOL flexible;
@property (nonatomic) double spacing;

- (id)initWithSpacing:(double)a0 isFlexible:(BOOL)a1;

@end
