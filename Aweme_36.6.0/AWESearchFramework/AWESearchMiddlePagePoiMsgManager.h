@class NSDictionary;

@interface AWESearchMiddlePagePoiMsgManager : NSObject

@property (copy, nonatomic) id /* block */ msgCallback;
@property (retain, nonatomic) NSDictionary *latestLostMsg;
@property (getter=isFetchingLatestPOIToastMessage) BOOL fetchingLatestPOIToastMessage;
@property (nonatomic) unsigned long long enterMiddlePageCount;
@property (nonatomic, getter=isFeedMiddlePageShowing) BOOL feedMiddlePageShowing;
@property (nonatomic) double lastFetchPOIToastMessageTimestamp;

+ (BOOL)isMessageOptimizationEnabled;
+ (double)feedMiddlePagePOIToastValidInterval;
+ (id)fetchLocationChangeNotificationKey;
+ (double)feedMiddlePageAppearFetchPOIToastInterval;
+ (double)feedMiddlePageDisappearFetchPOIToastInterval;
+ (double)lastLocateSucceedToFetchPOIToastInterval;
+ (id)poiToastMessageLocationCert;
+ (id)feedMiddlePagePOIToastOptimizationInfo;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)registerCaptionMsgSync;
- (void)handleNewMsg:(id)a0;
- (void)startListenWithCallback:(id /* block */)a0;
- (void)subscribeMsgs;
- (void)feedMiddlePageDisappear;
- (void)didEnterFeedMiddlePage;
- (void)feedMiddlePageAppearWithIsEnterAction:(BOOL)a0;
- (void)didFullExitFeedMiddlePage;
- (void)didReceiveApplicationWillEnterForegroundNotification:(id)a0;
- (void)sendCacheMsg;
- (int)poiMsgBusinessId;
- (id)fetchCachedMessageInfo;
- (void)addLocationChangeNotification;
- (void)removeLocationChangeNotification;
- (void)fetchPOIToastMessageIfNeedAtPosition:(long long)a0 withReason:(long long)a1;
- (void)forceFetchLatestPOIToastMessageAtPosition:(long long)a0 withReason:(long long)a1;
- (id)fetchPOIToastMessageInfoFromJSONObject:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)stopListen;

@end
