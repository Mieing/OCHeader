@class NSLock, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, TPDLProxyDelegate;

@interface TPDelegateManager : NSObject

@property (retain, nonatomic) NSLock *playLock;
@property (retain, nonatomic) NSLock *proxyPlayLock;
@property (retain, nonatomic) NSLock *preloadLock;
@property (retain, nonatomic) NSLock *offlineLock;
@property (retain, nonatomic) NSMutableDictionary *mPlayDelegateMap;
@property (retain, nonatomic) NSMutableDictionary *mPreLoadDelegateMap;
@property (retain, nonatomic) NSMutableDictionary *mOfflineDownloadDelegateMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (weak, nonatomic) id<TPDLProxyDelegate> proxyDelegate;

+ (id)sharedInstance;

- (void)mm_initTimer;
- (void)mm_deinit;
- (void)mm_reinit:(long long)a0;
- (id)init;
- (void)initTimer;
- (void)addPlayDelegate:(id)a0 playId:(int)a1;
- (void)removePlayDelegateWithPlayId:(int)a0;
- (id)getPlayDelegateWithPlayId:(int)a0;
- (void)addPreLoadyDelegate:(id)a0 preloadId:(int)a1;
- (void)removePreLoadDelegateWithPreloadId:(int)a0;
- (id)getPreLoadDelegateWithPreloadId:(int)a0;
- (void)addOfflineDelegate:(id)a0 downloadId:(int)a1;
- (void)removeOfflineDelegateWithId:(int)a0;
- (id)getOfflineDelegateWithId:(int)a0;
- (void)handleCallbackMessage:(long long)a0 taskId:(int)a1 param1:(id)a2 param2:(id)a3 param3:(id)a4 param4:(id)a5 param5:(id)a6;
- (void)deinit;
- (void)reinit:(long long)a0;
- (void)dispatchCallbackMessage:(long long)a0 taskId:(int)a1 param1:(id)a2 param2:(id)a3 param3:(id)a4 param4:(id)a5 param5:(id)a6;
- (void)dispatchPlayMessageWithDelegate:(id)a0 message:(long long)a1 taskId:(int)a2 param1:(id)a3 param2:(id)a4 param3:(id)a5 param4:(id)a6 param5:(id)a7;
- (void)dispatchGeneralMessageWithDelegate:(id)a0 message:(long long)a1 taskId:(int)a2 param1:(id)a3 param2:(id)a4 param3:(id)a5 param4:(id)a6 param5:(id)a7;
- (void)dispatchPreloadMessageWithDelegate:(id)a0 message:(long long)a1 taskId:(int)a2 param1:(id)a3 param2:(id)a4 param3:(id)a5 param4:(id)a6 param5:(id)a7;
- (void)dispatchOfflineMessageWithDelegate:(id)a0 message:(long long)a1 taskId:(int)a2 param1:(id)a3 param2:(id)a4 param3:(id)a5 param4:(id)a6 param5:(id)a7;
- (void)dispatchUniversalMessageWithDelegate:(id)a0 message:(long long)a1 taskId:(int)a2 param1:(id)a3 param2:(id)a4 param3:(id)a5 param4:(id)a6 param5:(id)a7;
- (void).cxx_destruct;

@end
