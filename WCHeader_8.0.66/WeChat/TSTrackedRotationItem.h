@interface TSTrackedRotationItem : TSTrackedItem

@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double z;
@property (nonatomic) double timestamp;

- (id)initWithX:(double)a0 Y:(double)a1 Z:(double)a2 timestamp:(double)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
