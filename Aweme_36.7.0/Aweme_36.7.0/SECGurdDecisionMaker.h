@class NSString, SECPiperParamsReportConfigItem, SECHybridPiperContext;

@interface SECGurdDecisionMaker : NSObject <SECHybridAPIParamsDecision>

@property (retain, nonatomic) SECHybridPiperContext *apiContext;
@property (retain, nonatomic) SECPiperParamsReportConfigItem *configItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)name;

- (void)makeDecisionWith:(id)a0;
- (id)inParamsToReport;
- (id)outParamsToReport;
- (unsigned long long)reportSampleRate;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (BOOL)shouldReport;

@end
