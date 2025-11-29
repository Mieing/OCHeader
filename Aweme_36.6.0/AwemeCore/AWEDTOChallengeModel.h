@class NSArray, NSString;
@protocol ACCChallengeModelProtocol;

@interface AWEDTOChallengeModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) id<ACCChallengeModelProtocol> challenge;
@property (nonatomic) BOOL didHandleChallengeBind;
@property (copy, nonatomic) NSArray *currentBindChallengeInfos;
@property (copy, nonatomic) NSString *challengeIdsFromSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentBindChallengeInfosJSONTransformer;
+ (id)challengeJSONTransformer;
+ (id)acc_JSONKeyPathsByPropertyKey;
+ (void)_aweLazyRegisterLoad_Draft;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
