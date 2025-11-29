@class NSString;

@interface AWEFindFriendsContext : NSObject

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *enterType;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *insertedTopUIDs;
@property (nonatomic) BOOL useNewRecommendCount;
@property (nonatomic) BOOL needTrackEnter;
@property (nonatomic) long long listType;
@property (nonatomic) BOOL disableAutoFetchData;

- (void).cxx_destruct;

@end
