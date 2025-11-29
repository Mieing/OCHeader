@class NSString;

@interface AWEPOIFeedTagRateSurveyFreqLimitInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long freqActionType;
@property (copy, nonatomic) NSString *freqActionName;
@property (nonatomic) long long freqLimitSeconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
