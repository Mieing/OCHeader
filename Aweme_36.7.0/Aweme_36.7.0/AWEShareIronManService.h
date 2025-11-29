@class NSString;

@interface AWEShareIronManService : AWEShareCommonImpl <AWEShareIronMan>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showQRCodePanelWithIronManUser:(id)a0;
- (void)showQRCodePanelWithIronManUser:(id)a0 bdpContext:(id)a1;
- (id)showPanelWithIronMan:(id)a0 configurationHandler:(id /* block */)a1 isLandscape:(BOOL)a2 onViewController:(id)a3;
- (id)showPanelWithIronMan:(id)a0 msgType:(id)a1 msgContent:(id)a2 configurationHandler:(id /* block */)a3 isLandscape:(BOOL)a4 onViewController:(id)a5;
- (id)showPanelWithIronMan:(id)a0 msgType:(id)a1 msgContent:(id)a2 contextHandler:(id /* block */)a3 configurationHandler:(id /* block */)a4 isLandscape:(BOOL)a5 onViewController:(id)a6;
- (id)showPanelWithIronMan:(id)a0 image:(id)a1 syncedExt:(id)a2 contextHandler:(id /* block */)a3 configurationHandler:(id /* block */)a4 isLandscape:(BOOL)a5 onViewController:(id)a6;
- (void)shareIronManImage:(id)a0 isLandscape:(BOOL)a1 anchorExt:(id)a2 callback:(id /* block */)a3;
- (void)addCustomHandlerWithPanelConfiguration:(id)a0;
- (id)contextWithIronMan:(id)a0 msgType:(id)a1 msgContent:(id)a2;
- (id)prepareShareIronModelStage;
- (id)unexpectedShareTypesWithIronMan:(id)a0 shareContext:(id)a1;
- (void)configShareChannelWithIronMan:(id)a0 shareContext:(id)a1;
- (void)addIMExtraForContext:(id)a0 withIronMan:(id)a1;
- (void)configShareChannelWithIronMan:(id)a0 shareContext:(id)a1 invalidActionTypes:(id)a2;

@end
