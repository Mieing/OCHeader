@class NSString, NSObject;
@protocol FlutterBinaryMessenger;

@interface BizCallbackApi : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;
@property (retain, nonatomic) NSString *messageChannelSuffix;

- (id)initWithBinaryMessenger:(id)a0;
- (id)initWithBinaryMessenger:(id)a0 messageChannelSuffix:(id)a1;
- (void)markPersonalizedChangedOperation:(long long)a0 completion:(id /* block */)a1;
- (void)onPOIFetchedUserLocation:(id)a0 endTimeMs:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
