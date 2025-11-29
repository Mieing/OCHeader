@class TSTrackedMotionSequence, TSTrackedSlideItem;

@interface TSTrackedTouchMotionItem : TSTrackedItem <TSFinalTrackedItem>

@property (retain, nonatomic) TSTrackedSlideItem *slideItem;
@property (retain, nonatomic) TSTrackedMotionSequence *motionSequence;
@property (nonatomic) double timestamp;
@property (nonatomic) double duration;

- (id)initWithSlide:(id)a0 motionSequence:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
