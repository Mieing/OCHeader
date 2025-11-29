@class NSError;

@interface IESLivePipelineInjectionResult : NSObject

@property (nonatomic) long long resultType;
@property (retain, nonatomic) NSError *error;

+ (id)cancelledResult;
+ (id)completedWithError:(id)a0;
+ (id)successResult;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 error:(id)a1;

@end
