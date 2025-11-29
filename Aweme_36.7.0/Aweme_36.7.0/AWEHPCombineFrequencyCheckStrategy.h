@class NSDate;

@interface AWEHPCombineFrequencyCheckStrategy : NSObject <AWEHPCombineStrategyProtocol>

@property (retain, nonatomic) NSDate *lastPassiveSuccessRequestTime;

- (BOOL)p_isFreqScene:(long long)a0;
- (void)onRequestSuccess;
- (BOOL)checkCanRequestWithScene:(long long)a0;
- (BOOL)checkCanRequestWithRequest:(id)a0;
- (void).cxx_destruct;

@end
