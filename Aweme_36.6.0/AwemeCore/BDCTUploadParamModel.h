@class NSString;

@interface BDCTUploadParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *params;
@property (copy, nonatomic) NSString *file_name;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
