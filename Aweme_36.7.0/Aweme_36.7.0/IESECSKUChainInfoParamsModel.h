@class NSString;

@interface IESECSKUChainInfoParamsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *marketingChannel;
@property (copy, nonatomic) NSString *channelId;
@property (copy, nonatomic) NSString *channelType;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *ecomEntranceForm;
@property (copy, nonatomic) NSString *productSourcePage;
@property (nonatomic) long long toutiaoAppId;
@property (copy, nonatomic) NSString *bizCampaignType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
