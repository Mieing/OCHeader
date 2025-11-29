@class NSString, MMTableViewInfo, WCAccountControlData, WCSheetView;

@interface WCAccountBaseViewController : MMUIViewController <MMTableViewInfoDelegate> {
    MMTableViewInfo *m_tableViewInfo;
    WCAccountControlData *m_data;
}

@property (retain, nonatomic) WCSheetView *sheetView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setupWithData:(id)a0;
- (void)refreshViewWithData:(id)a0;
- (BOOL)useCustomNavibar;
- (void)callViewDidLoad;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)useBlackStyleView;
- (BOOL)autoHandleKeyboardEvent;
- (id)mainContentView;
- (void)configMainContentView;
- (void)initView;
- (id)navigationBarBackgroundColor;
- (BOOL)useBlackStatusbar;
- (void)setTableHeaderView:(id)a0;
- (void)setTableFooterView:(id)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setNavigationLeftBarButtonStyle:(long long)a0 target:(id)a1 action:(SEL)a2;
- (void)setNavigationRightBarButtonMoreStyleWithtarget:(id)a0 action:(SEL)a1;
- (void)hideKeyBoard;
- (id)getHeaderViewInMainFrame:(id)a0;
- (id)getHeaderView:(id)a0;
- (id)getNewHeaderView:(id)a0;
- (id)makeHeaderViewInMainFrame:(id)a0;
- (id)makeHeaderView:(id)a0;
- (id)makeNewHeaderView:(id)a0;
- (id)getInputLineView;
- (id)getBothSideMarginInputLineView;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)useRedesignStyle;
- (BOOL)useIpadStyle;
- (BOOL)useGrayBackgroundColor;
- (BOOL)useSheetView;
- (BOOL)useTableView;
- (double)contentWidth;
- (double)textFiledLeftMargin;
- (void)viewDidTransitionToNewSize;
- (void)keyboardWillChangeFrame:(id)a0;
- (void)onKeyboardWillChangeHeight:(double)a0;
- (void)onKeyboardChangingHeight:(double)a0;
- (void).cxx_destruct;

@end
