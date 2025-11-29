@class AFDCampaignF2FActivityFollowSettingsModel, AFDCampaignScanFollowSettingsModel, AFDCampaignFollowSettingsModel, NSString, AFDCampaignPublishStorySettingsModel, AFDCampaignModifyAvatarSettingsModel;

@interface AFDCampaignSettingsModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AFDCampaignScanFollowSettingsModel *scanFollow;
@property (retain, nonatomic) AFDCampaignFollowSettingsModel *follow;
@property (retain, nonatomic) AFDCampaignPublishStorySettingsModel *publishStory;
@property (retain, nonatomic) AFDCampaignModifyAvatarSettingsModel *modifyAvatar;
@property (retain, nonatomic) AFDCampaignF2FActivityFollowSettingsModel *f2fActivityFollow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scanFollowJSONTransformer;
+ (id)followJSONTransformer;
+ (id)publishStoryJSONTransformer;
+ (id)modifyAvatarJSONTransformer;
+ (id)f2fActivityFollowJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
