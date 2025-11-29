@class NSString, NSMutableDictionary, LocationRetriever;

@interface WWKFReportLocationMgr : MMUserService <PBMessageObserverDelegate, LocationRetrieveDelegate, MMServiceProtocol>

@property (retain, nonatomic) LocationRetriever *locationRetriever;
@property (nonatomic) BOOL retrieveringLocation;
@property (retain, nonatomic) NSMutableDictionary *reportUsers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)shouldShowReportLocationSwitchForUserName:(id)a0;
- (BOOL)shouldReportLocationForUserName:(id)a0;
- (BOOL)isAllowReportLocationForUserName:(id)a0;
- (void)reportLocationIfNeededForUserName:(id)a0 scene:(int)a1;
- (void)setAllowReportLocation:(BOOL)a0 userName:(id)a1;
- (void)cancelGetLocation;
- (void)reportLocation:(id)a0;
- (void)doReportLocationForUserName:(id)a0 usingLocation:(id)a1 locationType:(id)a2 scene:(int)a3;
- (void)onFailedToGetLocation;
- (void)onRetrieveLocationOK:(id)a0;
- (void)onRetrieveLocationTimeOut:(id)a0;
- (void)onRetrieveLocationError:(int)a0;
- (void)onRetrieveLocationCallbackTimeOut:(id)a0;
- (void)onSetAllowReportLocationResp:(id)a0;
- (void)onReportLocationResp:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
