@class FWFInstanceManager;
@protocol FlutterBinaryMessenger;

@interface FWFScrollViewHostApiImpl : NSObject <FWFUIScrollViewHostApi>

@property (weak, nonatomic) id<FlutterBinaryMessenger> binaryMessenger;
@property (weak, nonatomic) FWFInstanceManager *instanceManager;

- (id)initWithInstanceManager:(id)a0;
- (id)scrollViewForIdentifier:(long long)a0;
- (void)createFromWebViewWithIdentifier:(long long)a0 webViewIdentifier:(long long)a1 error:(id *)a2;
- (id)contentOffsetForScrollViewWithIdentifier:(long long)a0 error:(id *)a1;
- (void)scrollByForScrollViewWithIdentifier:(long long)a0 x:(double)a1 y:(double)a2 error:(id *)a3;
- (void)setContentOffsetForScrollViewWithIdentifier:(long long)a0 toX:(double)a1 y:(double)a2 error:(id *)a3;
- (void)setDelegateForScrollViewWithIdentifier:(long long)a0 uiScrollViewDelegateIdentifier:(id)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
