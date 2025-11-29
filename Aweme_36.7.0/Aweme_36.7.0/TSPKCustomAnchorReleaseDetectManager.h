@class NSString, NSMutableArray, TSPKDelayDetectSchduler;

@interface TSPKCustomAnchorReleaseDetectManager : NSObject <TSPKDelayDetectDelegate>

@property (retain, nonatomic) NSMutableArray *startModels;
@property (retain, nonatomic) NSMutableArray *stopModels;
@property (nonatomic) unsigned long long resourceCount;
@property (copy, nonatomic) NSString *pipelineType;
@property (retain, nonatomic) TSPKDelayDetectSchduler *delayScheduler;
@property (nonatomic) long long detectTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)markResourceStartWithCaseId:(id)a0 description:(id)a1;
- (void)markResourceStopWithCaseId:(id)a0 description:(id)a1;
- (id)initWithPipelineType:(id)a0 detectDelay:(double)a1 detectTime:(long long)a2;
- (void)cancelDetectAction;
- (void)removeModelFrom:(id)a0 caseId:(id)a1;
- (void)scheduleDetectAction;
- (void)executeDetectWithActualTimeGap:(double)a0;
- (BOOL)isContinueExecuteAction;
- (id)getComparePage;
- (void).cxx_destruct;

@end
