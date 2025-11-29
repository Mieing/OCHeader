@class NSString, NSObject;
@protocol FlutterBinaryMessenger;

@interface FlutterBinaryMessengerRelay : NSObject <FlutterBinaryMessenger>

@property (weak, nonatomic) NSObject<FlutterBinaryMessenger> *parent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParent:(id)a0;
- (void)sendOnChannel:(id)a0 message:(id)a1;
- (void)sendOnChannel:(id)a0 message:(id)a1 binaryReply:(id /* block */)a2;
- (id)makeBackgroundTaskQueue;
- (long long)setMessageHandlerOnChannel:(id)a0 binaryMessageHandler:(id /* block */)a1;
- (long long)setMessageHandlerOnChannel:(id)a0 binaryMessageHandler:(id /* block */)a1 taskQueue:(id)a2;
- (void)cleanUpConnection:(long long)a0;
- (void).cxx_destruct;

@end
