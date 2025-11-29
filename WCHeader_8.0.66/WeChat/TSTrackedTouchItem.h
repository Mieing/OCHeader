@interface TSTrackedTouchItem : TSTrackedItem

@property (nonatomic) long long phase;
@property (nonatomic) struct CGPoint { double x; double y; } point;
@property (nonatomic) double force;
@property (nonatomic) double radius;
@property (nonatomic) double timestamp;

- (id)initWithUITouch:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
