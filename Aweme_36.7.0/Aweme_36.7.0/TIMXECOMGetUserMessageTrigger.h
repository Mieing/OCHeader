@class TIMXECOMGetUserOpenConversationsHandler, NSString, TIMXSDKInstance, TIMXGCDTimer, NSMutableArray;

@interface TIMXECOMGetUserMessageTrigger : NSObject <TIMXLongConnectionChangeDelegate, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain) TIMXGCDTimer *pullTimer;
@property (retain, nonatomic) NSMutableArray *messageHandlers;
@property (retain, nonatomic) TIMXECOMGetUserOpenConversationsHandler *openConversationsHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedOperationQueue;

- (void)userDidLogin:(id)a0;
- (void)appEnterForeground:(id)a0;
- (void)userDidLogout:(id)a0;
- (void)onLongConnectionStateChange:(unsigned long long)a0;
- (void)updateUserMessageHandle;
- (void)tokenChanged:(id)a0;
- (void)endCirclePulling;
- (void)getUserMessageWithReason:(long long)a0;
- (void)beginCirclePulling;
- (void)pulling:(id)a0;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
