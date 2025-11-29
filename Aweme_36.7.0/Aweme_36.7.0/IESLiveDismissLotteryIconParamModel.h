@class NSString, NSNumber;

@interface IESLiveDismissLotteryIconParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *lotteryId;
@property (retain, nonatomic) NSNumber *lotteryType;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
