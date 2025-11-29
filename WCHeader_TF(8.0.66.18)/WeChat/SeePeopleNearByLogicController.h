@class LbsContactInfoList, NSString, LocationRetriever, CLLocation;
@protocol SeePeopleNearByUIDelegate;

@interface SeePeopleNearByLogicController : MMObject <ICertInfoMgrExt, LocationRetrieveDelegate, PBMessageObserverDelegate> {
    unsigned int m_uiEventID;
    unsigned int m_lbsEventID;
    unsigned int m_uiTryCount;
    id<SeePeopleNearByUIDelegate> m_delegate;
    unsigned int m_uiCurOpCode;
}

@property (retain, nonatomic) CLLocation *m_location;
@property (retain, nonatomic) LbsContactInfoList *m_lbsContactList;
@property (retain, nonatomic) LocationRetriever *m_locationRetrieve;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (void)updateLbsContactInfo;
- (void)cancelUpdateLbsContactInfo;
- (BOOL)clearMyLbsData;
- (void)updateAdInfo;
- (void)closeAd:(id)a0;
- (void)onRetrieveLocationOK:(id)a0;
- (void)onRetrieveLocationTimeOut:(id)a0;
- (void)onRetrieveLocationError:(int)a0;
- (BOOL)CreateClearLBSDataEvent;
- (BOOL)CreateLBSPoiListEvent:(id)a0;
- (BOOL)CreateLBSFindEvent:(id)a0;
- (void)onSelectedWithLbsContactInfo:(id)a0;
- (void)onSelectedWithLbsPoiItem:(id)a0;
- (void)OnUpdateCertInfo;
- (BOOL)CreateJoinLBSRoomEvent:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
