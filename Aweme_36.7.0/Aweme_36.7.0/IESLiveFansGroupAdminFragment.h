@class UINavigationController, NSString, HTSLiveFansGroupGuideMessage, IESLiveFansGroupListViewController;
@protocol IESLiveIMService;

@interface IESLiveFansGroupAdminFragment : IESLiveRoomComponent <IESLiveFansGroupAction, HTSLiveMessageSubscriber, UINavigationControllerDelegate>

@property (retain, nonatomic) UINavigationController *fansGroupShowNavigationController;
@property (retain, nonatomic) IESLiveFansGroupListViewController *webFansGroupListVC;
@property (retain, nonatomic) id<IESLiveIMService> imService;
@property (nonatomic) struct CGSize { double width; double height; } fansGroupAdminViewSize;
@property (retain, nonatomic) HTSLiveFansGroupGuideMessage *fansGroupGuideMessage;
@property (nonatomic) BOOL enableFansGroupAdminIcon;
@property (copy, nonatomic) NSString *fansGroupURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentMount;
- (void)tansToFansGroupAdminVC:(id)a0;
- (void)hideFansGroupAdminView;
- (void)popupFansGroupAdminVC:(id)a0 backURL:(id)a1;
- (void)addFansGroupAdminToolBarItem;
- (void)showNewFansGroupView;
- (void)showFansGroupAdminView;
- (void)showCreateFansGroupGuideBubble:(id)a0;
- (void)showFansGroupAdminVC:(id)a0 backURL:(id)a1;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
