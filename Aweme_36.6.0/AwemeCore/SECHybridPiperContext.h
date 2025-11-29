@class SECHybridPageContext, NSString, NSDictionary, NSArray, NSSet;

@interface SECHybridPiperContext : NSObject

@property BOOL inParamsFetched;
@property (retain, nonatomic) SECHybridPageContext *pageContext;
@property (copy, nonatomic) NSString *pageSession;
@property (copy, nonatomic) NSString *name;
@property (copy) NSString *namescope;
@property (copy, nonatomic) NSString *moduleName;
@property (copy, nonatomic) NSString *piperSession;
@property (copy) NSDictionary *inParams;
@property (copy, nonatomic) id /* block */ lazyInParamsFetcher;
@property (copy, nonatomic) NSDictionary *outParams;
@property (copy, nonatomic) NSArray *ruleEngineParams;
@property (copy, nonatomic) NSSet *dataTypes;
@property (nonatomic) double invokeTimestamp;
@property (nonatomic) double callbackTimestamp;
@property (nonatomic) double privacyEventTimestamp;
@property (nonatomic) unsigned long long callbackType;
@property (nonatomic) BOOL shouldReportForDataMap;

- (id)standarizeResponse:(id)a0;
- (id)fetchInParams;
- (id)rulerParams;
- (void).cxx_destruct;
- (id)init;
- (id)dictRepresentation;

@end
