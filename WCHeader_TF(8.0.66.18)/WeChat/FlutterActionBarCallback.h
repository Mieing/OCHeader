@class NSObject;
@protocol FlutterBinaryMessenger;

@interface FlutterActionBarCallback : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;

- (id)initWithBinaryMessenger:(id)a0;
- (void)setShowFlutterActionBarShow:(id)a0 completion:(id /* block */)a1;
- (void)updateHostActionBarWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
