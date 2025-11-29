@class NSString;

@interface IESLocalLifeUIHostService : HTSService <IESLocalLifeUIHostService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iesll_convertIESLLConfigToAWEConfig:(id)a0;
+ (id)showLoadingOnView:(id)a0;
+ (id)actionWithContentView:(id)a0 withActionSize:(struct CGSize { double x0; double x1; })a1 withActionPadding:(double)a2;
+ (double)defaultDialogInnerWidthOnView:(id)a0;
+ (id)showLoadingAndDisableUserInteractionOnView:(id)a0;
+ (id)toastService;
+ (id)createPlatformLoadingView;
+ (id)popoverService;
+ (id)navigationBarService;
+ (id)alertService;
+ (id)basicSheetService;
+ (id)infoPanelService;
+ (id)createLoadingParticleView;
+ (id)createLoadingParticleViewWithStyle:(long long)a0;
+ (id)bottomNotificationService;
+ (unsigned long long)iesllui_viewControllerStateWithVC:(id)a0;
+ (void)setIesllui_viewControllerState:(unsigned long long)a0 vc:(id)a1;
+ (void)parallelUnlockAfterDelay:(double)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })iesll_characterRectAtIndex:(unsigned long long)a0 builder:(id)a1;
+ (id)iesll_awe_imageForButtonPresetClose;
+ (id)iesll_awe_imageForButtonPresetBack;
+ (id)iesll_awe_imageForButtonPresetCollected;
+ (void)iesll_Grid_updateCurrentBreakPointWithView:(id)a0;
+ (id)loadingToastWithLoadingStyle:(unsigned long long)a0 text:(id)a1;
+ (BOOL)iesll_isPadDevice;
+ (BOOL)iesll_isDeviceVertical;
+ (void)iesll_dismissFromSplitViewStatusIfNeedWithGDVC:(id)a0;
+ (BOOL)iesll_judgeNeedToSplitViewInSplitSceneWithGDVC:(id)a0;
+ (BOOL)iesll_isPadSplittingWithGDVC:(id)a0;
+ (void)iesll_dismissForPadWithPOIVC:(id)a0;
+ (void)iesll_addPadSplitStatusBinding:(id)a0;
+ (void)iesll_removePadSplitStatusBinding:(id)a0;

- (BOOL)galleryWithParams:(id)a0;

@end
