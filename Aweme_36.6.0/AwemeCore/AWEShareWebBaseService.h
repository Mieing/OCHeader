@class NSString;

@interface AWEShareWebBaseService : AWEShareCommonImpl <AWEShareWeb>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShareWebViewWithPreviousPage:(id)a0;
- (id)shareWebWithModel:(id)a0 shareType:(id)a1;
- (void)showPanelWithWebModel:(id)a0 configurationHandler:(id /* block */)a1 onViewController:(id)a2;
- (id)showNewPanelWithWebModel:(id)a0 configurationHandler:(id /* block */)a1 onViewController:(id)a2;
- (void)configWebTokenWithContext:(id)a0;
- (void)showPanelWithWebView:(id)a0 model:(id)a1 onViewController:(id)a2;

@end
