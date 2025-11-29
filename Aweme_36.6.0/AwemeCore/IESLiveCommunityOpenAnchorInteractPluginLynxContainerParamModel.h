@class NSString;

@interface IESLiveCommunityOpenAnchorInteractPluginLynxContainerParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *containerId;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *position;
@property (copy, nonatomic) NSString *payload;
@property (copy, nonatomic) NSString *extra;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
