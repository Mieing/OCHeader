@class JsVMInitInfo, NSString, NSFileHandle, MagicBrushCore, NSMutableDictionary, WAOpenGLView, MemoryMappedKV, NSMutableArray;

@interface WATraceReportMgr : MMUserService <MMServiceProtocol> {
    NSString *_appId;
    BOOL _stopped;
    NSMutableDictionary *_traceInfos;
    NSFileHandle *_currentFileHandle;
    WAOpenGLView *_currentView;
    MagicBrushCore *_mbCore;
    unsigned long long _beginTime;
    unsigned long long _downloadPkgTotalTime;
    long long _maxFPS;
    JsVMInitInfo *_jsVMInitInfo;
    MemoryMappedKV *_useAuditsAppKv;
    NSMutableDictionary *_dicUseAuditsApp;
}

@property (retain, nonatomic) NSMutableArray *extraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id)traceFilePath;
- (void)openAudits:(id)a0;
- (void)closeAudits:(id)a0 scene:(unsigned long long)a1;
- (void)setCurrentView:(id)a0 view:(id)a1 mbCore:(id)a2;
- (void)resumeTrace:(id)a0;
- (void)pauseTrace:(id)a0;
- (void)startTrace:(id)a0;
- (void)stopTrace:(id)a0 scene:(unsigned long long)a1;
- (void)traceCPUUsage;
- (void)traceMemoryUsage;
- (void)traceFPS;
- (void)traceStartupTime:(unsigned long long)a0 endTime:(unsigned long long)a1 isDownloadCode:(BOOL)a2;
- (void)traceOnResourcePrepareDoneTime:(unsigned long long)a0 endTime:(unsigned long long)a1;
- (void)traceOnInitReadyFromResourcePrepareDoneTime:(unsigned long long)a0 endTime:(unsigned long long)a1;
- (void)traceOnInitReadyFromUserScriptInjected:(unsigned long long)a0 endTime:(unsigned long long)a1;
- (void)traceOnJSScirptInjected:(unsigned long long)a0 endTime:(unsigned long long)a1 filePath:(id)a2 fileSize:(long long)a3;
- (void)traceOnInteractiveFromInitReady:(unsigned long long)a0 endTime:(unsigned long long)a1;
- (void)traceOnDownloadPkgTime:(id)a0 pkgSize:(unsigned long long)a1 pkgType:(unsigned long long)a2 moduleAppId:(id)a3 beginTime:(unsigned long long)a4 endTime:(unsigned long long)a5;
- (void)traceOnContactCgiTime:(unsigned long long)a0 endTime:(unsigned long long)a1 appId:(id)a2;
- (void)traceOnLaunchCgiTime:(unsigned long long)a0 endTime:(unsigned long long)a1;
- (void)traceOnStartupToJsInject:(unsigned long long)a0 endTime:(unsigned long long)a1;
- (void)tracePreloadJsVMInitTime:(unsigned long long)a0 endTime:(unsigned long long)a1;
- (void)traceOnJsVMInitTime:(unsigned long long)a0 endTime:(unsigned long long)a1 isPreload:(BOOL)a2;
- (void)onTrace;
- (void)setAuditsStateForNextTime:(id)a0 state:(BOOL)a1;
- (BOOL)isOpenAuditsOnStartup:(id)a0;
- (BOOL)isAuditsHasOpened:(id)a0;
- (BOOL)isAuditsOpened:(id)a0;
- (BOOL)openUseAuditsWithAppID:(id)a0;
- (void)closeUseAuditsWithAppID:(id)a0 scene:(unsigned long long)a1;
- (id)getAuditsTraceInfo:(id)a0;
- (BOOL)setAuditsTraceInfo:(id)a0 data:(id)a1;
- (void)sendAuditsStateOnce:(id)a0;
- (void).cxx_destruct;

@end
