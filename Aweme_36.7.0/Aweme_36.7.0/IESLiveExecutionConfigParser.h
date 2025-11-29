@class NSError, NSString;

@interface IESLiveExecutionConfigParser : NSObject <IESLiveExecutionConfigParserProtocol>

@property (retain, nonatomic) NSError *internalError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)validateValue:(id)a0 ofClass:(Class)a1 forKey:(id)a2;
- (void)setInternalErrorToOutput:(id *)a0;
- (id)parsePipelineConfigs:(id)a0;
- (id)parseInjectionConfigs:(id)a0;
- (id)parsePipelineConfig:(id)a0 forStage:(id)a1;
- (id)parseStepConfig:(id)a0 withKeyPrefix:(id)a1;
- (id)parseInjectionConfig:(id)a0 withKeyPrefix:(id)a1;
- (id)validateStringArray:(id)a0 forKey:(id)a1;
- (id)parseConfig:(id)a0 error:(id *)a1;
- (BOOL)validateKeyExistence:(id)a0 inDictionary:(id)a1 ofClass:(Class)a2;
- (void).cxx_destruct;
- (BOOL)validateKey:(id)a0;

@end
