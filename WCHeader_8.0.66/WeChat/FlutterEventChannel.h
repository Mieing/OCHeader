@class NSString, NSObject;
@protocol FlutterTaskQueue, FlutterBinaryMessenger, FlutterMethodCodec;

@interface FlutterEventChannel : NSObject {
    NSObject<FlutterBinaryMessenger> *_messenger;
    NSString *_name;
    NSObject<FlutterMethodCodec> *_codec;
    NSObject<FlutterTaskQueue> *_taskQueue;
    long long _connection;
}

+ (id)eventChannelWithName:(id)a0 binaryMessenger:(id)a1;
+ (id)eventChannelWithName:(id)a0 binaryMessenger:(id)a1 codec:(id)a2;

- (id)initWithName:(id)a0 binaryMessenger:(id)a1 codec:(id)a2;
- (id)initWithName:(id)a0 binaryMessenger:(id)a1 codec:(id)a2 taskQueue:(id)a3;
- (void)setStreamHandler:(id)a0;
- (void).cxx_destruct;

@end
