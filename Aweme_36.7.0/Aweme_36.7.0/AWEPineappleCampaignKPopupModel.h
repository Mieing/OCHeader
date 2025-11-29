@class NSArray, NSString, AWEPineAppleCampaignLimitModel;

@interface AWEPineappleCampaignKPopupModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEPineAppleCampaignLimitModel *limitModel;
@property (copy, nonatomic) NSArray *F2popups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)F2popupsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
