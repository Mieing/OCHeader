@class NSArray;

@interface TSTrackedMotionSequence : TSTrackedItem <TSFinalTrackedItem>

@property (retain, nonatomic) NSArray *accelerationItems;
@property (retain, nonatomic) NSArray *gyroItems;
@property (retain, nonatomic) NSArray *motionItems;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) double duration;

- (id)initWithAccelerationItems:(id)a0 gyroItems:(id)a1 motionItems:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
