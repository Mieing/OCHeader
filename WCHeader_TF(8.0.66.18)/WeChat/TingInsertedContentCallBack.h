@class NSString, NSObject;
@protocol FlutterBinaryMessenger;

@interface TingInsertedContentCallBack : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;
@property (retain, nonatomic) NSString *messageChannelSuffix;

- (id)initWithBinaryMessenger:(id)a0;
- (id)initWithBinaryMessenger:(id)a0 messageChannelSuffix:(id)a1;
- (void)onDialogChangePercent:(double)a0 completion:(id /* block */)a1;
- (void)flutterAnimationExpandWithCompletion:(id /* block */)a0;
- (void)flutterAnimationShrinkWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
