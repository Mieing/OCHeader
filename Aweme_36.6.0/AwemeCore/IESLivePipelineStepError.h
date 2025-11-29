@class NSArray, NSMutableArray;

@interface IESLivePipelineStepError : NSError

@property (retain, nonatomic) NSMutableArray *mutableAllErrors;
@property (retain, nonatomic) NSMutableArray *mutablePreInjectionErrors;
@property (retain, nonatomic) NSMutableArray *mutableModuleErrors;
@property (retain, nonatomic) NSMutableArray *mutablePostInjectionErrors;
@property (readonly, nonatomic) NSArray *allErrors;
@property (readonly, nonatomic) NSArray *preInjectionErrors;
@property (readonly, nonatomic) NSArray *moduleErrors;
@property (readonly, nonatomic) NSArray *postInjectionErrors;

- (id)createErrorUserInfo;
- (void)addErrorWithName:(id)a0 error:(id)a1 sourceType:(long long)a2;
- (void).cxx_destruct;
- (BOOL)hasError;
- (id)init;
- (id)primaryError;

@end
