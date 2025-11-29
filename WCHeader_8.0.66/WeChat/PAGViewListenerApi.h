@class NSString, NSObject;
@protocol FlutterBinaryMessenger;

@interface PAGViewListenerApi : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;
@property (retain, nonatomic) NSString *messageChannelSuffix;

- (id)initWithBinaryMessenger:(id)a0;
- (id)initWithBinaryMessenger:(id)a0 messageChannelSuffix:(id)a1;
- (void)onAnimationUpdatePagId:(long long)a0 completion:(id /* block */)a1;
- (void)onAnimationStartPagId:(long long)a0 completion:(id /* block */)a1;
- (void)onAnimationEndPagId:(long long)a0 completion:(id /* block */)a1;
- (void)onAnimationCancelPagId:(long long)a0 completion:(id /* block */)a1;
- (void)onAnimationRepeatPagId:(long long)a0 completion:(id /* block */)a1;
- (void)onPagSizeReadyPagId:(long long)a0 width:(long long)a1 height:(long long)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
