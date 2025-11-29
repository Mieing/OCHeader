@class NSArray, NSString, DUXContentSheet, UIView, AWEIMShareSendDataSource;
@protocol ACCQuickSaveService, AWEIMShareContactListProtocol, ACCQuickStoryShareServiceProtocol;

@interface ACCModernEditSharePanelControllerViewController : UIViewController <AWEIMShareContactListDelegate, AWEIMShareAdditionTextViewUIDelegate, DUXSheetDelegate>

@property (weak, nonatomic) id<ACCQuickStoryShareServiceProtocol> shareService;
@property (weak, nonatomic) id<ACCQuickSaveService> quickSaveService;
@property (retain, nonatomic) id<AWEIMShareContactListProtocol> contactContext;
@property (retain, nonatomic) AWEIMShareSendDataSource *imDataSource;
@property (retain, nonatomic) UIView *actionContentView;
@property (retain, nonatomic) UIView *contactsListView;
@property (retain, nonatomic) NSArray *actionItems;
@property (weak, nonatomic) DUXContentSheet *basicSheet;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (nonatomic) BOOL isBottomViewShowing;
@property (nonatomic) BOOL isAdditionalViewShowing;
@property (readonly, nonatomic) double panelHeight;
@property (readonly, nonatomic) double topViewHeight;
@property (readonly, nonatomic) double imListViewHeight;
@property (readonly, nonatomic) double actionContentHeight;
@property (readonly, nonatomic) double actionBtnHeight;
@property (readonly, nonatomic) double actionItemTopInset;
@property (readonly, nonatomic) double iphonexBottomOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (BOOL)sheetWillStayAfterClickMaskArea;
- (void)sheetWillDismiss:(id)a0;
- (void)dismissWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)shareContactList:(id)a0 hideContainerListWithCompletion:(id /* block */)a1 atScene:(unsigned long long)a2;
- (BOOL)shareContactList:(id)a0 didSelectWithShareModel:(id)a1 atIndex:(long long)a2 currentSelectState:(BOOL)a3;
- (id)createAdditionTextAndAppendToViewHierarchyWithShareContactList:(id)a0;
- (void)shareContactList:(id)a0 additionTextViewDismissed:(id)a1;
- (void)closeBtnClick;
- (void)textView:(id)a0 bottomViewDidShow:(BOOL)a1 keyboardHeight:(double)a2 additionTextViewNormalHeight:(double)a3 animateSheetHeight:(BOOL)a4;
- (void)setupUIConfig;
- (void)onClickSaveLocalItem;
- (void)onClickPublishItem;
- (void)setupShareContactContext;
- (void)trackItemClickWithScene:(id)a0;
- (void)updateAdditionTextViewShowStatus:(BOOL)a0;
- (id)initWithShareService:(id)a0 quickSaveService:(id)a1 dataSource:(id)a2 dismissHandler:(id /* block */)a3;
- (void)dismiss;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (void)show;
- (void)setupUI;

@end
