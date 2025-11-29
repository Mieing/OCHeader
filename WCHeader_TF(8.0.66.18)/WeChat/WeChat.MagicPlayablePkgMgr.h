@interface WeChat.MagicPlayablePkgMgr : NSObject <WAPrefetchMgrExt> {
    void /* unknown type, empty encoding */ loaded;
    void /* unknown type, empty encoding */ appId;
    void /* unknown type, empty encoding */ moduleName;
    void /* unknown type, empty encoding */ debugModeType;
    void /* unknown type, empty encoding */ contact;
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ callback;
}

- (void)prefetchGetCodeCmd:(id)a0 didFinishDownloadWithRet:(BOOL)a1 infoData:(id)a2 remainRetryCount:(unsigned long long)a3;
- (id)init;
- (void).cxx_destruct;

@end
