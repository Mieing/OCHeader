@class NSMutableDictionary;

@interface HunterLynxBackgroundRuntimeMonitor : NSObject {
    NSMutableDictionary *_startTimes;
}

@property (nonatomic) double totalCreationTime;
@property (nonatomic) double initTime;
@property (nonatomic) double jsFetchTime;
@property (nonatomic) double jsVerifyTime;
@property (nonatomic) double jsEvaluationTime;
@property (nonatomic) double presetDataGenerationTime;
@property (nonatomic) double lynxGroupGenerationTime;
@property (nonatomic) double initJSBModuleTime;

- (double)endTimingForKey:(id)a0;
- (void)reportCreateRuntimeErrorWithParams:(id)a0;
- (void)logTimingWithTag:(id)a0 message:(id)a1;
- (void)reportCreateRuntimeWithParams:(id)a0;
- (void)reportCreateRuntimeRestartWithParams:(id)a0;
- (id)buildTrackParamsWithBaseParams:(id)a0 statusCode:(long long)a1 includeTiming:(BOOL)a2;
- (void)reportEventWithParams:(id)a0 statusCode:(long long)a1 eventName:(id)a2 includeTiming:(BOOL)a3;
- (void).cxx_destruct;
- (id)init;
- (void)startTimingForKey:(id)a0;

@end
