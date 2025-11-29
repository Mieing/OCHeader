@class NSString, NSObject;
@protocol FlutterBinaryMessenger;

@interface BizInteractiveCallbackApi : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;
@property (retain, nonatomic) NSString *messageChannelSuffix;

- (id)initWithBinaryMessenger:(id)a0;
- (id)initWithBinaryMessenger:(id)a0 messageChannelSuffix:(id)a1;
- (void)reportOpJumpAppWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
