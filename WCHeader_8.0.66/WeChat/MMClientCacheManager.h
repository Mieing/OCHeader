@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MMClientCacheManager : MMUserService <IMsgExt, ICdnComMgrExt, KindaNotifyExt, MMServiceProtocol, MMKernelExt> {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_curDownloadUrl;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)getApplicationState;

- (id)init;
- (id)getInfoPath;
- (id)getBasicData;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceTerminate;
- (void)onAuthOK;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)onManulLoginOK;
- (void)onNewRegOK;
- (void)OnCdnDownload:(id)a0;
- (void)onKindaNotify:(id)a0 value:(id)a1;
- (void)reportExtInfo:(id)a0;
- (void)doDReport;
- (void)doSSReport:(unsigned int)a0 isBasic:(BOOL)a1;
- (void)doSSReport:(unsigned int)a0;
- (void)doSSReportForPayCheckoutCounter;
- (void)updateKey:(id)a0;
- (void)checkConfig;
- (void).cxx_destruct;

@end
