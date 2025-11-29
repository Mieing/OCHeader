@class NSString, NSArray, AWECampaignShortcutInfoModel, AWECampaignProfileTabbarModel, AWECampaignPopupWindowModel, AWECampaignProfileActivityModel, NSDictionary, AWECampaignFeedPendantModel, AWECampaignLoginBannerModel, NSNumber;

@interface AWECampaignEntranceModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *campaignID;
@property (retain, nonatomic) NSNumber *campaignStartTime;
@property (retain, nonatomic) NSNumber *campaignEndTime;
@property (nonatomic) BOOL enableCampaign;
@property (nonatomic) BOOL isNewUser;
@property (retain, nonatomic) AWECampaignFeedPendantModel *feedPendantModel;
@property (retain, nonatomic) AWECampaignPopupWindowModel *popupWindowModel;
@property (retain, nonatomic) AWECampaignLoginBannerModel *loginBannerModel;
@property (retain, nonatomic) AWECampaignProfileTabbarModel *profileTabbarModel;
@property (retain, nonatomic) AWECampaignProfileActivityModel *profileActivityModel;
@property (retain, nonatomic) AWECampaignShortcutInfoModel *shortcutInfo;
@property (copy, nonatomic) NSArray *compaignTasks;
@property (retain, nonatomic) NSArray *popupModels;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) BOOL highPriorityShow;
@property (nonatomic) BOOL ignoreAuditingVersion;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)feedPendantModelJSONTransformer;
+ (id)popupWindowModelJSONTransformer;
+ (id)loginBannerModelJSONTransformer;
+ (id)profileTabbarModelJSONTransformer;
+ (id)compaignTasksJSONTransformer;
+ (id)campaignShortcutInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
