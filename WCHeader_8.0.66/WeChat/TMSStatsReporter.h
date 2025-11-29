@class NSMutableDictionary;

@interface TMSStatsReporter : NSObject

@property (retain, nonatomic) NSMutableDictionary *commomParams;
@property (nonatomic) BOOL isShowLog;

+ (id)reporter;
+ (id)commonCrashValueDict:(id)a0;

- (id)init;
- (void)setReportCofig:(id)a0;
- (void)reportNetflowEvent:(id)a0;
- (id)fillDictionaryWithClassProperty:(id)a0 withProperties:(id)a1;
- (void)reportEvent:(id)a0;
- (void)reportCrash:(id)a0;
- (void)reportUserScene:(id)a0;
- (BOOL)baseReportEventValidation:(id)a0;
- (void)setupBeacon;
- (void)setCommonReportParams:(id)a0;
- (void)setBeaconAdditionalParams;
- (void).cxx_destruct;

@end
