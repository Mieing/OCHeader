@class NSLock, NSString;
@protocol IESLCMessageHandlerProtocol;

@interface IESIMWSMessageHandlerPlugin : NSObject <IESLCMessageHandlerService>

@property (nonatomic) unsigned long long currentState;
@property (retain, nonatomic) NSLock *lock;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1 receivedTimestamp:(double)a2;
- (void)p_pause;
- (void)pauseBySource:(id)a0 extraParams:(id)a1;
- (void)resumeBySource:(id)a0 extraParams:(id)a1;
- (void)p_listen;
- (BOOL)p_checkOperationWithSource:(id)a0;
- (BOOL)p_shouldHandleIMPushMsg:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isPaused;

@end
