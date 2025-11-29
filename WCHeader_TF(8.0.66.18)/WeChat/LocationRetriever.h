@class NSString, NSMutableArray, MMTimer;
@protocol LocationRetrieveDelegate;

@interface LocationRetriever : NSObject <ILocationMgrExt> {
    unsigned long long m_locationTag;
    MMTimer *m_checkResultTimer;
    MMTimer *m_retrieveCallbackTimer;
    struct timeval { long long tv_sec; int tv_usec; } m_tvStart;
    struct timeval { long long tv_sec; int tv_usec; } m_tvFirst;
    BOOL m_bFirstRetriever;
    unsigned int m_firstRetrieverRange;
    BOOL m_bReport;
    BOOL m_hasRetrieveCallback;
}

@property (retain, nonatomic) NSMutableArray *m_recentLocationList;
@property (nonatomic) unsigned long long authScene;
@property (nonatomic) BOOL m_bCanRepeatReportLocation;
@property (nonatomic) float m_requiredAccuracy;
@property (nonatomic) int m_timeoutCount;
@property (weak, nonatomic) id<LocationRetrieveDelegate> m_delegate;
@property (nonatomic) unsigned long long m_eBusType;
@property (nonatomic) long long m_geoMode;
@property (nonatomic) BOOL m_bShieldAccuracy;
@property (nonatomic) unsigned long long m_enmLBSDetailLevel;
@property (retain, nonatomic) NSString *m_sQMapSubKey;
@property (nonatomic) BOOL m_bEnableIndoor;
@property (nonatomic) int retrieveOverTime;
@property (nonatomic) int retrieveCallbackOverTime;

+ (BOOL)isLocationServiceValidWithoutChallengeForAuthScene:(unsigned long long)a0;
+ (double)getLocationAccuracy:(id)a0;
+ (id)getGlobalCachedLastLocation;
+ (void)cacheGlobalLastLocation:(id)a0;
+ (id)changeEarthLocationToMarsLocation:(id)a0;

- (id)initWithDelegate:(id)a0 authScene:(unsigned long long)a1;
- (void)stopCheckTimer;
- (void)stopRetrieveCallbackTimer;
- (void)Reset;
- (void)dealloc;
- (void)RetrieveLocationWithoutRequestAuthorization;
- (void)RetrieveLocation;
- (id)RetrieveLocationFor:(unsigned long long)a0;
- (void)StartRetrieveLocation;
- (void)CancelRetrieveLocation;
- (void)CleanDelegate;
- (int)getRetrieveOverTime;
- (void)onGPSLocationError:(int)a0 withTag:(unsigned long long)a1;
- (void)onGPSLocationChanged:(id)a0 withTag:(unsigned long long)a1;
- (BOOL)isLocationOK:(id)a0;
- (void)onGpsTimerTimeCheck;
- (id)getBestResultFromLocationList;
- (void)addToRecentLocationList:(id)a0;
- (void)onHeadingTimeCheck;
- (void)reportRetriever:(id)a0 retrieverSuccess:(BOOL)a1 inCache:(BOOL)a2;
- (void)onRetrieveCallbackTimeOut;
- (id)getTrueLocation:(id)a0;
- (void).cxx_destruct;

@end
