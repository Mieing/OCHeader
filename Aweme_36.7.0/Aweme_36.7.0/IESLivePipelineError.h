@class NSArray, NSMutableDictionary;

@interface IESLivePipelineError : NSError

@property (retain, nonatomic) NSMutableDictionary *mutableStepErrors;
@property (readonly, nonatomic) NSArray *stepErrors;

- (void)addStepError:(id)a0 atIndex:(unsigned long long)a1;
- (id)createErrorUserInfo;
- (void).cxx_destruct;
- (BOOL)hasError;
- (id)init;

@end
