@class NSDictionary, NSString, AWEPadPolymericChannelPageModel;

@interface AWEPadPolymericChannelResponse : MTLModel <MTLJSONSerializing, AWEPadNetworkMonitorModelProtocol>

@property (retain, nonatomic) AWEPadPolymericChannelPageModel *channelPageResponse;
@property (retain, nonatomic) NSDictionary *logPB;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *logID;

+ (id)channelPageResponseJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
