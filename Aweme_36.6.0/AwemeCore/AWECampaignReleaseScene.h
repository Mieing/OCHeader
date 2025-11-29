@class NSString;

@interface AWECampaignReleaseScene : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long releaseStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
