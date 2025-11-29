@interface EmoticonLiteAppStoreDownloadCallbackCallback : NSObject {
    struct EmoticonLiteAppStoreDownloadCallbackDispatcherBridgeObjcImpl { void /* function */ **x0; struct EmoticonLiteAppStoreDownloadCallbackDispatcherCallback *x1; id x2; } *dispatcher_bridge;
}

- (id)initWithCpp:(struct EmoticonLiteAppStoreDownloadCallbackDispatcherBridgeObjcImpl { void /* function */ **x0; struct EmoticonLiteAppStoreDownloadCallbackDispatcherCallback *x1; id x2; } *)a0;
- (void)onOnDownloadStatusChangedComplete:(unsigned long long)a0;
- (void)onOnDownloadProgressComplete:(unsigned long long)a0;
- (void)onOnNeedPurchaseComplete:(unsigned long long)a0;

@end
