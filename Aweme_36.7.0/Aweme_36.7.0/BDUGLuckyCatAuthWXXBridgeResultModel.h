@class NSString, NSNumber;

@interface BDUGLuckyCatAuthWXXBridgeResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) NSNumber *errorCode;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
