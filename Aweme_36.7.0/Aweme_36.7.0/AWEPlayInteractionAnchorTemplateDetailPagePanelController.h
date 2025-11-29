@class NSString, AWEFeedAnchorTemplateDetailPageManager;

@interface AWEPlayInteractionAnchorTemplateDetailPagePanelController : AWEPlayInteractionBaseController <AWEPlayInteractionAnchorTemplateDetailPagePanelControllerProtocol>

@property (retain, nonatomic) AWEFeedAnchorTemplateDetailPageManager *detailPageManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPanelShowed;
- (void)showTemplateDetailPage;
- (void)preloadLynxResourceIfNeeded;
- (id)detailPageVCBeingShow;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
