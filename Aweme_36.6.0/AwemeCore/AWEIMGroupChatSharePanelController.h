@class AWEIMMessageConversation, NSString, UICollectionView, AWEIMGroupChatSharePanelControllerContext, UIViewController;
@protocol IESIMGroupChatSharePanelDataSourceProtocol, AWEIMTranspondListViewControllerInterface, IESIMCustomModalTransitionContext;

@interface AWEIMGroupChatSharePanelController : UIViewController <AWEIMTranspondListViewControllerDelegate, IESIMCustomModalTransitionVCProtocol, AWEIMGroupChatSharePanelConfigItemCellDelegate, AWEIMInAppPushProtocol, UICollectionViewDelegate, AWEIMGroupChatSharePanelController>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) AWEIMMessageConversation *conversation;
@property (readonly, nonatomic) AWEIMGroupChatSharePanelControllerContext *context;
@property (readonly, nonatomic) UIViewController<AWEIMTranspondListViewControllerInterface> *transpondViewController;
@property (readonly, nonatomic) UICollectionView *configCollectionView;
@property (readonly, nonatomic) id<IESIMGroupChatSharePanelDataSourceProtocol> dataSource;
@property (weak, nonatomic) id<IESIMCustomModalTransitionContext> transitionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShowInnerPush;
- (BOOL)enablePullDismissGestureForPresentation;
- (id)pullIndicatorViewBackgroundColor;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)trackClickSendShareText;
- (id)attachedContext;
- (id)attachedConversation;
- (id)attachedDataSource;
- (void)trackShowSendShareText;
- (void)transpondListView:(id)a0 didSelectedShareModel:(id)a1 andCompletion:(id /* block */)a2;
- (void)transpondListView:(id)a0 didSelectedShareModel:(id)a1 hasMore:(BOOL)a2;
- (void)transpondListViewShareFinished:(id)a0;
- (void)transpondListViewDataSourceDeleteModel:(id)a0;
- (void)transpondListViewRequestDismissal:(id)a0 completion:(id /* block */)a1;
- (void)transpondListViewDismiss:(id)a0;
- (void)transpondListView:(id)a0 didSelectCell:(id)a1 shareModel:(id)a2;
- (void)cellItem:(id)a0 switchStatusOn:(BOOL)a1 completion:(id /* block */)a2;
- (void)__trackGroupInvitePanelClickWithConvID:(id)a0 itemType:(unsigned long long)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewDidLoad;
- (void)showOnViewController:(id)a0;

@end
