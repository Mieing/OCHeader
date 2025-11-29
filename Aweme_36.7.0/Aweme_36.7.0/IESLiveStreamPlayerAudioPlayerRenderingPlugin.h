@class NSString;

@interface IESLiveStreamPlayerAudioPlayerRenderingPlugin : IESLiveStreamPlayerBasePlugin <IESLiveStreamPlayerAudioPlayerRenderingPluginProtocol>

@property (nonatomic) BOOL enableVideoRenderInAudioRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivatePlugin;

- (BOOL)isInAvoidVideoRenderingMode;
- (BOOL)liveEnableRenderVideoOptimize;
- (void)pe_bizHostDidInit;

@end
