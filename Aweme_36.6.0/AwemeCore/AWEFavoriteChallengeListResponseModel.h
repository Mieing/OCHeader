@class NSArray, NSNumber;

@interface AWEFavoriteChallengeListResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *challengeList;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;

+ (id)challengeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
