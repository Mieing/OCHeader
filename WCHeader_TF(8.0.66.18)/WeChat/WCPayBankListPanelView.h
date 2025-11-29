@class NSArray, NSString, MMUIView, NSMutableDictionary, UIView, WCPayControlData;
@protocol WCPayBankListPanelViewDelegate;

@interface WCPayBankListPanelView : MMUIView <UITableViewDelegate, UITableViewDataSource, ILinkEventExt>

@property (weak, nonatomic) id<WCPayBankListPanelViewDelegate> delegate;
@property (retain, nonatomic) WCPayControlData *controlData;
@property (retain, nonatomic) NSArray *bankList;
@property (retain, nonatomic) NSString *curSelectCardSerial;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) double contentViewHeight;
@property (nonatomic) double contentCellHeight;
@property (retain, nonatomic) NSString *addNewCardCellTitle;
@property (retain, nonatomic) MMUIView *backgroundView;
@property (retain, nonatomic) MMUIView *contentView;
@property (retain, nonatomic) NSMutableDictionary *cellHeightCache;
@property (nonatomic) double totalCellHeight;
@property (retain, nonatomic) NSMutableDictionary *cellTitleHalfYCache;
@property (retain, nonatomic) UIView *m_titleArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initBankListPanelViewWithDelegate:(id)a0 controlData:(id)a1;
- (void)setBankListArray:(id)a0;
- (void)setSelectedCardSerial:(id)a0;
- (void)setPanelViewTitle:(id)a0;
- (void)setPanellViewDesc:(id)a0;
- (void)confirmBtnClick;
- (void)showInView:(id)a0;
- (void)dismiss;
- (void)dismissWithShouCallDelegate:(BOOL)a0;
- (void)handleTap;
- (void)cancelBtnPress;
- (void)calcTableViewContentHeight;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)paymentSelectRemoveConfirmButton;
- (double)calcCellHeightWithCardInfo:(id)a0 index:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)makeCardInfoCellContentViewWithCardInfo:(id)a0 cell:(id)a1 cellHeight:(double)a2 isFirstCell:(BOOL)a3 isLastCell:(BOOL)a4;
- (void)makeAddNewCardCell:(id)a0 cellHeight:(double)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)isBalanceCardInfo:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withView:(id)a2;
- (BOOL)isCellIndexLargeThanDataCount:(id)a0;
- (void).cxx_destruct;

@end
