@class NSMutableArray;

@interface OHRScrollEventCollector : NSObject

@property (nonatomic) double majorRadius;
@property (nonatomic) double majorRadiusTolerance;
@property (retain, nonatomic) NSMutableArray *touchEvents;

- (void)collectTouch:(id)a0 inWindow:(id)a1;
- (id)makeScrollEvent;
- (void).cxx_destruct;
- (id)init;

@end
