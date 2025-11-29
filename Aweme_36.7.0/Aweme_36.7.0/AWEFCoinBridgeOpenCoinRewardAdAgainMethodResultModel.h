@class NSNumber, NSString;

@interface AWEFCoinBridgeOpenCoinRewardAdAgainMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *code;
@property (retain, nonatomic) NSNumber *subCode;
@property (retain, nonatomic) NSNumber *businessCode;
@property (copy, nonatomic) NSString *errorMsg;
@property (retain, nonatomic) NSNumber *adAgainFinishedTimes;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
