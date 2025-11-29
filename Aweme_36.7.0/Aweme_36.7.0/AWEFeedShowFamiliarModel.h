@class NSNumber, NSArray, NSString;

@interface AWEFeedShowFamiliarModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *cursor;
@property (copy, nonatomic) NSArray *userList;
@property (copy, nonatomic) NSArray *friendIDList;
@property (copy, nonatomic) NSArray *closeFriendsIDList;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *hotsoonText;
@property (nonatomic) long long vcdCount;
@property (nonatomic) long long hotsoonHasMore;
@property (nonatomic) long long total;
@property (nonatomic) BOOL totalAccurate;

+ (id)hasMoreJSONTransformer;
+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
