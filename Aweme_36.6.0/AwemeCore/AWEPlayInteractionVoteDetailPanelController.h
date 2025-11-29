@class NSString;

@interface AWEPlayInteractionVoteDetailPanelController : AWEPlayInteractionNewBaseController <AWEPlayInteractionVoteDetailPanelControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showVoteDetailPanel:(id)a0;
- (BOOL)isPanelShowed;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)reset;
- (void)viewDidLoad;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
