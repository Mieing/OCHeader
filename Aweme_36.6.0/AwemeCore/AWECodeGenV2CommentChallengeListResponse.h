@class NSArray;

@interface AWECodeGenV2CommentChallengeListResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *challengesModelArray;
@property (nonatomic) long long total;
@property (nonatomic) BOOL hasMore;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
