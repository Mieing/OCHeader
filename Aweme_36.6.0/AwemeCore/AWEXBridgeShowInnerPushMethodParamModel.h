@class NSString, NSDictionary;

@interface AWEXBridgeShowInnerPushMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titlePrefix;
@property (copy, nonatomic) NSString *titleSuffix;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *businessType;
@property (copy, nonatomic) NSDictionary *trackParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
