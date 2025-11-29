@class NSString, NSDictionary, DitoPageContext;

@interface AWEPOIDetailStayTimeTracker : NSObject

@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *poiBackendType;
@property (nonatomic) long long stayTime;
@property (nonatomic) long long stayTimeInGrouponFeed;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *poiEnterID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *sessionInfoWhenComing;
@property (weak, nonatomic) DitoPageContext *context;
@property (retain, nonatomic) NSString *poiDeviceSamecity;

- (void)stopTrackerForKey:(id)a0;
- (void)startTrackerForKey:(id)a0;
- (void)didFetchPOIDetailResponse:(id)a0;
- (void)stopGrouponFeedTrackerForKey:(id)a0;
- (void)leavePOIDetailPage;
- (void)executeGrouponFeedTracker;
- (id)initWithPOIConstData:(id)a0 context:(id)a1;
- (void)p_trackTotalStayTime;
- (void)p_trackNewStayTime;
- (void)setValidValue:(id)a0 forKey:(id)a1 dictionary:(id)a2;
- (id)trackDurationParams;
- (void).cxx_destruct;

@end
