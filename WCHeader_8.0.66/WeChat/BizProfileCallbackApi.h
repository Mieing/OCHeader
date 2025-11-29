@class NSString, NSObject;
@protocol FlutterBinaryMessenger;

@interface BizProfileCallbackApi : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;
@property (retain, nonatomic) NSString *messageChannelSuffix;

- (id)initWithBinaryMessenger:(id)a0;
- (id)initWithBinaryMessenger:(id)a0 messageChannelSuffix:(id)a1;
- (void)onContactInfoChangeParams:(id)a0 completion:(id /* block */)a1;
- (void)updateStatusUsername:(id)a0 exportId:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
