@class MMTableView, WCPayQrcodeUsagehalfPageCell, CgiApplyQrcodeResp, NSString, MMUILabel;
@protocol WCPayQrcodeUsageHalfPage;

@interface WCPayQrcodeUsageHalfPage : MMPageSheetBaseViewController <WCPayQrcodeUsagehalfPageCellDelegate, MMPageSheetBottomViewDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMTableView *usageTableView;
@property (retain, nonatomic) WCPayQrcodeUsagehalfPageCell *lastChooseCell;
@property (retain, nonatomic) CgiApplyQrcodeResp *resp;
@property (nonatomic) long long selectedRow;
@property (nonatomic) BOOL isKeyboardShowing;
@property (nonatomic) long long keyboardHeight;
@property (weak, nonatomic) id<WCPayQrcodeUsageHalfPage> delegate;
@property (retain, nonatomic) NSString *codeUsage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithResp:(id)a0 delegate:(id)a1;
- (void)viewDidLoad;
- (double)pageSheetContentWidth;
- (id)pageSheetDetailContentView;
- (void)pageSheetDidAppear;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (double)pageSheetContentHeight;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)onTapCell:(id)a0;
- (void)onKeyboradWillShow:(id)a0;
- (void)onKeyboradWillHide:(id)a0;
- (void)onKeyboradDidShow:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)updateTableViewOffset;
- (void)setConfirmButtonState:(BOOL)a0;
- (void)updateTextFieldContent:(id)a0;
- (void).cxx_destruct;

@end
