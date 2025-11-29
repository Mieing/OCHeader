@class CgiBindQueryRecord, NSArray, UIButton, NSString, UIView, MMUIViewController, MMTableView;
@protocol WCPayLQTSelectCardItemDelegate;

@interface WCPayLQTSelectCardItem : WCBaseInfoItem <UITableViewDelegate, UITableViewDataSource> {
    MMUIViewController *currentViewController;
    id<WCPayLQTSelectCardItemDelegate> delegate;
}

@property (retain, nonatomic) NSArray *displayCardArray;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMTableView *cardsTableView;
@property (retain, nonatomic) CgiBindQueryRecord *selectedRecord;
@property (retain, nonatomic) CgiBindQueryRecord *resultRecord;
@property (retain) UIButton *confirmButton;
@property (retain, nonatomic) UIView *m_titleArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setItemDelegate:(id)a0;
- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateView;
- (id)getValue;
- (void)setCurrentCardBindSerial:(id)a0;
- (void)setDisplayCardDataSource:(id)a0;
- (void)onTapConfirm;
- (BOOL)paymentSelectRemoveConfirmButton;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)makeCardInfoCellContentViewWithCardInfo:(id)a0 cell:(id)a1;
- (void)makeAddNewCardCell:(id)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)cancelBtnPress;
- (void)hide;
- (void)handleTap;
- (void)becomeFirstResponder;
- (void)dismiss;
- (void)setCurrentViewController:(id)a0;
- (void).cxx_destruct;

@end
