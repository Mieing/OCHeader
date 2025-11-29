@class FlutterMethodChannel, NSMutableArray;

@interface SafeMethodChannel : NSObject

@property (nonatomic) BOOL isReady;
@property (retain, nonatomic) FlutterMethodChannel *channel;
@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) NSMutableArray *mWaitingInvokeCall;

+ (id)methodChannelWithName:(id)a0 binaryMessenger:(id)a1;

- (id)init;
- (void)setMethodCallHandler:(id /* block */)a0;
- (void)invokeMethod:(id)a0 arguments:(id)a1;
- (void)invokeMethod:(id)a0 arguments:(id)a1 result:(id /* block */)a2;
- (void)notifyReady;
- (void).cxx_destruct;

@end
