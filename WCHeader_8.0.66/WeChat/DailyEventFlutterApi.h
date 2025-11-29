@class NSString, NSObject;
@protocol FlutterBinaryMessenger;

@interface DailyEventFlutterApi : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;
@property (retain, nonatomic) NSString *messageChannelSuffix;

- (id)initWithBinaryMessenger:(id)a0;
- (id)initWithBinaryMessenger:(id)a0 messageChannelSuffix:(id)a1;
- (void)onEventRequest:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
