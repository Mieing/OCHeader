@class NSDictionary, NSString;

@interface AWECampaignPendantFrequentLimit : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long daysWindows;
@property (nonatomic) long long showTimesPerDay;
@property (nonatomic) long long daysWillNotPresent;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
