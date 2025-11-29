@class NSString;

@interface AWEYapLotteryResultInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *result;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) long long amount;
@property (readonly, nonatomic) BOOL isSuccess;
@property (nonatomic) BOOL addToTotalAmount;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
