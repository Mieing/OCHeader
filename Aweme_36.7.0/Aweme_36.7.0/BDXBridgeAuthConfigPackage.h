@class NSString, NSDictionary, BDXBridgeAuthOverriddenMethodPackage, NSNumber, BDXBridgeAuthLynxSettings;

@interface BDXBridgeAuthConfigPackage : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSDictionary *content;
@property (readonly, copy, nonatomic) NSDictionary *contentV2;
@property (readonly, nonatomic) BDXBridgeAuthLynxSettings *lynxAuthSettings;
@property (readonly, nonatomic) NSNumber *packageVersion;
@property (readonly, nonatomic) long long packageType;
@property (readonly, copy, nonatomic) NSString *channel;
@property (readonly, nonatomic) long long channelIndex;
@property (readonly, nonatomic) BDXBridgeAuthOverriddenMethodPackage *overriddenMethodPackage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentJSONTransformer;
+ (id)contentV2JSONTransformer;
+ (id)lynxAuthSettingsJSONTransformer;
+ (id)overriddenMethodPackageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
