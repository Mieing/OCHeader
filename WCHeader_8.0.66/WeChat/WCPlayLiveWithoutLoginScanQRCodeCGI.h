@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, WCPlayLiveWithoutLoginScanQRCodeDelegate;

@interface WCPlayLiveWithoutLoginScanQRCodeCGI : NSObject <PBMessageObserverDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workerThreadQueue;
@property (retain, nonatomic) NSMutableArray *eventIdDic;
@property (weak, nonatomic) id<WCPlayLiveWithoutLoginScanQRCodeDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)sendRequest;
- (void)stopRequest;
- (void)internalStopRequest;
- (void)addRequestEventID:(unsigned int)a0;
- (BOOL)isLatestRequestEventID:(unsigned int)a0;
- (void)removeRequestEventID:(unsigned int)a0;
- (void)handleResponse:(id)a0 withRequest:(id)a1 eventID:(unsigned int)a2;
- (void)onCodeLoginFailOnMainThread;
- (void)onCodeLoginSuccessOnMainThread:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
