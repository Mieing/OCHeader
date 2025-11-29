@class ShakeGetResponse, NSString, ShakeReportResponse, CLLocation, NSMutableArray, LocationRetriever;
@protocol ShakeLogicProxyDelegate;

@interface ShakePeopleLogicController : MMObject <PBMessageObserverDelegate, LocationRetrieveDelegate> {
    unsigned int m_uiEventID;
    unsigned int m_uiTryCount;
    double m_dbLastReportTime;
    id<ShakeLogicProxyDelegate> m_delegate;
}

@property (retain, nonatomic) CLLocation *m_location;
@property (retain, nonatomic) LocationRetriever *m_locationRetrieve;
@property (nonatomic) BOOL m_isTriggeredShakeReport;
@property (retain, nonatomic) NSMutableArray *m_eventIDsToListen;
@property (retain, nonatomic) ShakeReportResponse *m_reportResponse;
@property (retain, nonatomic) ShakeGetResponse *m_getResponse;
@property (nonatomic) BOOL m_isTaskStoped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isShakeStarted;
- (void)addToEventIDsToListen:(long long)a0;
- (BOOL)isInEventIDsToListen:(long long)a0;
- (void)createShakeReportEvent;
- (void)createShakeGetEvent;
- (void)doShakeGet;
- (void)processReportResponse;
- (void)processGetResponse;
- (void)onRetrieveLocationOK:(id)a0;
- (void)onRetrieveLocationTimeOut:(id)a0;
- (void)onRetrieveLocationError:(int)a0;
- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (void)shakeReport;
- (void)shakeStop;
- (void)shakeReset;
- (void)shakeTerminate;
- (BOOL)isShowBannerView;
- (id)getMsgForState:(unsigned int)a0;
- (void)updateShakeLocation;
- (void)SetShakeList:(id)a0 andScene:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
