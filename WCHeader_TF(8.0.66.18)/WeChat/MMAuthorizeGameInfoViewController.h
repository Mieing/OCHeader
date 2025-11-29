@class UIView, NSString, MMAuthorizeScopeTopView, UIButton, NSMutableArray, GetUserGrantInfoBuffer, RichTextView, MMTableView, SetUserGrantInfoBuffer;
@protocol MMAuthorizeViewControllerDelegate;

@interface MMAuthorizeGameInfoViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, ILinkEventExt, MMAuthorizeGameInfoHalfScreenViewDelegate>

@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) MMAuthorizeScopeTopView *tableHeaderView;
@property (retain, nonatomic) UIView *tableFooterView;
@property (retain, nonatomic) UIButton *comfirmBtn;
@property (retain, nonatomic) UIButton *denyBtn;
@property (retain, nonatomic) UIView *footerViewSeperator;
@property (retain, nonatomic) RichTextView *richTextView;
@property (retain, nonatomic) GetUserGrantInfoBuffer *getUserGrantInfoBuffer;
@property (retain, nonatomic) NSMutableArray *arrViewModels;
@property (retain, nonatomic) NSMutableArray *arrShowingViewModels;
@property (weak, nonatomic) id<MMAuthorizeViewControllerDelegate> delegate;
@property (retain, nonatomic) SetUserGrantInfoBuffer *setUserGrantInfoBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithGetUserGrantInfoBuffer:(id)a0;
- (void)viewDidLoad;
- (void)initNavigationBar;
- (id)navigationBarBackgroundColor;
- (void)initSubViews;
- (void)initTableHeaderView;
- (void)layoutTableHeaderView;
- (void)initTableFooterView;
- (void)layoutTableFooterView;
- (void)initRichTextView;
- (BOOL)shouldInteractivePop;
- (void)onReturn;
- (void)onComfirmBtnClick;
- (void)onDenyBtnClick;
- (void)initData;
- (void)initViewModels;
- (void)updateShowingViewModels;
- (BOOL)shouldShowViewModel:(id)a0;
- (void)genSetUserGrantInfoBuffer;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onSelectHalfScreenCellWithViewModel:(id)a0;
- (void).cxx_destruct;

@end
