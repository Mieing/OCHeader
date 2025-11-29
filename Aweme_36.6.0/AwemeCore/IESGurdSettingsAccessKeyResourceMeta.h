@class NSDictionary, IESGurdSettingsResourceBaseConfig, NSArray;

@interface IESGurdSettingsAccessKeyResourceMeta : NSObject

@property (copy, nonatomic) NSDictionary *channelConfigDictionary;
@property (retain, nonatomic) IESGurdSettingsResourceBaseConfig *accessKeyConfig;
@property (readonly, copy, nonatomic) NSArray *allChannels;

+ (id)metaWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;

@end
