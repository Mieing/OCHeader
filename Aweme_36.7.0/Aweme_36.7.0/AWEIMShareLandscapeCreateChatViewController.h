@class UIView, AWEShareContext, NSArray, AWEIMShareListSelectUserController, AWEIMShareSendView, NSString, AWEIMShareCurrentGroupListViewController, AWEIMShareCreateChatNavTitleView, NSDictionary;
@protocol AWEIMShareAndForwardToChatProtocol;

@interface AWEIMShareLandscapeCreateChatViewController : AWEIMListBaseViewController <AWERouterViewControllerProtocol, AWEIMBaseListTableViewHeaderDelegate, AWEIMShareListSelectUserControllerDelegate, AWEIMShareCurrentGroupListViewControllerDelegate>

@property (retain, nonatomic) AWEIMShareListSelectUserController *selectUserController;
@property (retain, nonatomic) AWEIMShareCurrentGroupListViewController *currentGroupVC;
@property (copy, nonatomic) NSArray *initialItems;
@property (retain, nonatomic) AWEIMShareCreateChatNavTitleView *titleView;
@property (retain, nonatomic) AWEIMShareSendView *sendView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastRect;
@property (retain, nonatomic) id<AWEIMShareAndForwardToChatProtocol> shareImpl;
@property (retain, nonatomic) AWEShareContext *shareContext;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) NSDictionary *routerParam;
@property (retain, nonatomic) NSString *localTimeMs;
@property (copy, nonatomic) NSArray *firstScreenIDList;
@property (nonatomic) unsigned long long titleAlign;
@property (nonatomic) unsigned long long landscapeStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (id)currentAwemeModel;
- (void)clickCloseButton:(id)a0;
- (void)setShareContext:(id)a0 enterMethod:(id)a1;
- (void)updateMultiselectCount:(long long)a0;
- (void)shareCurrentGroupListViewController:(id)a0 didFinishedSelectedGroup:(id)a1;
- (BOOL)shareCurrentGroupListViewController:(id)a0 couldSelectGroup:(id)a1 withSelectedGroup:(id)a2;
- (void)shareListSelectUserController:(id)a0 didSentMessage:(id)a1;
- (void)shareListSelectUserController:(id)a0 didShowAlertVC:(id)a1;
- (BOOL)canTapCellAtIndexPath:(id)a0;
- (long long)currentFunctin;
- (void)trackEventAboutTargetTypeWithParamDict:(id)a0;
- (void)detectFirstScreenCellShow;
- (void)performOpenShareCompletionWithStatusCode:(unsigned long long)a0 needTransferBack:(BOOL)a1;
- (void)updateVCTitle;
- (void)clickShare:(id)a0;
- (void)prepareDataWithRecentContacts:(id)a0 friendContacts:(id)a1 allContacts:(id)a2 completeBlock:(id /* block */)a3;
- (void)updateMultiselectCount:(long long)a0 animtated:(BOOL)a1;
- (void)setupSearchView;
- (void)trackActivityDataIfNeededWithEvent:(id)a0 shareModel:(id)a1 extra:(id)a2;
- (void)clickGroupChatButton:(id)a0;
- (void)updateTableViewLayoutWithoutSearch:(BOOL)a0;
- (void)dismiss:(BOOL)a0 closeByUser:(BOOL)a1;
- (BOOL)isUserMessageShareCellWithDisplayCell:(id)a0;
- (void)trackCellShowWithCell:(id)a0 indexPath:(id)a1;
- (void)reloadIndexView;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)init;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)dealloc;
- (id)colorNamed:(id)a0;
- (long long)tableViewStyle;
- (void)setupNavigationBar;

@end
