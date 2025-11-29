@class NSString;

@interface AFDCampaignF2FActivityFollowSettingsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *followNewFriendToast;
@property (nonatomic) long long followBackDialogShowTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
