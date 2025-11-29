@class NSNumber, NSDictionary, NSString;

@interface AWECampaignPendantLimitModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *installTimeLimit;
@property (retain, nonatomic) NSNumber *activeTimeLimit;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isEmpty;

@end
