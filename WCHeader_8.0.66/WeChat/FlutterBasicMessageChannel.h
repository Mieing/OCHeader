@class NSString, NSObject;
@protocol FlutterTaskQueue, FlutterBinaryMessenger, FlutterMessageCodec;

@interface FlutterBasicMessageChannel : NSObject {
    NSObject<FlutterBinaryMessenger> *_messenger;
    NSString *_name;
    NSObject<FlutterMessageCodec> *_codec;
    long long _connection;
    NSObject<FlutterTaskQueue> *_taskQueue;
}

+ (id)messageChannelWithName:(id)a0 binaryMessenger:(id)a1;
+ (id)messageChannelWithName:(id)a0 binaryMessenger:(id)a1 codec:(id)a2;
+ (void)resizeChannelWithName:(id)a0 binaryMessenger:(id)a1 size:(long long)a2;
+ (void)setWarnsOnOverflow:(BOOL)a0 forChannelWithName:(id)a1 binaryMessenger:(id)a2;

- (id)initWithName:(id)a0 binaryMessenger:(id)a1 codec:(id)a2;
- (id)initWithName:(id)a0 binaryMessenger:(id)a1 codec:(id)a2 taskQueue:(id)a3;
- (void)sendMessage:(id)a0;
- (void)sendMessage:(id)a0 reply:(id /* block */)a1;
- (void)setMessageHandler:(id /* block */)a0;
- (void)resizeChannelBuffer:(long long)a0;
- (void)setWarnsOnOverflow:(BOOL)a0;
- (void).cxx_destruct;

@end
