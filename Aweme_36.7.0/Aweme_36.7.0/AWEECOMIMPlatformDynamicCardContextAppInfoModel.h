@class NSString;

@interface AWEECOMIMPlatformDynamicCardContextAppInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *env;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *bffJSVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
