@class NSString, AWEFeedActivityChannelInfoModel;

@interface AWEFeedActivityInfoModel : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *enterFrom;
@property (readonly, nonatomic) AWEFeedActivityChannelInfoModel *channelInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)channelInfoJSONTransformer;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
