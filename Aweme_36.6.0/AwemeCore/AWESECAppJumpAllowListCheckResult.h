@class NSString;

@interface AWESECAppJumpAllowListCheckResult : AWESECAppJumpBasicCheckResult

@property (nonatomic) BOOL isMatched;
@property (copy, nonatomic) NSString *hitRule;

- (void).cxx_destruct;
- (id)init;

@end
