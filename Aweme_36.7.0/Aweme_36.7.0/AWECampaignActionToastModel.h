@class NSString;

@interface AWECampaignActionToastModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *toast;
@property (nonatomic) long long frequency;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
