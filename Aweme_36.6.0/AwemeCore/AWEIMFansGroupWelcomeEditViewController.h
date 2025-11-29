@class AWEIMFansGroupWelcomeViewModel, NSString, NSDictionary, AWEIMMessageConversation, UILabel, AWEIMFansGroupWelcomeCollectionView, AWEIMConversationGroupManagementInfo;

@interface AWEIMFansGroupWelcomeEditViewController : UIViewController <AWERouterViewControllerProtocol, AWEIMFansGroupWelcomeCollectionViewProtocol, AWEIMWelcomeEditFooterCollectionReusableViewProtocol, AWEIMViewControllerInHalfSceenProtocol>

@property (retain, nonatomic) AWEIMFansGroupWelcomeCollectionView *welcomeCollectionView;
@property (retain, nonatomic) NSDictionary *routerParam;
@property (retain, nonatomic) AWEIMConversationGroupManagementInfo *groupManagementInfo;
@property (nonatomic) BOOL processing;
@property (nonatomic) int defaultStatusValue;
@property (copy, nonatomic) NSString *defaultWelcomeMessage;
@property (copy, nonatomic) NSString *currentWelcomeMessage;
@property (nonatomic) BOOL isEditing;
@property (nonatomic) BOOL shownInHalfScreen;
@property (nonatomic) BOOL useNewStyle;
@property (retain, nonatomic) AWEIMFansGroupWelcomeViewModel *currentViewModel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *lineLabel;
@property (retain, nonatomic) UILabel *lineLabel1;
@property (retain, nonatomic) UILabel *confirmLabel;
@property (retain, nonatomic) UILabel *bottomLabel;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)transition_shouldStartInteractiveTranstionToVC:(id)a0;
- (void)updateUITheme;
- (void)themeDidChange:(id)a0;
- (void)backBtnClicked;
- (double)minViewHeightForHalfScreen;
- (BOOL)enableNewStyle;
- (void)didClickSubmitButton;
- (void)awe_welcomeEditCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)addKVOForCurrentVM;
- (int)getTypeWithUpdateValue:(int)a0;
- (void)__changeTitleLabelHidden:(BOOL)a0;
- (void)reloadDefaultData;
- (BOOL)enableUseWelcomeEdit;
- (void)showNotEnableUseToast;
- (void)addKeyboardKVO;
- (BOOL)enalbeNewStyle;
- (void)updateConfirmLabeluserInteractionEnabled;
- (double)heightOfCollectionView;
- (void)reloadDataWithType:(int)a0 welcomeMessages:(id)a1;
- (void)shouldHiddenFooterWithViewModel:(id)a0;
- (void)setWelcomeWithType:(int)a0 showStatus:(int)a1 welcomeMessage:(id)a2 completion:(id /* block */)a3;
- (void)onConfirmAction;
- (BOOL)enableHandleLeaveEvent;
- (void)presentEmptyAlertWithMessage:(id)a0 cancel:(id)a1 ok:(id)a2 cancelCompletion:(id /* block */)a3 okCompletion:(id /* block */)a4;
- (void)handleResponseDataWithError:(id)a0;
- (void)trackWelcomeEvent;
- (void)didSelectWelcomeSettingWithViewModel:(id)a0;
- (void)didChangeSubmitWelcomeText:(id)a0;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)a0;
- (void)fetchData;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;
- (void)keyboardWillChangeFrame:(id)a0;

@end
