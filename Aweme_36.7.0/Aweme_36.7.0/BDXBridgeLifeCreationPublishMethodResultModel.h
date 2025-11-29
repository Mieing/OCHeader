@class NSNumber, NSString;

@interface BDXBridgeLifeCreationPublishMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *errorMsg;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
