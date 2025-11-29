@class NSNumber, NSDictionary, NSString;

@interface AWEAwemeCampaignPendantLimitModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *activeDaysLimit;
@property (nonatomic) BOOL isDependentActive;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
