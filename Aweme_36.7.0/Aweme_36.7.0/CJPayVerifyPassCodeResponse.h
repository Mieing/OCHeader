@class NSString;

@interface CJPayVerifyPassCodeResponse : CJPayPassKitBaseResponse

@property (nonatomic) int remainRetryCount;
@property (nonatomic) int remainLockTime;
@property (copy, nonatomic) NSString *remainLockDesc;

+ (id)keyMapper;

- (void).cxx_destruct;

@end
