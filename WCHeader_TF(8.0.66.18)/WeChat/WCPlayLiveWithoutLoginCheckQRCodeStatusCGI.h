@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, WCPlayLiveWithoutLoginCheckQRCodeStatusDelegate;

@interface WCPlayLiveWithoutLoginCheckQRCodeStatusCGI : NSObject <PBMessageObserverDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workerThreadQueue;
@property (retain, nonatomic) NSMutableSet *eventIdDic;
@property (weak, nonatomic) id<WCPlayLiveWithoutLoginCheckQRCodeStatusDelegate> delegate;
@property (retain, nonatomic) NSString *token;

- (id)init;
- (void)sendRequest;
- (void)stopRequest;
- (void)internalStopRequest;
- (void)addRequestEventID:(unsigned int)a0;
- (BOOL)isLatestRequestEventID:(unsigned int)a0;
- (void)removeRequestEventID:(unsigned int)a0;
- (void)handleResponse:(id)a0 withRequest:(id)a1 eventID:(unsigned int)a2;
- (void)onCodeLoginFailOnMainThread;
- (void)onCodeLoginSuccessOnMainThread:(double)a0 liveContact:(id)a1 liveInfo:(id)a2;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
