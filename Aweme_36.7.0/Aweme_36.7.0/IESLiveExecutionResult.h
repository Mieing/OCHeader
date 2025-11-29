@class NSError;

@interface IESLiveExecutionResult : NSObject

@property (nonatomic) long long resultType;
@property (retain, nonatomic) id resultData;
@property (retain, nonatomic) NSError *error;

+ (id)successResultWithData:(id)a0;
+ (id)completedWithErrorResult:(id)a0 error:(id)a1;
+ (id)cancelledResult;

- (id)initWithType:(long long)a0 data:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)description;

@end
