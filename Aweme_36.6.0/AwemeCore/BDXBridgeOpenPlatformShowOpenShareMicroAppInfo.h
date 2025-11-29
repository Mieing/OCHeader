@class NSString;

@interface BDXBridgeOpenPlatformShowOpenShareMicroAppInfo : BDXBridgeModel

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appTitle;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *appUrl;
@property (copy, nonatomic) NSString *thirdAppSchema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
