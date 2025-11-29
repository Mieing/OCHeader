@class NSString, IESLiveDynamicGiftStore;

@interface IESLiveDynamicGiftFragment : IESLiveRoomComponent <IESLiveDynamicGiftRouter>

@property (retain, nonatomic) IESLiveDynamicGiftStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentUnmount;
- (void)startEffectWithRenderOnSingleView:(BOOL)a0 masterLayerId:(int)a1 scene:(id)a2 singleInputMode:(long long)a3 completion:(id /* block */)a4;
- (void)stopEffectWithScene:(id)a0 force:(BOOL)a1 singleInputMode:(long long)a2 completion:(id /* block */)a3;
- (BOOL)appendEffectComposerNodes:(id)a0 withTag:(id)a1 scene:(id)a2;
- (BOOL)removeEffectComposerNodes:(id)a0;
- (BOOL)sendGiftEffectMessageWithParam2:(long long)a0 param3:(id)a1;
- (BOOL)sendGiftEffectMessageWithParam1:(long long)a0 param2:(long long)a1 param3:(id)a2;
- (void)startPlayingDynamicGiftWithGiftID:(id)a0;
- (void)startPlayingDynamicGiftWithGiftAnimationNode:(id)a0;
- (void)forceHideWebViewPanel;
- (void)stopPlayingDynamicGift;
- (id)dynamicGiftPlayer;
- (id)currentDynamicGiftId;
- (void)trackDynamicGiftOnEndingWithComboCount:(id)a0;
- (void)recordCaptureAssemblyGiftInfo:(id)a0;
- (void).cxx_destruct;

@end
