@class RxCollectionLayoutSpacing;

@interface RxCollectionLayoutEdgeSpacing : NSObject <NSCopying>

@property (retain, nonatomic) RxCollectionLayoutSpacing *leading;
@property (retain, nonatomic) RxCollectionLayoutSpacing *top;
@property (retain, nonatomic) RxCollectionLayoutSpacing *trailing;
@property (retain, nonatomic) RxCollectionLayoutSpacing *bottom;
@property (readonly, nonatomic) BOOL hasSpacing;
@property (readonly, nonatomic) struct RxDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } edgeOutsets;

+ (id)spacingForLeading:(id)a0 top:(id)a1 trailing:(id)a2 bottom:(id)a3;
+ (id)fixedSpacing:(double)a0;
+ (id)defaultSpacing;
+ (id)flexibleSpacing:(double)a0;

- (id)initForLeading:(id)a0 top:(id)a1 trailing:(id)a2 bottom:(id)a3;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isSpacingFlexibleForEdge:(unsigned long long)a0;
- (id)_spacingForEdge:(unsigned long long)a0;
- (BOOL)isSpacingFixedForEdge:(unsigned long long)a0;
- (double)spacingForEdge:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
