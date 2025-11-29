@class NSObject;
@protocol FlutterBinaryMessenger;

@interface FWFUIScrollViewDelegateFlutterApi : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;

- (id)initWithBinaryMessenger:(id)a0;
- (void)scrollViewDidScrollWithIdentifier:(long long)a0 UIScrollViewIdentifier:(long long)a1 x:(double)a2 y:(double)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;

@end
