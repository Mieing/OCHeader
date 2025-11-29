@class NSNumber, NSString;

@interface BDXBridgeShowOpenAuthMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *errorMsg;
@property (retain, nonatomic) NSNumber *code;
@property (retain, nonatomic) id response;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
