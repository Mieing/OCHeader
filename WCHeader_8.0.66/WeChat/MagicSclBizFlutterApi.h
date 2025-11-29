@class NSString, NSObject;
@protocol FlutterBinaryMessenger;

@interface MagicSclBizFlutterApi : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;
@property (retain, nonatomic) NSString *messageChannelSuffix;

- (id)initWithBinaryMessenger:(id)a0;
- (id)initWithBinaryMessenger:(id)a0 messageChannelSuffix:(id)a1;
- (void)invokeBizName:(id)a0 apiName:(id)a1 data:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
