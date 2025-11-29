@class NSString, AWEAwemeModel;

@interface AWENearbyFeedFMPManager : AWENearbyFMPBaseManager <AWEPlayVideoMessage, AWENearbyFMPInjectProtocol>

@property (retain, nonatomic) AWEAwemeModel *currentAwemeModel;
@property (nonatomic) long long preloadType;
@property (nonatomic) long long awemeType;
@property (nonatomic) long long degradationTime;
@property (nonatomic) BOOL isVideoPreFetch;
@property (copy, nonatomic) NSString *serverLatency;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)playerDidReadyForDisplay:(id)a0;
- (id)modelForPlayer:(id)a0;
- (void)__handleVideoPlayFailed:(id)a0;
- (BOOL)__isFromNearby:(id)a0;
- (void)fmpDidShow;
- (void)feedRequestFail;
- (void)feedRequestEmpty;
- (void)cardFeedDidReadyForDisplay;
- (void)cardFeedDisplayFail;
- (void)__handleLiveStartPlay:(id)a0;
- (void)__handleLivePlayFailed:(id)a0;
- (void)__handleFeedScroll:(id)a0;
- (id)injectCustomParams;
- (id)injectEventName;
- (void)injectRegisterFMPMessage;
- (void)injectUnRegisterFMPMessage;
- (void)injectDidTrackerEnd;
- (void)didLoadAweme:(id)a0 preloadType:(unsigned long long)a1;
- (void)feedWillstartRequestWithDegradationTime:(long long)a0;
- (long long)awemeTypeForModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
