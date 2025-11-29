@class NSString, NSNumber;

@interface BDCTStartNFCParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) NSNumber *timeout;
@property (retain, nonatomic) NSNumber *autoRetry;
@property (retain, nonatomic) NSNumber *retryTimes;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
