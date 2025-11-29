@class IESLLPOIPrefetchThreshold;

@interface IESLLPOIDetailPrefetchStrategy : NSObject

@property (nonatomic) long long networkErrorCounter;
@property (retain, nonatomic) IESLLPOIPrefetchThreshold *threshold;

- (void)trackReachThreshold:(id)a0;
- (BOOL)isMatchStrategyWithKey:(id)a0;
- (void)didRequestFinishWithKey:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
