@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface XPlayMessageCenter : NSObject <XPlayInnerMessageInterface>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *messageQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)plugginClazzForCommand:(long long)a0;

- (void)playItem:(id)a0 didReceiveMessage:(id)a1;
- (void)sendGSDKAuthResultWithItem:(id)a0 auth:(id)a1 result:(long long)a2 authCode:(id)a3 message:(id)a4;
- (void)sendMessage:(id)a0 type:(long long)a1 toItem:(id)a2 callback:(id /* block */)a3;
- (id)plugginWithItem:(id)a0 ForCommandType:(long long)a1;
- (void)handleMessage:(id)a0 toItem:(id)a1;
- (void)getClientKeyIfNeededWithItem:(id)a0;
- (void)sendSynClientTypeMessageWithItem:(id)a0;
- (void)sendCustomMessage:(id)a0 toItem:(id)a1 callback:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
