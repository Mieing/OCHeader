@class NSArray, NSDictionary, IESGurdSettingsResourceConfigCDNMultiVersion, IESGurdSettingsResourceConfigCDNFallBack;

@interface IESGurdSettingsResourceBaseConfig : NSObject

@property (retain, nonatomic) IESGurdSettingsResourceConfigCDNFallBack *CDNFallBack;
@property (copy, nonatomic) NSArray *pipelineItemsArray;
@property (copy, nonatomic) NSDictionary *prefixToAccessKeyDictionary;
@property (copy, nonatomic) NSDictionary *prefixToChannel;
@property (copy, nonatomic) NSDictionary *prefixToChannelExtra;
@property (retain, nonatomic) IESGurdSettingsResourceConfigCDNMultiVersion *CDNMultiVersion;

+ (id)configWithDictionary:(id)a0;

- (void).cxx_destruct;

@end
