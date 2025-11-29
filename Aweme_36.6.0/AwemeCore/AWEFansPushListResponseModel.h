@class NSArray, NSNumber;

@interface AWEFansPushListResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *userList;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *total;
@property (nonatomic) BOOL hasHistory;
@property (nonatomic) long long nextUserType;
@property (retain, nonatomic) NSNumber *lastTimestamp;

+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
