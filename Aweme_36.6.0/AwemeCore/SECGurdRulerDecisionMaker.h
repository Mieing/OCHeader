@class SECPiperParamsReportConfig, NSArray, NSDictionary, SECHybridPiperContext, NSString;

@interface SECGurdRulerDecisionMaker : NSObject <SECHybridAPIParamsDecision> {
    SECPiperParamsReportConfig *_reportManager;
}

@property (retain, nonatomic) SECHybridPiperContext *apiContext;
@property (nonatomic) BOOL hit;
@property (copy, nonatomic) NSArray *hitFeatures;
@property (nonatomic) unsigned long long sampleRate;
@property (copy, nonatomic) NSDictionary *taggedIn;
@property (copy, nonatomic) NSDictionary *taggedOut;
@property (copy, nonatomic) NSDictionary *reportableIn;
@property (copy, nonatomic) NSDictionary *reportableOut;
@property (nonatomic) BOOL decisonMaked;
@property (copy, nonatomic) NSDictionary *rulerParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)name;

- (id)taggedInParams;
- (id)taggedOutParams;
- (id)keyTagsDict:(id)a0;
- (BOOL)runSingleReportRule:(id)a0;
- (id)taggedParams:(id)a0;
- (id)reportableParams:(id)a0 withRules:(id)a1;
- (id)calculateTag:(id)a0 withClassifier:(id)a1;
- (id)actionForParams:(id)a0 withRules:(id)a1;
- (id)runAction:(id)a0 ForParams:(id)a1;
- (BOOL)runTagResult:(id)a0 withSingleRule:(id)a1;
- (void)makeDecisionWith:(id)a0;
- (id)inParamsToReport;
- (id)outParamsToReport;
- (unsigned long long)reportSampleRate;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (BOOL)shouldReport;
- (id)extraInfo;

@end
