@class NSString, NSObject;
@protocol FlutterTaskQueue, FlutterBinaryMessenger, FlutterMethodCodec;

@interface FlutterMethodChannel : NSObject {
    NSObject<FlutterBinaryMessenger> *_messenger;
    NSString *_name;
    NSObject<FlutterMethodCodec> *_codec;
    long long _connection;
    NSObject<FlutterTaskQueue> *_taskQueue;
}

+ (id)methodChannelWithName:(id)a0 binaryMessenger:(id)a1;
+ (id)methodChannelWithName:(id)a0 binaryMessenger:(id)a1 codec:(id)a2;

- (id)initWithName:(id)a0 binaryMessenger:(id)a1 codec:(id)a2;
- (id)initWithName:(id)a0 binaryMessenger:(id)a1 codec:(id)a2 taskQueue:(id)a3;
- (void)invokeMethod:(id)a0 arguments:(id)a1;
- (void)invokeMethod:(id)a0 arguments:(id)a1 result:(id /* block */)a2;
- (void)setMethodCallHandler:(id /* block */)a0;
- (void)resizeChannelBuffer:(long long)a0;
- (void).cxx_destruct;

@end
