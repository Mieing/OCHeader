@class TSTrackedTapSequence, TSTrackedMotionSequence;

@interface TSTrackedInputItem : TSTrackedItem <TSFinalTrackedItem>

@property (retain, nonatomic) TSTrackedTapSequence *tapSequence;
@property (retain, nonatomic) TSTrackedMotionSequence *motionSequence;
@property (nonatomic) double timestamp;
@property (nonatomic) double duration;

- (id)initWithTapSequence:(id)a0 motionSequence:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
