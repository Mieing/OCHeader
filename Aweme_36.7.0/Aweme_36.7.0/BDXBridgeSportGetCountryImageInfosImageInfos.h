@class NSString;

@interface BDXBridgeSportGetCountryImageInfosImageInfos : BDXBridgeModel

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *chinese_name;
@property (copy, nonatomic) NSString *eng_name;
@property (copy, nonatomic) NSString *image_url;
@property (copy, nonatomic) NSString *image_base64;
@property (copy, nonatomic) NSString *image_md5;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
