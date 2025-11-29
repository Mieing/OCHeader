@class NSDictionary, NSString;

@interface BDMannorClickMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSDictionary *adExtraData;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *clickType;
@property (copy, nonatomic) NSString *openUrl;
@property (copy, nonatomic) NSString *webUrl;
@property (copy, nonatomic) NSString *webTitle;
@property (copy, nonatomic) NSString *mpUrl;
@property (copy, nonatomic) NSString *lynxUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
