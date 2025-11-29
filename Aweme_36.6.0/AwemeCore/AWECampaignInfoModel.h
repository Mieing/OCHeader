@class NSString;

@interface AWECampaignInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *campaignID;
@property (nonatomic) unsigned long long hookTimeInterval;
@property (copy, nonatomic) NSString *schemaURL;
@property (copy, nonatomic) NSString *activityType;
@property (copy, nonatomic) NSString *activityTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
