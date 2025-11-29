@class NSString;

@interface AWECampaignRedPacketVideoResourceBottomBar : MTLModel <MTLJSONSerializing, AWEUGRedPacketVideoBottomBarProtocol>

@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *activityType;
@property (copy, nonatomic) NSString *activityTag;
@property (copy, nonatomic) NSString *btnColor;
@property (copy, nonatomic) NSString *titleColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
