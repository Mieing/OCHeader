@interface TTVideoEngineReportHelper : NSObject

@property (nonatomic) BOOL enableAutoReportLog;

+ (id)sharedManager;

- (void)autoReportEventlogIfNeededV1WithParams:(id)a0;
- (void)autoReportEventlogIfNeededV1:(id)a0;
- (void)autoReportEventlogIfNeededV2WithEventName:(id)a0 params:(id)a1;

@end
