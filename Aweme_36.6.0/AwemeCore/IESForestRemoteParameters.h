@class NSString, IESForestChannelParameter;

@interface IESForestRemoteParameters : NSObject

@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *bundle;
@property (nonatomic) unsigned long long configType;
@property (retain, nonatomic) IESForestChannelParameter *channelParameter;

+ (id)extractGeckoInfoFormURL:(id)a0;
+ (id)_remoteParametersProgressivelyWithURLStringForODR:(id)a0 offlineFileType:(BOOL)a1 resourceMeta:(id)a2;
+ (id)_remoteParametersWithURLStringOfFivePathComponents:(id)a0 resourceMeta:(id)a1 defaultPrefixToAccessKey:(id)a2;
+ (id)_remoteParametersProgressivelyWithURLStringForFalconMigration:(id)a0 resourceMeta:(id)a1 defaultPrefixToChannelExtra:(id)a2;
+ (id)_remoteParametersProgressivelyWithURLString:(id)a0 resourceMeta:(id)a1 prefixDict:(id)a2 onlyMatchWholePath:(BOOL)a3;
+ (id)prefixDictFromDefaultPrefixToChannelExtra:(id)a0;
+ (id)_matchWithPrefix:(id)a0 pathComponents:(id)a1 prefixIndex:(unsigned long long)a2 resourceMeta:(id)a3 prefixDict:(id)a4;
+ (id)remoteParametersWithURLString:(id)a0 defaultPrefixToAccessKey:(id)a1 defaultPrefixToChannelExtra:(id)a2;

- (id)initWithAccessKey:(id)a0 channel:(id)a1 bundle:(id)a2;
- (void)appendInfoFromResourceMeta:(id)a0;
- (id)fetchersDescription;
- (void).cxx_destruct;
- (id)description;

@end
