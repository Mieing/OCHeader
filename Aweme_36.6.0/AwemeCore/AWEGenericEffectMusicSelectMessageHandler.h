@protocol AWEStudioEditMusicFeaturePublicAPI;

@interface AWEGenericEffectMusicSelectMessageHandler : AWEGenericEffectMessageBaseHandler

@property (weak, nonatomic) id<AWEStudioEditMusicFeaturePublicAPI> musicFeatureAPI;

- (id)bizIdentifier;
- (BOOL)canHandle:(id)a0 arg3Info:(id)a1;
- (void)handleMessage:(id)a0 arg3Info:(id)a1 isGlobal:(id)a2;
- (void).cxx_destruct;

@end
