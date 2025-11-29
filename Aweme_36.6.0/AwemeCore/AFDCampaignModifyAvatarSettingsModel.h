@class NSString;

@interface AFDCampaignModifyAvatarSettingsModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long triggerDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)init;

@end
