@class NSObject;
@protocol FlutterBinaryMessenger;

@interface FWFWKScriptMessageHandlerFlutterApi : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;

- (id)initWithBinaryMessenger:(id)a0;
- (void)didReceiveScriptMessageForHandlerWithIdentifier:(long long)a0 userContentControllerIdentifier:(long long)a1 message:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
