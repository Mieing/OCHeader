@class NSNumber, NSString;

@interface BDXBridgeShowRewardVideoAdMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *openResultCode;
@property (retain, nonatomic) NSNumber *count;
@property (retain, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *errorMsg;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
