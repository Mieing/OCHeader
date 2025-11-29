@class NSString;

@interface CJSDKParamConfig : NSObject

@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *settingsVersion;
@property (copy, nonatomic) NSString *sdkName;
@property (copy, nonatomic) NSString *merchantId;

+ (id)defaultConfig;

- (void).cxx_destruct;

@end
