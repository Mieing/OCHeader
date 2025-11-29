@class NSArray, NSDictionary;

@interface AWEChallengeInterveneListResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *models;
@property (nonatomic) BOOL showHistoryTags;
@property (nonatomic) BOOL fillHistoryTagsEnd;
@property (nonatomic) BOOL showPrivacyHistoryTags;
@property (nonatomic) long long showPrivacyCount;
@property (copy, nonatomic) NSDictionary *noChallengeReasonList;

+ (id)modelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
