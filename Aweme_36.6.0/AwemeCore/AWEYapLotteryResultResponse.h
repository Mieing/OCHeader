@class NSString, AWEYapLotteryResultInfo;

@interface AWEYapLotteryResultResponse : AWEBaseApiModel

@property (nonatomic) unsigned long long businessCode;
@property (copy, nonatomic) NSString *businessMsg;
@property (retain, nonatomic) AWEYapLotteryResultInfo *lotteryResult;

+ (id)lotteryResultJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
