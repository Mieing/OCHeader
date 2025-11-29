@class AWEIMMessageConversation, NSArray, NSString, UIView, AWEIMBaseListPrepareModel, UIButton;
@protocol IESIMLoadingViewProtocol;

@interface AWEIMAddGroupAdminViewController : AWEIMListBaseViewController <IESIMAddGroupAdminViewControllerProtocol>

@property (copy, nonatomic) NSArray *initialSelectedAdminIds;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIView<IESIMLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) AWEIMBaseListPrepareModel *prepareModel;
@property (retain, nonatomic) NSString *rightButtonTitleText;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (copy, nonatomic) id /* block */ addGroupAdminBlock;
@property (nonatomic) BOOL isFromNewGroupManagePage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)changeToMultiselect:(BOOL)a0;
- (id)conversationDataManager;
- (void)p_save;
- (void)p_dismiss;
- (unsigned long long)userPrivacyGetAliasScene;
- (void)updateMultiselectCount:(long long)a0;
- (BOOL)canTapCellAtIndexPath:(id)a0;
- (long long)currentFunctin;
- (BOOL)canSelectCellAtIndexPath:(id)a0;
- (void)p_trackSaveAdminCountDataWithSet:(id)a0;
- (id)curConversationID;
- (BOOL)disableSelectCellIsSelected;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)init;
- (void)fetchData;
- (void)viewDidLoad;

@end
