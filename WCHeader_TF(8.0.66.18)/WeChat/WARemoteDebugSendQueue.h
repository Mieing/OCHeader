@class NSMutableArray, CADisplayLink;
@protocol WARemoteDebugSendQueueDelegate;

@interface WARemoteDebugSendQueue : NSObject {
    double _sendTimestamp;
    CADisplayLink *_sendTimer;
    unsigned int _sendSeq;
    unsigned int _prevSendSeq;
    NSMutableArray *_msgQueue;
    NSMutableArray *_pkgQueue;
    unsigned int _resendCountForSvrBlock;
    unsigned int _resendCountForSvrError;
}

@property (weak, nonatomic) id<WARemoteDebugSendQueueDelegate> delegate;
@property (nonatomic) BOOL sendoutImmediately;
@property (nonatomic) BOOL isDebuggerRunLoopMode;

+ (id)generateUUID;

- (void)dealloc;
- (id)init;
- (void)sendDebugMsgList:(id)a0;
- (void)handleQueue;
- (void)msgQueue2PkgQueue;
- (void)handleSendDebugMsgResp:(id)a0 uuid:(id)a1;
- (void)resendTryAgain;
- (void)sendOrResendPkg;
- (void)updatePrintInfo;
- (unsigned int)getIntervalSendCount;
- (void)initSendTimer;
- (void)destorySendTimer;
- (void).cxx_destruct;

@end
