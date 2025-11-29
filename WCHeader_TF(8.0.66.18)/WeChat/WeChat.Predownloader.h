@interface WeChat.Predownloader : _TtCs12_SwiftObject <ICdnComMgrExt> {
    void /* unknown type, empty encoding */ biz;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ userInfo;
    void /* unknown type, empty encoding */ _isCDNInited;
    void /* unknown type, empty encoding */ _requestedQuota;
    void /* unknown type, empty encoding */ _increasedQuota;
    void /* unknown type, empty encoding */ table;
    void /* unknown type, empty encoding */ _quotaDownloading;
}

- (void)OnCdnInit;
- (void)databaseDidRecover;

@end
