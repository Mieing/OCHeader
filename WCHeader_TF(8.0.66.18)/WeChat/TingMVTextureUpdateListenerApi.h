@class NSString, NSObject;
@protocol FlutterBinaryMessenger;

@interface TingMVTextureUpdateListenerApi : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;
@property (retain, nonatomic) NSString *messageChannelSuffix;

- (id)initWithBinaryMessenger:(id)a0;
- (id)initWithBinaryMessenger:(id)a0 messageChannelSuffix:(id)a1;
- (void)onTextureUpdateTaskId:(id)a0 listenId:(id)a1 info:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
