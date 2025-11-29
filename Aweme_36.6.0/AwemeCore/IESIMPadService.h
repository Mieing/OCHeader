@class NSString;

@interface IESIMPadService : HTSService <IESIMPadService, AWEPadUIAdaptionViewTransitionObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadBizUIAdapterClass;

- (void)awe_viewController:(id)a0 willTransitionToSize:(struct CGSize { double x0; double x1; })a1 transitionCoordinator:(id)a2;
- (id)aAWEPadModuleAdapter;
- (BOOL)enablePanelUIAdapted;
- (BOOL)isDeviceVertical;
- (BOOL)is_PAD_UI_ENABLED;
- (BOOL)iPadAdapterEnabled;
- (BOOL)awe_shouldAutorotate:(id)a0;
- (unsigned long long)interfaceOrientationMaskFrom:(id)a0;
- (double)padPanelCommonWidth;
- (double)padPanelCommonHeight;
- (double)padPanelTopOffset;
- (double)padPanelRightOffset;
- (double)padPanelCornerRadius;
- (double)padPanelFuntionalWidth;
- (double)padPanelMaxHeight;
- (void)appendPadCommTrackParmas:(id)a0;
- (void)panelViewMasAdapt:(id)a0 superView:(id)a1 height:(double)a2;
- (BOOL)showPanelAnimated:(id)a0 preAction:(id /* block */)a1 addition:(id /* block */)a2 completion:(id /* block */)a3;
- (BOOL)dismissPanelAnimated:(id)a0 preAction:(id /* block */)a1 addition:(id /* block */)a2 completion:(id /* block */)a3;
- (void)registerPadRotateWithVC:(id)a0;
- (void)unRegisterPadRotateWithVC:(id)a0;
- (id)aAWEPadBizUIAdapter;
- (BOOL)performBlock:(id /* block */)a0;
- (BOOL)isIPad;

@end
