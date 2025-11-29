@class NSString;

@interface AWEFeedTemplateJingXuanAnchorConfig : AWEFeedTemplateAnchorBaseConfig <AWEPlayInteractionNormalLynxOrH5PanelLifeCycleDelegateProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowAnchor:(id)a0;

- (void)anchorViewWillShowOnSuperview;
- (void)handlerTemplateAnchorViewClicked;
- (void)panelContainerWillClose:(id)a0;
- (void)panelContainerViewControllerViewDidLoad:(id)a0;
- (id)updateAnchorSchemaIfNeed:(id)a0;
- (BOOL)enableAnchorStayTimeTrackOptForJingXuan;

@end
