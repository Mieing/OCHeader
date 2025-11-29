@class NSDictionary, NSNumber;

@interface BDUGLuckycatGetDogCommonParamsXBridgeModel : BDXBridgeModel

@property (copy, nonatomic) NSDictionary *dogParams;
@property (retain, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSDictionary *dogParamsJson;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
