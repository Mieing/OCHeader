@class NSString;

@interface BDPTrackerSample : NSObject <BDPTrackerSampleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)trackerSampleWithEventName:(id)a0 eventParams:(id)a1;
- (BOOL)sampleMatchWithRule:(id)a0 eventName:(id)a1 eventParams:(id)a2;
- (BOOL)isNeedReportAfterSample:(id)a0;
- (id)processRemoveEventParams:(id)a0 removeParamsPattern:(id)a1;
- (id)processOnlyEventParams:(id)a0 onlyParamsPattern:(id)a1;
- (BOOL)patternMatchesWithRegex:(id)a0 eventName:(id)a1;

@end
