@class UIView, MMTableViewInfo, NSArray, WCPayControlData, NSString, MMUIView, NSMutableArray, WCPayBindCardInfo;
@protocol WCPayBalanceSelectCardViewDelegate;

@interface WCPayBalanceSelectCardView : UIView <ILinkEventExt>

@property (retain, nonatomic) WCPayControlData *data;
@property (retain, nonatomic) WCPayBindCardInfo *selectedCard;
@property (retain, nonatomic) NSMutableArray *availableCards;
@property (retain, nonatomic) NSArray *serialArray;
@property (retain, nonatomic) MMUIView *backgroundView;
@property (retain, nonatomic) MMUIView *contentView;
@property (retain, nonatomic) MMTableViewInfo *tableViewInfo;
@property (retain, nonatomic) UIView *m_titleArea;
@property (weak, nonatomic) id<WCPayBalanceSelectCardViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0 selectedCard:(id)a1 delegate:(id)a2;
- (id)initWithData:(id)a0 selectedCard:(id)a1 serialArray:(id)a2 delegate:(id)a3;
- (void)show;
- (void)dismiss;
- (BOOL)paymentSelectRemoveConfirmButton;
- (void)reloadTableView;
- (double)calcTitleHalfHeightAndmakeCardCell:(id)a0 cellInfo:(id)a1;
- (void)makeSelectNewCardCell:(id)a0;
- (void)clickCardCell:(id)a0;
- (void)onClickConfirm;
- (void)selectVerifyNewCard;
- (void)handleTap;
- (void)cancelBtnPress;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)isCardForbid:(id)a0;
- (id)getAvailableCards:(id)a0;
- (double)calculateTableViewHeightWithMarginTop:(double)a0 marginBottom:(double)a1;
- (void).cxx_destruct;

@end
