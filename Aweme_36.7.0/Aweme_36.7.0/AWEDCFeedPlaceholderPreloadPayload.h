@class NSString;

@interface AWEDCFeedPlaceholderPreloadPayload : NSObject

@property (copy, nonatomic) NSString *businessID;
@property (nonatomic) long long cacheCount;
@property (nonatomic) long long enableUserAvatarCache;
@property (nonatomic) BOOL cacheDistinguishUser;
@property (nonatomic) BOOL cacheWhenNotLogin;
@property (nonatomic) long long diskSizeLimit;
@property (nonatomic) BOOL enable7DayInvalid;

- (void).cxx_destruct;
- (id)init;

@end
