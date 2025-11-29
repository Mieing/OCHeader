@class NSMutableDictionary;

@interface AWEGrouponHalfScreenContainerPerfTracker : NSObject

@property (retain, nonatomic) NSMutableDictionary *perfModels;
@property (nonatomic) double poiRequsetTime;
@property (nonatomic) double productRequsetTime;
@property (nonatomic) double lastContainerInitTime;
@property (nonatomic) double lastHalfScreenInitTime;
@property (nonatomic) double lastContentInitTime;
@property (nonatomic) BOOL isFeedSuspended;
@property (nonatomic) BOOL isTransformerSuspended;

+ (id)sharedManager;

- (void)recordStageStart:(id)a0 stage:(unsigned long long)a1 sessionID:(id)a2;
- (void)recordStageEnd:(id)a0 stage:(unsigned long long)a1 sessionID:(id)a2;
- (void)trackHalfScreenCloseEventWithSchema:(id)a0 pageType:(long long)a1 isCommonHalfScreen:(BOOL)a2 sessionID:(id)a3;
- (void)track:(id)a0 extraParams:(id)a1;
- (void)trackSubPageEvent:(id)a0 schema:(id)a1 extraParams:(id)a2 pageType:(long long)a3;
- (void)clearPerfInfo:(id)a0;
- (void)recordPOIRequstTime;
- (void)recordPOIGoodRequstTime;
- (void)recordContainerInitTime:(id)a0 sessionID:(id)a1;
- (void)recordHalfScreenInitTime:(id)a0 sessionID:(id)a1;
- (void)recordContentInitTime:(id)a0 sessionID:(id)a1;
- (void)recordContainerCost:(id)a0 sessionID:(id)a1;
- (void)recordHalfScreenCost:(id)a0 sessionID:(id)a1;
- (void)recordContentCost:(id)a0 sessionID:(id)a1;
- (void)recordTotalCost:(id)a0 sessionID:(id)a1;
- (id)getPerfModel:(id)a0;
- (BOOL)isValidCost:(double)a0;
- (id)getPerfInfo:(id)a0;
- (BOOL)isPerfInfoValid:(id)a0;
- (id)p_getSubPageTypeStringFromSchema:(id)a0;
- (void)recordHalfScreenFMPTime:(id)a0 sessionID:(id)a1;
- (void)clearAllPerfInfo;
- (void).cxx_destruct;
- (id)init;
- (void)addObservers;

@end
