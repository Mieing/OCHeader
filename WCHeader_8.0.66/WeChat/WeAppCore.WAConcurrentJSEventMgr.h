@interface WeAppCore.WAConcurrentJSEventMgr : MMUserService <MMServiceProtocol> {
    void /* unknown type, empty encoding */ arrConcurrentWaitingEvent;
    void /* unknown type, empty encoding */ dicConcurrentRunningEventForAppId;
    void /* unknown type, empty encoding */ $__lazy_storage_$_wxDataMaxRequestConcurrentPerAppID;
    void /* unknown type, empty encoding */ kTotalMaxRequestConcurrentCount;
    void /* unknown type, empty encoding */ kDefaultTimeout;
    void /* unknown type, empty encoding */ lastTimeoutCheckTimestamp;
}

- (void)addConcurrentUserAccountJSEvent:(id)a0 forAppId:(id)a1 param:(id)a2;
- (void)removeConcurrentUserAccountJSEvent:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
