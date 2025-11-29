@class NSMutableDictionary, UIImageView, NSString, UIView;
@protocol IESLiveInteractUserModel, IESLiveInteractionSingleViewOptimizer;

@interface IESLiveInteractVideoEffectComponent : IESLiveInteractComponentBase <IESLiveInteractVideoEffectRouter, IESLiveSocialInteractAction, IESLiveInteractiveLocalLayout, IESLiveInteractionSingleViewOptimizationDelegate, IESLiveSEIListener>

@property (retain, nonatomic) NSMutableDictionary *lastActiveMap;
@property (retain, nonatomic) id<IESLiveInteractUserModel> currentMasterLayerUser;
@property (weak, nonatomic) id<IESLiveInteractionSingleViewOptimizer> singleViewOptimizer;
@property (nonatomic) int singleViewMode;
@property (nonatomic) BOOL shouldUpdateRFLayout;
@property (nonatomic) BOOL enableMicseatMixStream;
@property (retain, nonatomic) UIImageView *emptySeatImage;
@property (retain, nonatomic) NSMutableDictionary *audioMicseatImageMap;
@property (retain, nonatomic) NSString *curScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *sessionViewContainer;
@property (retain, nonatomic) UIView *optionViewContainer;

- (void)currentLayoutDidChangedFrom:(id)a0 to:(id)a1;
- (void)didUpdatedGuestListWithActiveList:(id)a0;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)a0;
- (void)updateRenderFilterLayout;
- (void)destoryRenderFilter;
- (void)onNewSessionCreated:(id)a0 local:(BOOL)a1;
- (BOOL)removeEffectComposerNodes:(id)a0;
- (BOOL)sendGiftEffectMessageWithParam2:(long long)a0 param3:(id)a1;
- (id)renderInfoByRectRatio:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 renderKey:(id)a1;
- (void)layoutHostSession:(id)a0;
- (void)updateLayoutOfSessionViews:(id)a0 withUserService:(id)a1;
- (void)updateRenderLayout:(id)a0;
- (void)singleViewOptimizationDidEnableWithConfig:(id)a0;
- (void)singleViewOptimizationDidDisableWithConfig:(id)a0;
- (void)componentBindContext;
- (BOOL)setRenderFilterEnable:(BOOL)a0 singleInputMode:(long long)a1 scene:(id)a2;
- (BOOL)setMicseatMixStreamEnable:(BOOL)a0 emptySeatUrl:(id)a1 source:(id)a2;
- (void)refreshMicseatMixStream:(BOOL)a0;
- (BOOL)isMicseatMixStreamEnable;
- (BOOL)appendEffectComposerNodes:(id)a0 withTag:(id)a1;
- (void)refreshGuestCameraLayer;
- (void)updateCurrentLayoutRenderInfo;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ratioRectByFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 parentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (int)getCurrentMasterLayerIdForGuest:(id)a0;
- (void)refreshRemoteLayer;
- (void)enableGuestClientMixStream:(BOOL)a0;
- (id)combineLargeImageView:(id)a0 withSmallImageView:(id)a1;
- (void).cxx_destruct;

@end
