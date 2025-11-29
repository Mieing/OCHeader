@class NSString, AWECampaignGeneralActivityButtonChangeInfo;

@interface AWECampaignGeneralActivityButtonUIInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long btnType;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *bgColor;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) AWECampaignGeneralActivityButtonChangeInfo *colorChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bottomBarJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
