@class NSDictionary;

@interface AWEClientAIByteNNLLMMonitorForwardInfo : NSObject

@property (nonatomic) long long firstTokenDuration;
@property (nonatomic) long long latency;
@property (nonatomic) long long token;
@property (retain, nonatomic) NSDictionary *trackParams;

- (void).cxx_destruct;

@end
