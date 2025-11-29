@class NSDictionary, BDXBridgeLynxAuthSettings, NSString;

@interface BDXBridgeAuthModelV2 : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *bizConfigs;
@property (retain, nonatomic) BDXBridgeLynxAuthSettings *lynxAuthSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lynxAuthSettingsJSONTransformer;
+ (id)bizConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
