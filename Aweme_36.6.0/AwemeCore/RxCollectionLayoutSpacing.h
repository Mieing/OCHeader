@interface RxCollectionLayoutSpacing : NSObject <NSCopying>

@property (nonatomic) double spacing;
@property (nonatomic) BOOL isFlexibleSpacing;
@property (nonatomic) BOOL isFixedSpacing;

+ (id)fixedSpacing:(double)a0;
+ (id)defaultSpacing;
+ (id)flexibleSpacing:(double)a0;

- (id)description;
- (id)initWithSpacing:(double)a0 isFlexible:(BOOL)a1;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasSpacing;

@end
