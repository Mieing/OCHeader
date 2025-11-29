@class NSArray, NSNumber, NSDictionary;

@interface AWEFollowListRecommendCardResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *userList;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSNumber *hasMore;
@property (retain, nonatomic) NSNumber *total;
@property (retain, nonatomic) NSDictionary *extra;

+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
