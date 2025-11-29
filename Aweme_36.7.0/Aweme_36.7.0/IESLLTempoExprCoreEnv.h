@class NSDictionary;

@interface IESLLTempoExprCoreEnv : NSObject

@property (copy, nonatomic) NSDictionary *envData;

- (id)initWithEnvData:(id)a0;
- (id)envValueOfKey:(id)a0;
- (void).cxx_destruct;

@end
