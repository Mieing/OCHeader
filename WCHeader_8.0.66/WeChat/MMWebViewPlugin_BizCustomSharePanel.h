@class NSString, NSMutableArray, BrandCustomSharePanelViewController;

@interface MMWebViewPlugin_BizCustomSharePanel : MMWebViewPluginBase <BrandCustomSharePanelViewControllerDelegate>

@property (nonatomic) BOOL customPanelEnable;
@property (retain, nonatomic) NSMutableArray *actionGroups;
@property (weak, nonatomic) BrandCustomSharePanelViewController *currentPanel;
@property (nonatomic) unsigned long long currentShareScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updatePanelInfo:(id)a0;
- (id)parseActionGroupFromInfo:(id)a0;
- (id)parseActionFromInfo:(id)a0;
- (void)showPanel:(unsigned long long)a0;
- (void)hidePanel;
- (id)generatePanelActionGroups;
- (void)panelController:(id)a0 didSelectAction:(id)a1;
- (void)panelController:(id)a0 didExposedAction:(id)a1;
- (void)panelControllerDidClose:(id)a0 isCancelled:(BOOL)a1;
- (id)clientActionForID:(id)a0;
- (id)sendAppMessageAction;
- (id)shareTimelineAction;
- (id)addFloatWindowAction;
- (id)toggleStarAction;
- (id)addFavAction;
- (id)webSearchAction;
- (id)openOnPCAction;
- (id)openInWeReadAction;
- (id)openInBrowserAction;
- (id)sendByMailAction;
- (id)openInWeAppAction;
- (id)listenArticleAction;
- (id)listenLaterAction;
- (id)saveAsImageAction;
- (id)copyLinkAction;
- (id)refreshAction;
- (id)searchInPageAction;
- (id)adjustFontAction;
- (id)shareQQAction;
- (id)shareQZoneAction;
- (id)complainAction;
- (id)translateAction;
- (void).cxx_destruct;

@end
