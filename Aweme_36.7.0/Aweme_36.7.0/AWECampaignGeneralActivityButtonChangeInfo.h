@class NSString;

@interface AWECampaignGeneralActivityButtonChangeInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long timeIndex;
@property (copy, nonatomic) NSString *targetColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
