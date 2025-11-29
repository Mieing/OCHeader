@class NSString;

@interface DHSaveBase64ImageParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *format;
@property (copy, nonatomic) NSString *base64;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
