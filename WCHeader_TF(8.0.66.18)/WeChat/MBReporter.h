@class NSString, MagicBrushService;

@interface MBReporter : NSObject

@property (weak, nonatomic) MagicBrushService *service;
@property (copy, nonatomic) NSString *bizName;
@property (nonatomic) double bizCreatedTime;
@property (nonatomic) double setupBeginTime;
@property (nonatomic) double mainBeginTime;
@property (nonatomic) double startBeginTime;
@property (nonatomic) double destroyBeginTime;
@property (nonatomic) BOOL skipReport;

+ (id)correctReportString:(id)a0;

- (void)reportSetupCostTime:(BOOL)a0;
- (void)reportStartCostTime;
- (void)reportDestroyCostTime;
- (void)reportMainCostTime;
- (void)reportPluginCostTime:(id)a0;
- (void)reportTime:(unsigned long long)a0 delta:(double)a1 extra:(id)a2;
- (void)reportRuntimeException:(id)a0 content:(id)a1 extra:(id)a2;
- (void).cxx_destruct;

@end
