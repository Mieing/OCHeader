@class AWEShareContext, NSArray, AWEIMShareMutiselectUserListViewController, AWEIMShareSendView, NSString, UIViewController;
@protocol AWESharePanel, AWEIMShareAndForwardToChatProtocol;

@interface AWEIMShareLandscapePanelExtension : NSObject <AWEIMShareMutiselectUserListViewControllerDelegate, AWESharePanelAdapterExtension>

@property (retain, nonatomic) AWEShareContext *context;
@property (weak, nonatomic) UIViewController<AWESharePanel> *sharePanel;
@property (copy, nonatomic) NSArray *shareModels;
@property (retain, nonatomic) AWEIMShareMutiselectUserListViewController *userListVC;
@property (copy, nonatomic) NSArray *recentSharedShareModels;
@property (copy, nonatomic) NSArray *recentSharedInfoModels;
@property (retain, nonatomic) AWEIMShareSendView *sendView;
@property (retain, nonatomic) id<AWEIMShareAndForwardToChatProtocol> shareImpl;
@property (nonatomic, getter=isAuthorSharingNonpublicAweme) BOOL authorSharingNonpublicAweme;
@property (nonatomic, getter=isBackPackAdapter) BOOL backPackAdapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAFDServiceDOUYINInterestSocialAdapterClass;
+ (id)extensionWithContext:(id)a0;

- (id)aAFDServiceDOUYINInterestSocialAdapter;
- (void)startFetchingTranspondModels;
- (id)p_insertRecentSharedIfNeedForShareModels:(id)a0;
- (void)showTranspondWithModels:(id)a0 hasMore:(BOOL)a1;
- (void)p_reloadRecentSharedCellIfNeed;
- (void)p_tryTellAdapterWillTransform:(BOOL)a0;
- (void)p_shareToUserWithShareModel:(id)a0 andCompletion:(id /* block */)a1;
- (void)updatePannelUI;
- (id /* block */)p_tryTellAdapterMoreCellDidTap;
- (void)transferToShareListWithItems:(id)a0;
- (id /* block */)p_tryGetWillDismissHandler;
- (void)p_didTappedRecentSharedCellWithRecentSharedList:(id)a0 willUpdateDatasourceBlock:(id /* block */)a1 didUpdateDatasourceBlock:(id /* block */)a2;
- (void)p_shareToUser;
- (void)p_updateDataSourceWithShareList:(id)a0;
- (void)shareToUser:(id)a0;
- (void)mutiselectUserListVC:(id)a0 selectShareModel:(id)a1;
- (void)mutiselectUserListVC:(id)a0 unselectShareModel:(id)a1;
- (void)mutiselectUserListVCSelectMore:(id)a0;
- (void)mutiselectUserListVC:(id)a0 didTappedRecentSharedCell:(id)a1;
- (void)mutiselectUserListVCTapAvatarDirectSendToUser:(id)a0 withShareModel:(id)a1 andCompletion:(id /* block */)a2;
- (void)mutiselectUserListVCDataSourceDeleteModel:(id)a0;
- (void)mutiselectUserListVCUpdateRecentShareModels:(id)a0;
- (void)sharePanelWillAppear:(id)a0;
- (void)sharePanelAdapterWillAppear:(id)a0;
- (id)titleAttributes;
- (void).cxx_destruct;

@end
