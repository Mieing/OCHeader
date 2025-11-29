@class NSNumber, NSString;

@interface BDUGLuckyADRewardedVideoXBridgeResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *errorMsg;
@property (retain, nonatomic) NSNumber *statusCode;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
