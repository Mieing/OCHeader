@class NSDictionary, IESGurdSettingsResourceBaseConfig, NSArray;

@interface IESGurdSettingsResourceMeta : NSObject

@property (copy, nonatomic) NSDictionary *accessKeyMetaDictionary;
@property (retain, nonatomic) IESGurdSettingsResourceBaseConfig *appConfig;
@property (readonly, copy, nonatomic) NSArray *allAccessKeys;

+ (id)metaWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;

@end
