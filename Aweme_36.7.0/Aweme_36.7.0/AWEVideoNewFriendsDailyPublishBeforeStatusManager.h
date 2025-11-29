@class NSArray;

@interface AWEVideoNewFriendsDailyPublishBeforeStatusManager : NSObject

@property (copy, nonatomic) NSArray *friendsRelativeList;
@property (copy, nonatomic) NSArray *mateRelativeList;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)reset;

@end
