@class NSString, NewABTestXMLParser;

@interface NewABTestLogic : MMUserService <PBMessageObserverDelegate, IMsgExt, MMKernelExt, MMServiceProtocol>

@property (nonatomic) unsigned int uiNextUpdateTime;
@property (nonatomic) unsigned int uiClientLastUpdateTime;
@property (retain, nonatomic) NewABTestXMLParser *xmlParser;
@property (nonatomic) BOOL isUpdatingABTestFromSvr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)dealloc;
- (void)tryUpdateABTestFromSvr;
- (void)getABTestFromSvr;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onAuthOKWithVersionChangeFrom:(unsigned int)a0 to:(unsigned int)a1;
- (void)onAuthOK;
- (void)willEnterForeground;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)updateNextUpdateTime:(unsigned int)a0;
- (unsigned int)getNextUpdateTimeFromCache;
- (BOOL)saveNewUpdateTimeForCache:(unsigned int)a0;
- (unsigned int)getLastUpdateTimeFromCache;
- (BOOL)saveLastUpdateTimeForCache:(unsigned int)a0;
- (void)updateClientLastUpdateTime:(unsigned int)a0;
- (unsigned int)getClientLastUpdateTimeFromCache;
- (BOOL)saveNewClientLastUpdateTimeForCache:(unsigned int)a0;
- (unsigned int)getUpdateTimeFromFile:(id)a0;
- (BOOL)saveUpdateTimeToFile:(unsigned int)a0 fileName:(id)a1;
- (void).cxx_destruct;

@end
