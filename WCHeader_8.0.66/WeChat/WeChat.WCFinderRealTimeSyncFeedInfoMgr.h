@interface WeChat.WCFinderRealTimeSyncFeedInfoMgr : MMUserService <MMServiceProtocol> {
    void /* unknown type, empty encoding */ maxRetryCount;
    void /* unknown type, empty encoding */ defaultDelaySeconds;
    void /* unknown type, empty encoding */ retryableErrorCodes;
    void /* unknown type, empty encoding */ errorPrepareDataFailed;
    void /* unknown type, empty encoding */ errorDataServiceUnavailable;
    void /* unknown type, empty encoding */ errorContentVMEmpty;
    void /* unknown type, empty encoding */ errorFeedIdEmpty;
    void /* unknown type, empty encoding */ errorFeedIdConversionFailed;
    void /* unknown type, empty encoding */ errorResponseEmpty;
    void /* unknown type, empty encoding */ errorSyncFailed;
    void /* unknown type, empty encoding */ infoSendSyncRequest;
    void /* unknown type, empty encoding */ pendingWorkItem;
    void /* unknown type, empty encoding */ __curContentVM;
    void /* unknown type, empty encoding */ _lastBuffer;
    void /* unknown type, empty encoding */ _isSyncing;
    void /* unknown type, empty encoding */ _retryCount;
}

- (void)updateCurFeed:(id)a0;
- (void)stopSync;
- (id)init;
- (void)dealloc;
- (void)handleAppDidEnterBackground;
- (void)handleAppWillEnterForeground;
- (void).cxx_destruct;

@end
