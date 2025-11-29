@class SECPiperParamsReportConfig;

@interface SECGurdDecisionManager : NSObject

@property (retain, nonatomic) SECPiperParamsReportConfig *paramsReportConfig;

+ (id)sharedManager;

- (void)gurdResourceUpdated;
- (void).cxx_destruct;
- (id)init;
- (void)setup;
- (void)_updateConfig;

@end
