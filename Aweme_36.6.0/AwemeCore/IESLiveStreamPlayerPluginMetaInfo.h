@class NSString, NSArray;

@interface IESLiveStreamPlayerPluginMetaInfo : NSObject

@property (copy, nonatomic) NSString *pluginProtocolName;
@property (copy, nonatomic) NSString *implClassName;
@property (nonatomic) unsigned long long activeLevel;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSArray *specifiedBizDomainList;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
