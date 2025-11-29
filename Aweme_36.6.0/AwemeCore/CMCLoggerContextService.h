@class NSDictionary;

@interface CMCLoggerContextService : NSObject

@property (retain, nonatomic) NSDictionary *contextDict;

+ (id)sharedInstance;

- (void)p_startRequestContextConfig;
- (id)p_getNodeNameWithVerifyInfo:(id)a0 contextInfo:(id)a1;
- (id)p_matchesInString:(id)a0 pattern:(id)a1 patternParamArray:(id)a2;
- (void)p_handlePrimaryKeyNodeWithVerifyInfo:(id)a0 contextInfo:(id)a1 node:(id)a2 primaryKey:(id)a3 dataKey:(id)a4;
- (void)p_handleDataKeyNodeWithVerifyInfo:(id)a0 contextInfo:(id)a1 node:(id)a2 dataKey:(id)a3 componentKey:(id)a4;
- (id)p_parseContextArrayWithDataDict:(id)a0;
- (id)p_parseMutiNodeWithFuncNameDict:(id)a0;
- (id)p_parseMutiNodeWithPatternFuncNameDict:(id)a0;
- (id)p_parseNodePatternWithNodePatternDict:(id)a0;
- (void)registerContextConfigWhenReady;
- (void)combineLogWithInfo:(id)a0;
- (void).cxx_destruct;

@end
