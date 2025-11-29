@class NSObject;
@protocol FlutterBinaryMessenger;

@interface FWFWKWebViewConfigurationFlutterApi : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;

- (id)initWithBinaryMessenger:(id)a0;
- (void)createWithIdentifier:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
