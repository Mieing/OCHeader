@class BrandProfileTopicView, NSArray, NSString, BrandProfileItemBaseViewModel, BrandProfileTopicViewModel;
@protocol BrandProfileMsgTabViewControllerDelegate;

@interface BrandProfileMsgTabViewController : BrandProfileBaseTabViewController <BrandProfileTopicViewDelegate, MMMenuControllerExt, WCActionSheetDelegate, IBizIamServiceExt>

@property (retain, nonatomic) BrandProfileTopicView *topicView;
@property (retain, nonatomic) BrandProfileTopicViewModel *topicViewModel;
@property (nonatomic) BOOL fetchingOutbox;
@property (retain, nonatomic) BrandProfileItemBaseViewModel *menuTargetViewModel;
@property (retain, nonatomic) BrandProfileItemBaseViewModel *deletingViewModel;
@property (copy, nonatomic) NSArray *outboxMessages;
@property (weak, nonatomic) id<BrandProfileMsgTabViewControllerDelegate> msgTabDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (unsigned long long)tabType;
- (int)cgiReqActionType;
- (id)cgiRespMessageList:(id)a0;
- (int)cgiRespFuncFlag;
- (id)tabTitle;
- (id)brandProfileCeilingTableView;
- (void)configTableView;
- (void)reloadTopicViewWithInfoList:(id)a0;
- (void)onTopicButtonClicked:(id)a0;
- (void)onUnfoldButtonClicked;
- (id)parseMessagesData:(id)a0;
- (void)loadOutboxMessageCache;
- (id)outboxMessageList;
- (BOOL)shouldOverrideExistSectionData:(id)a0;
- (void)onFetchOutboxMessagesComplete:(id)a0;
- (void)onLongPressItemViewModel:(id)a0;
- (void)onMenuControllerDidHide;
- (void)onMenuControllerDidShowFailed;
- (void)longPressEditItem;
- (void)longPressDeleteItem;
- (void)longPressMoreItem;
- (void)actionSheetViewLoaded:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)confirmDeleteViewModel:(id)a0;
- (void)onDeleteViewModel:(id)a0 success:(BOOL)a1;
- (void)onDeleteBizArticle:(id)a0;
- (void)resumeEditingViewModel:(id)a0;
- (void).cxx_destruct;

@end
