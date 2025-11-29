@class NSArray, NSString;

@interface AWESharePanelConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *videoChannels;
@property (copy, nonatomic) NSArray *videoActions;
@property (copy, nonatomic) NSArray *moreChannelList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoChannelsJSONTransformer;
+ (id)videoActionsJSONTransformer;
+ (id)moreChannelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
