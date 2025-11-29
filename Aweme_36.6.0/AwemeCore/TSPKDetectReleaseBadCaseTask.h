@class NSString, NSDictionary, TSPKDelayDetectSchduler;

@interface TSPKDetectReleaseBadCaseTask : TSPKDetectReleaseTask <TSPKDelayDetectDelegate>

@property (nonatomic) long long detectTime;
@property (nonatomic) long long remainDetectTime;
@property (retain, nonatomic) TSPKDelayDetectSchduler *delayScheduler;
@property (copy, nonatomic) NSString *delayCloseInstanceAddress;
@property (nonatomic) double timeDelay;
@property (nonatomic) double firstDetectTimestamp;
@property (copy, nonatomic) NSString *anchorPage;
@property (copy, nonatomic) NSDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)decodeParams:(id)a0;
- (void)executeDetectWithActualTimeGap:(double)a0;
- (id)getComparePage;
- (void)handleDetectResult:(id)a0 detectTimeStamp:(double)a1 store:(id)a2 info:(id)a3;
- (void)notifyExecuteReleaseDetect:(id)a0;
- (BOOL)isFirstDetect;
- (BOOL)isFinalDetect;
- (void)addExtraInfoToEventData:(id)a0 isDelayColse:(BOOL)a1;
- (void)markRuleInfoToEventData:(id)a0;
- (void)notifyBadcaseDetected:(id)a0;
- (void)repeatExecute;
- (void).cxx_destruct;
- (void)execute;
- (void)setup;

@end
