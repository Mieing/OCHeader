@interface AWELiveSwiftImpl.AWELiveCrossMessageServiceImpl : NSObject <IESLiveDataSyncDelegate, HTSLiveMessageSubscriber> {
    void /* unknown type, empty encoding */ messageCallbacks;
    void /* unknown type, empty encoding */ WRDSMessageCallbacks;
    void /* unknown type, empty encoding */ $__lazy_storage_$_msgListLayoutService;
}

- (void)subscribedSyncDataWithValue:(id)a0 version:(long long)a1;
- (void)subscribedSyncDataUpdatedWithValue:(id)a0 oldVersion:(long long)a1 newVersion:(long long)a2;
- (void)messageReceived:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
