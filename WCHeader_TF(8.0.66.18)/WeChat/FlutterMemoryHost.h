@class NSString, NSObject;
@protocol FlutterBinaryMessenger;

@interface FlutterMemoryHost : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;
@property (retain, nonatomic) NSString *messageChannelSuffix;

- (id)initWithBinaryMessenger:(id)a0;
- (id)initWithBinaryMessenger:(id)a0 messageChannelSuffix:(id)a1;
- (void)freeImageCacheWithCompletion:(id /* block */)a0;
- (void)getMemInfoWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
