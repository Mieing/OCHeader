@class NSString, AffBizCppToNativeManagerCallback;

@interface AffBizCppToNativeManagerImpl : NSObject <AffBizCppToNativeManagerBase> {
    AffBizCppToNativeManagerCallback *m_callBack;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)getLocalCanvasPkgVersion;
- (int)getEcsLocalCanvasPkgVersion;
- (BOOL)getAllowEmptyListResortSwitch;
- (unsigned long long)getSyncServerTimeMs;
- (BOOL)registerDIct:(int)a0;
- (BOOL)checkBrandListDBHasStartCompression;
- (BOOL)shouldClearCompressedKey;
- (void)markBrandListDBAsCompressBeginAsync:(int)a0;
- (void)markBrandListDBAsCompressFinishAsync:(int)a0;
- (void)setCallback:(id)a0;
- (void)getResortContextAsync:(int)a0;
- (void)onBizDigestFinderLiveInfoChangedAsync:(int)a0 liveInfo:(id)a1;
- (id)genDicFromBizTLResortEventInfo:(id)a0;
- (void)callOnFirstScreenPreResortAsync:(int)a0 eventId:(unsigned long long)a1 scene:(int)a2 startInfo:(id)a3;
- (void)callOnFirstScreenResortStartAsync:(int)a0 eventId:(unsigned long long)a1 scene:(int)a2 startInfo:(id)a3;
- (void)callOnFirstScreenResortEndAsync:(int)a0 eventId:(unsigned long long)a1 scene:(int)a2 endInfo:(id)a3;
- (void)callOnNotifyMsgChangeAsync:(int)a0 eventType:(int)a1 notifyMsg:(id)a2;
- (id)getUserAgent;
- (id)getResortCardContext:(unsigned long long)a0;
- (id)doDataMigrate;
- (void)callOnDataChangeAsync:(int)a0 eventType:(int)a1;
- (void)callOnInitDoneAsync:(int)a0 dbInitDone:(BOOL)a1;
- (void)callOnIDKeyAsync:(int)a0 id:(int)a1 key:(int)a2 value:(int)a3;
- (void)callOnKVAsync:(int)a0 id:(int)a1 value:(id)a2;
- (BOOL)checkCanCreateAdBrandServiceFromResortEvent;
- (void)getBizPoiInfoAsync:(int)a0 cacheOnly:(BOOL)a1;
- (void).cxx_destruct;

@end
