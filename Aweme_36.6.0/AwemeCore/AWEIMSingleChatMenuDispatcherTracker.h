@class NSString;

@interface AWEIMSingleChatMenuDispatcherTracker : NSObject

@property (nonatomic) double startTime;
@property (nonatomic) BOOL hasLocalUser;
@property (nonatomic) BOOL isCompanyProfile;
@property (copy, nonatomic) NSString *enterFrom;

- (void)startTrackMenuFetchWithLocalUser:(id)a0;
- (void)endTrackMenuFetchWithMenuType:(long long)a0;
- (void).cxx_destruct;

@end
