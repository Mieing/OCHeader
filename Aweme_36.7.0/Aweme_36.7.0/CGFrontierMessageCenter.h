@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, CGItem;

@interface CGFrontierMessageCenter : NSObject <CGFrontierManagerDelegate, CGFrontierMessageProtocol>

@property (weak, nonatomic) id<CGItem> item;
@property (retain, nonatomic) NSMutableDictionary *dictHandlers;
@property (retain, nonatomic) NSMutableDictionary *seqToCallbackDic;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;
@property (copy, nonatomic) NSString *sessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleReceiveAckInstruction:(id)a0;
- (void)_handleReceiveMessageInstruction:(id)a0;
- (id)_buildAckInst:(id)a0;
- (void)didReceiveInstruction:(id)a0;
- (id)_generateUniqueId;
- (void)_triggerTimeout:(id)a0;
- (void)didSocketStateChanged:(long long)a0;
- (void)didSocketConnectionFailed:(id)a0 with:(long long)a1;
- (void)registerFrontierMessageWithInst:(id)a0 target:(id)a1 selector:(SEL)a2;
- (id)sendMessageWithEvent:(long long)a0 inst:(id)a1 function:(long long)a2 extra:(id)a3 callback:(id /* block */)a4;
- (id)_buildInst:(id)a0 function:(id)a1 event:(id)a2 extra:(id)a3;
- (int)_getServiceID;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithItem:(id)a0;

@end
