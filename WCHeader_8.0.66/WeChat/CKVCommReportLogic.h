@class NSString, HeavyUserRespInfo, NSRecursiveLock;

@interface CKVCommReportLogic : MMUserService <MMServiceProtocol, PBMessageObserverDelegate, IMsgExt> {
    NSString *m_filename;
    NSRecursiveLock *m_lock;
    HeavyUserRespInfo *m_heavy_cache;
}

@property BOOL is_running_;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)dealloc;
- (id)getIDMappingFullFileName;
- (void)makeSureIDMappingFileExist;
- (BOOL)IsIDMappingFileExist;
- (void)PrintIDMapping:(id)a0 withSvrData:(BOOL)a1;
- (void)SaveIDMapping:(id)a0 withChannel:(int)a1;
- (unsigned int)getIDMappingVersion:(int)a0;
- (id)GetIDMappingObj;
- (void)ReportData:(id)a0 withData:(id)a1 withChannel:(int)a2;
- (BOOL)RequestGetKVStrategy:(id)a0;
- (void)ReportDataWithMainThread:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)OnGetKVStrategyReturn:(id)a0 Event:(unsigned int)a1;
- (void)OnReportReturn:(id)a0 Event:(unsigned int)a1;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void).cxx_destruct;

@end
