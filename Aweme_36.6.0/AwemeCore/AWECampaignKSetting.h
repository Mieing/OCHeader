@class AWEPineappleCampaignKPopupModel, NSArray, NSDictionary, NSString;

@interface AWECampaignKSetting : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long randomTime;
@property (nonatomic) long long roundRobinInterval;
@property (copy, nonatomic) NSArray *popups;
@property (copy, nonatomic) NSArray *redPacketResources;
@property (copy, nonatomic) NSArray *noticeInfo;
@property (copy, nonatomic) NSArray *noticeMultiInfo;
@property (copy, nonatomic) NSArray *activityButton;
@property (retain, nonatomic) NSDictionary *fcoinInfo;
@property (copy, nonatomic) NSDictionary *fcoinNotLoginConfig;
@property (retain, nonatomic) NSDictionary *feedPendantInfo;
@property (retain, nonatomic) NSArray *activityCardInfos;
@property (nonatomic) long long version;
@property (nonatomic) long long onlineVersion;
@property (retain, nonatomic) AWEPineappleCampaignKPopupModel *popupsConfig;
@property (copy, nonatomic) NSDictionary *feedVVDiversionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)popupsJSONTransformer;
+ (id)popupsConfigJSONTransformer;
+ (id)redPacketResourcesJSONTransformer;
+ (id)noticeInfoJSONTransformer;
+ (id)noticeMultiInfoJSONTransformer;
+ (id)activityButtonJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)feedOnlineVersion;
- (void).cxx_destruct;

@end
