@class CContact, NSMutableDictionary, NSString, NSDate, LocationRetriever;

@interface BrandServiceContinueLocationReportLogic : MMObject <LocationRetrieveDelegate> {
    BOOL m_hadReported;
}

@property (retain, nonatomic) LocationRetriever *m_locationRetriever;
@property (retain, nonatomic) CContact *m_contact;
@property (retain, nonatomic) NSDate *m_lastReportTime;
@property (nonatomic) unsigned int preEventID;
@property (retain, nonatomic) NSMutableDictionary *extInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)startReportLocationForContact:(id)a0 HasSetLocation:(BOOL)a1;
- (void)locationRetrieveLocation;
- (void)askIsAllowReportLocation;
- (void)allowReportLocation;
- (void)notAllowReportLocation;
- (void)stopReportLocation;
- (void)reportLocationWithLocation:(id)a0 ErrorCode:(long long)a1;
- (void)onRetrieveLocationError:(int)a0;
- (void)onRetrieveLocationOK:(id)a0;
- (void)onRetrieveLocationTimeOut:(id)a0;
- (void)cancelRetrieveLocationIfOnlyReportOnce;
- (void).cxx_destruct;

@end
