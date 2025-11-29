@class NSArray;

@interface TSTrackedSlideItem : TSTrackedItem <TSFinalTrackedItem>

@property (retain, nonatomic) NSArray *touches;
@property (readonly, nonatomic) NSArray *samplingTouches;
@property (readonly, nonatomic) double distance;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) double duration;

- (id)initWithTouches:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
