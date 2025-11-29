@class NSDate;

@interface AWEHPCombineFrequencyCheckStrategy : NSObject <AWEHPCombineStrategyProtocol>

@property (retain, nonatomic) NSDate *lastPassiveSuccessRequestTime;

- (void)onRequestSuccess;
- (BOOL)checkCanRequestWithScene:(id)a0;
- (BOOL)checkCanRequestWithRequest:(id)a0;
- (void).cxx_destruct;

@end
