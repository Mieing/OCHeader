@class NSString;

@interface AWEIMActiveUserAcquirerConfig : NSObject

@property (copy, nonatomic) id /* block */ requestTimeIntervalCallback;
@property (copy, nonatomic) NSString *forceFetchSourceKey;
@property (copy, nonatomic) NSString *loopFetchSourceKey;
@property (nonatomic) BOOL allowProcessNonFriendsInfo;

- (void).cxx_destruct;
- (id)init;

@end
