@class NSString, NSObject;
@protocol FlutterBinaryMessenger;

@interface BizFinderLivePlayersCallbackApi : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;
@property (retain, nonatomic) NSString *messageChannelSuffix;

- (id)initWithBinaryMessenger:(id)a0;
- (id)initWithBinaryMessenger:(id)a0 messageChannelSuffix:(id)a1;
- (void)onRecFirstFramePlayerId:(long long)a0 completion:(id /* block */)a1;
- (void)onPlayEndPlayerId:(long long)a0 completion:(id /* block */)a1;
- (void)onPlayWarningReconnectPlayerId:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
