@class NSString, NSMutableDictionary, NSDate;

@interface CertInfoMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate> {
    BOOL m_bUpdating;
    unsigned int m_uiUpdateCount;
}

@property (retain, nonatomic) NSMutableDictionary *m_dicCertInfo;
@property (retain, nonatomic) NSDate *m_tLastUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)GetPathOfIcon:(unsigned int)a0;

- (id)init;
- (void)onServiceInit;
- (void)dealloc;
- (void)LoadCertInfo;
- (void)SaveCertInfo;
- (void)CheckUpdate;
- (void)UpdateInfoTime;
- (unsigned int)GetCertInfoVersion;
- (void)CreateUpdateEvent;
- (id)GetCertIconByKey:(unsigned int)a0;
- (unsigned int)GetBitSet:(unsigned int)a0;
- (id)GetCertInfoByKey:(unsigned int)a0 Update:(BOOL)a1;
- (void)SaveIcon:(id)a0 Data:(id)a1;
- (void)UpdateCertInfo:(unsigned int)a0 Version:(unsigned int)a1 Time:(unsigned int)a2 Desc:(id)a3 Icon:(id)a4 HDIcon:(id)a5;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
