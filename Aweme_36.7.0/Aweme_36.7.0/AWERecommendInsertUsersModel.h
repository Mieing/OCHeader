@class NSArray, NSNumber;

@interface AWERecommendInsertUsersModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *users;
@property (retain, nonatomic) NSNumber *offset;

+ (id)usersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
