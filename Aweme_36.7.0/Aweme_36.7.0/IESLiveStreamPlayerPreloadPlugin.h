@class NSString;

@interface IESLiveStreamPlayerPreloadPlugin : IESLiveStreamPlayerBasePlugin <IESLiveStreamPlayerPreloadPluginProtocol>

@property (nonatomic) long long preloadType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivatePlugin;

- (void)preloadWithRoomModel:(id)a0 callTrace:(id)a1 type:(long long)a2;
- (void)cancelPreloadWithCallTrace:(id)a0;
- (void)preloadWithRoomModel:(id)a0 callTrace:(id)a1 type:(long long)a2 player:(id)a3;
- (BOOL)preparePlayerWithRoomModel:(id)a0 callTrace:(id)a1;
- (void)preloadWithStreamData:(id)a0 sdkKey:(id)a1;
- (void)preloadWithStreamURL:(id)a0 sdkParams:(id)a1;
- (void)coldStreamCDNPreSchedulingWithRoomModel:(id)a0 resolutionKey:(id)a1;
- (void)pe_commonInit;
- (BOOL)isPreloading;

@end
