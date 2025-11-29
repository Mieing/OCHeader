@class NSDictionary, OHRTouchAreaResult, NSObject;
@protocol OS_dispatch_queue;

@interface OHRTouchAreaCalculator : NSObject

@property (nonatomic) long long hand;
@property (retain, nonatomic) NSDictionary *touchAreas;
@property (retain, nonatomic) NSDictionary *allRecentTouchAreas;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) OHRTouchAreaResult *lastTouchArea;

- (void)updateTouchAreaWithHand:(long long)a0 touchEventsGetter:(id /* block */)a1;
- (void)calculateLast;
- (id)areaOfTouchEvents:(id)a0;
- (void)updateValueWithLargestArea:(id)a0 nextLargestArea:(id)a1 smallestArea:(id)a2 newArea:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
