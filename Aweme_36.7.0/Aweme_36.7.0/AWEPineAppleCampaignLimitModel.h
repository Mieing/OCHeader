@class NSString;

@interface AWEPineAppleCampaignLimitModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long DoNotDisturbTime;
@property (nonatomic) long long GlobalLimitInterval;
@property (nonatomic) long long GlobalLimit;
@property (nonatomic) long long DoNotDisturbCount;
@property (nonatomic) long long ShowInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
