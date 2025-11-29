@class NSString, AWEShareContext;

@interface AWEShareGroupService : AWEShareCommonImpl <AWEShareGroup>

@property (weak, nonatomic) AWEShareContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)groupQRCodePanelContextWithImage:(id)a0;
- (id)showGroupQRCodePanelWithContext:(id)a0 topViewProvider:(id /* block */)a1 onViewController:(id)a2;
- (id)sheetViewForSharePanel:(id)a0;
- (void)groupQRCodeImageForGroup:(id)a0 forceUpdate:(BOOL)a1 completion:(id /* block */)a2;
- (void)showPanelWithGroup:(id)a0 onViewController:(id)a1;
- (void)showQRCodeViewControllerWithGroup:(id)a0 platformType:(long long)a1 settingShareMode:(long long)a2;
- (id)p_contextWithGroup:(id)a0;
- (id)p_shareGroupStageWithGroup:(id)a0;
- (void)addCustomHandlerWithPanelConfiguration:(id)a0 withGroup:(id)a1;
- (id)unexpectedShareTypesWithContext:(id)a0 group:(id)a1;
- (void)trackDismissEvent:(id)a0;
- (void)p_trackShareActionWithShareType:(id)a0 group:(id)a1;
- (void)trackShareFailWithShareType:(id)a0;
- (id)p_groupCommandChannelWithClickHandler:(id /* block */)a0;
- (id)qrCodeShareGuideViewWithStyle:(unsigned long long)a0 customImage:(id)a1 forSaveImage:(BOOL)a2;
- (void).cxx_destruct;

@end
