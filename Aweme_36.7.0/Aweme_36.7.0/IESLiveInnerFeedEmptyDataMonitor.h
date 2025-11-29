@class NSString, NSValue, NSNumber, IESLiveInnerFeedContext;

@interface IESLiveInnerFeedEmptyDataMonitor : NSObject <IESLiveInnerFeedDisplayAction>

@property (retain, nonatomic) NSValue *startContentOffset;
@property (retain, nonatomic) NSValue *dragVelocity;
@property (nonatomic) struct CGPoint { double x; double y; } downLocation;
@property (nonatomic) struct CGPoint { double x; double y; } upLocation;
@property (nonatomic) BOOL isLastObject;
@property (nonatomic) double startDragTimeInterval;
@property (nonatomic) double endDragTimeInterval;
@property (weak, nonatomic) IESLiveInnerFeedContext *context;
@property (nonatomic) BOOL enable;
@property (nonatomic) long long sampleGap;
@property (nonatomic) long long sampleSize;
@property (retain, nonatomic) NSNumber *har;
@property (retain, nonatomic) NSNumber *ohr;
@property (retain, nonatomic) NSNumber *fastScrollVelocity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)innerFeedWillBeginDragging:(id)a0;
- (void)innerFeedDidEndDecelerating:(id)a0;
- (void)innerFeedWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)checkReportCondition;
- (void)reportEvent:(long long)a0 idleDuration:(double)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)reset;

@end
