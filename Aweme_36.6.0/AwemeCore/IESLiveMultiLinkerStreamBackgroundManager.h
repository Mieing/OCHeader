@class IESLiveLinkmicUIConfig, UIImageView, IESLiveBgRenderMetalView, IESLiveInteractCutProvider, UIImage, NSString;

@interface IESLiveMultiLinkerStreamBackgroundManager : NSObject <HTSLiveStreamPlayerAction, IESLiveRevenueInteractInnerAction>

@property (retain, nonatomic) UIImageView *backgroundImage;
@property (retain, nonatomic) UIImageView *upBackgroundImage;
@property (retain, nonatomic) UIImageView *downBackgroundImage;
@property (retain, nonatomic) IESLiveLinkmicUIConfig *interactUIConfig;
@property (nonatomic) BOOL hasChangeBackgroundDuringPlaying;
@property (nonatomic) long long bgSetting;
@property (retain, nonatomic) IESLiveBgRenderMetalView *metalView;
@property (retain, nonatomic) IESLiveInteractCutProvider *cutProvider;
@property (retain, nonatomic) UIImage *backgroundImageNew;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)bindAction;
- (id)playModel;
- (void)didLayoutModelChanged;
- (void)pveHandleBattleBg:(id)a0 topImage:(id)a1 bottomImage:(id)a2;
- (void)onInteractionEnd:(unsigned long long)a0;
- (void)didRevenueInteractPlayStart:(BOOL)a0;
- (void)didRevenueInteractPlayResult;
- (void)didRevenueInteractPlayEnd;
- (void)playerDidEndplayInSmallWindow;
- (void)setCameraCornerHidden:(BOOL)a0;
- (void)updateBackgroundImageWithConfig:(id)a0;
- (void)loadDefaultStreamBackground;
- (void)updateAudienceBackgroundFrame;
- (void)updateNewBackgroundWithImage:(id)a0;
- (void)unloadBackgroundNew;
- (void)updateBackgroundImage:(id)a0 topImage:(id)a1 bottomImage:(id)a2;
- (void)updateBackgroundImageDuringPlaying;
- (id)anchorBg;
- (void)updateFullBackgroundImage:(id /* block */)a0;
- (id)audienceTopBg;
- (id)audienceBottomBg;
- (void)updateTopBackgroundImage:(id /* block */)a0 bottomImageBlock:(id /* block */)a1;
- (void)loadBackgroundNewWithURLs:(id)a0;
- (void)loadBackgroundNew;
- (void).cxx_destruct;
- (void)clear;
- (id)provider;
- (void)dealloc;

@end
