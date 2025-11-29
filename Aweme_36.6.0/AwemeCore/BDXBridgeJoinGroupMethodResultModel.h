@class NSNumber, NSString, NSDictionary;

@interface BDXBridgeJoinGroupMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *errorMsg;
@property (copy, nonatomic) NSDictionary *result;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
