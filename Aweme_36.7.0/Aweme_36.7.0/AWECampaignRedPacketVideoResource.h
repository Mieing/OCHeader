@class NSString, AWECampaignRedPacketVideoResourceBottomBar;

@interface AWECampaignRedPacketVideoResource : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *campaignID;
@property (copy, nonatomic) NSString *resURL;
@property (copy, nonatomic) NSString *resMD5;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) long long splitFrameNum;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSString *multiSchema;
@property (copy, nonatomic) NSString *resChannel;
@property (copy, nonatomic) NSString *resName;
@property (nonatomic) BOOL showBottomBar;
@property (nonatomic) long long resourceType;
@property (retain, nonatomic) AWECampaignRedPacketVideoResourceBottomBar *bottomBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bottomBarJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
