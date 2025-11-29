@class NSMutableDictionary, NSString, NSObject, BizFinderLivePlayersCallbackApi;
@protocol FlutterTextureRegistry;

@interface BRSFinderLiveTexturePlugin : NSObject <BizFinderLivePlayersManager, MMFlutterPlugin>

@property (retain, nonatomic) NSMutableDictionary *playerItemsMap;
@property (readonly, nonatomic) NSObject<FlutterTextureRegistry> *registry;
@property (retain, nonatomic) BizFinderLivePlayersCallbackApi *callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)createPlayerFinderLivePlayInfo:(id)a0 autoPlay:(BOOL)a1 playOffset:(long long)a2 completion:(id /* block */)a3;
- (void)destroyPlayerId:(long long)a0 error:(id *)a1;
- (void)playPlayerId:(long long)a0 error:(id *)a1;
- (void)stopPlayerId:(long long)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
