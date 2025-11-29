@class NSString, NSDictionary;

@interface BDPDynamicPluginLoaderPluginInfo : NSObject

@property (nonatomic) long long pluginState;
@property (copy, nonatomic) NSString *pluginVersion;
@property (copy, nonatomic) NSDictionary *pluginConfig;

- (void).cxx_destruct;

@end
