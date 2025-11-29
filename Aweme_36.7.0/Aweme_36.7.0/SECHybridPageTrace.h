@class NSString, SECRouteTrace, SECStandardURL;

@interface SECHybridPageTrace : NSObject <NSCoding>

@property (copy, nonatomic) NSString *traceId;
@property (nonatomic) double timestamp;
@property (nonatomic) unsigned long long traceIndex;
@property (retain, nonatomic) SECHybridPageTrace *prev;
@property (retain, nonatomic) SECStandardURL *URL;
@property BOOL didResponse;
@property (weak, nonatomic) SECRouteTrace *nativeTrace;
@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *container;
@property (copy, nonatomic) NSString *policyAction;
@property (copy, nonatomic) NSString *policyName;
@property (nonatomic) BOOL seclinkInstalled;
@property (nonatomic) BOOL sccInstalled;
@property (copy, nonatomic) NSString *bizTag;
@property (nonatomic) BOOL from3rdParty;
@property (copy, nonatomic) NSString *matchedFeatures;
@property (nonatomic) BOOL seclinkChecked;
@property (nonatomic) long long seclinkMiddlePage;
@property (nonatomic) long long seclinkRisk;
@property (copy, nonatomic) NSString *seclinkReason;
@property (copy, nonatomic) NSString *seclinkScene;
@property (nonatomic) double costTime;

- (id)paramsForReporter;
- (id)paramsForRuler;
- (void)updateMatchedFeatures:(id)a0;
- (void).cxx_destruct;
- (id)allNodes;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
