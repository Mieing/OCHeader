@class NSNumber, NSString, NSDictionary;

@interface BDUGLuckyCatRewardVideoAdXBridgeResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *errorMsg;
@property (retain, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSDictionary *extraData;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
