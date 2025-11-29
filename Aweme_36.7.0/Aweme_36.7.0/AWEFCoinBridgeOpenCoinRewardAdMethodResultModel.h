@class NSNumber, NSString;

@interface AWEFCoinBridgeOpenCoinRewardAdMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *code;
@property (retain, nonatomic) NSNumber *subCode;
@property (retain, nonatomic) NSNumber *businessCode;
@property (copy, nonatomic) NSString *errorMsg;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
