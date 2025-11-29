@class NSArray;

@interface AWEFansLocalUserResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *users;
@property (nonatomic) long long maxTime;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL isFull;
@property (nonatomic) long long lastFullTime;
@property (nonatomic) long long lastCursor;

+ (id)usersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
