@class NSString, PrepareWecoinConsumeResponse, ConsumeWecoinResponse;

@interface WCCoinConsumeError : MMObject

@property (nonatomic) unsigned long long errorType;
@property (nonatomic) int errorCode;
@property (copy, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) PrepareWecoinConsumeResponse *prepareConsumeResponse;
@property (retain, nonatomic) ConsumeWecoinResponse *consumeResponse;

- (id)init;
- (void).cxx_destruct;

@end
