@class NSString, NSDictionary;

@interface DHScreenShotBridgeParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSDictionary *rawData;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long timeOut;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
