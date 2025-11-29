@class NSArray;

@interface AWEMultipleChallengeResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *challengeList;

+ (id)challengeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
