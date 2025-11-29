@class NSObject;
@protocol FlutterBinaryMessenger;

@interface FWFNSObjectFlutterApi : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;

- (id)initWithBinaryMessenger:(id)a0;
- (void)observeValueForObjectWithIdentifier:(long long)a0 keyPath:(id)a1 objectIdentifier:(long long)a2 changeKeys:(id)a3 changeValues:(id)a4 completion:(id /* block */)a5;
- (void)disposeObjectWithIdentifier:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
