@class NSString;

@interface IESLiveStreamPlayerDropFrameRatePlugin : IESLiveStreamPlayerBasePlugin <IESLiveStreamPlayerDropFrameRatePluginProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivatePlugin;

- (void)initPlayerDropFrameConfigs;
- (void)updatePlayerDropFrameRate:(long long)a0 callTrace:(id)a1;
- (void)updatePlayerDropFrameMinFps:(long long)a0 callTrace:(id)a1;
- (void)pe_commonInit;
- (void)pe_closeWithCallTrace:(id)a0;

@end
