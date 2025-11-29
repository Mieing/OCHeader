@class NSArray, NSString, NSDictionary, NSNumber;

@interface AWEUserRecommendResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *userList;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSNumber *hasMore;
@property (retain, nonatomic) NSNumber *total;
@property (retain, nonatomic) NSString *rid;
@property (nonatomic) long long recommendedNewUsersCount;
@property (retain, nonatomic) NSArray *userExtraList;
@property (retain, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) NSNumber *strategyType;

+ (id)usersJSONTransformer;
+ (id)userListJSONTransformer;
+ (id)userExtraListJSONTransformer;
+ (id)insertUsersModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
