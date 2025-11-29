@class NSString, NSArray;

@interface AWECampaignGeneralActivityElementModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *activityType;
@property (copy, nonatomic) NSString *activityTag;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSArray *buttonData;
@property (nonatomic) long long delayShowTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
