@class WCPayBindCardInfo, NSString, NSArray, MMUIView, NSMutableDictionary, UIView, WCPayControlData;
@protocol WCPayOfflinePaySelectPayCardViewDelegate;

@interface WCPayOfflinePaySelectPayCardView : MMUIView <UITableViewDelegate, UITableViewDataSource, ILinkEventExt>

@property (weak, nonatomic) id<WCPayOfflinePaySelectPayCardViewDelegate> delegate;
@property (nonatomic) long long fromScene;
@property (retain, nonatomic) WCPayControlData *controlData;
@property (retain, nonatomic) NSString *curSelectCardSerial;
@property (retain, nonatomic) MMUIView *backgroundView;
@property (retain, nonatomic) MMUIView *contentView;
@property (retain, nonatomic) NSArray *displayCardArray;
@property (retain, nonatomic) WCPayBindCardInfo *selectedCardInfo;
@property (retain, nonatomic) NSMutableDictionary *cellHeightCache;
@property (nonatomic) double totalCellHeight;
@property (retain, nonatomic) NSMutableDictionary *cellTitleHalfYCache;
@property (retain, nonatomic) UIView *m_titleArea;
@property (nonatomic) BOOL bHasPostScreenChangeAccessibilityNotification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initSelectPayCardViewWithControlData:(id)a0 delegate:(id)a1 fromScene:(long long)a2;
- (void)setCurSelectCardBindSerial:(id)a0;
- (void)setupDisplayCardDataSource;
- (BOOL)paymentSelectRemoveConfirmButton;
- (void)confirmBtnClick;
- (void)showInView:(id)a0;
- (void)dismiss;
- (void)dismissWithShouCallDelegate:(BOOL)a0;
- (void)handleTap;
- (void)cancelBtnPress;
- (void)calcTableViewContentHeight;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)makeCardInfoCellContentViewWithCardInfo:(id)a0 cell:(id)a1 cellHeight:(double)a2 isFirstCell:(BOOL)a3 isLastCell:(BOOL)a4;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)calcCellHeightWithCardInfo:(id)a0 index:(long long)a1;
- (id)getBankLogoUrlWithBankType:(id)a0;
- (BOOL)isBalanceCardInfo:(id)a0;
- (BOOL)isLQTCardinfo:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withView:(id)a2;
- (id)yhtBankDescContent:(id)a0;
- (id)minimchBankDescContent:(id)a0;
- (void).cxx_destruct;

@end
