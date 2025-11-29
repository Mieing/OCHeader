@class NSArray, NSDictionary, AWEChallengeModel, NSString;

@interface AWERequestChallengeResponse : AWEBaseApiModel <AWERequestChallengeResponseModuleInterface>

@property (nonatomic) BOOL isPreViewChallenge;
@property (retain, nonatomic) AWEChallengeModel *challenge;
@property (copy, nonatomic) NSArray *cardModels;
@property (copy, nonatomic) NSDictionary *shootMobExtras;
@property (copy, nonatomic) NSArray *slideList;
@property (copy, nonatomic) NSString *slideTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)slideListJSONTransformer;
+ (id)cardModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
