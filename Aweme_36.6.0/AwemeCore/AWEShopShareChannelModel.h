@class NSString, AWEURLModel;

@interface AWEShopShareChannelModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *channelIcon;
@property (copy, nonatomic) NSString *channelText;
@property (copy, nonatomic) NSString *channelSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
