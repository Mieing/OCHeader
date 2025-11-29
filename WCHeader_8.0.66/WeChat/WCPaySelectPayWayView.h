@class NSArray, NSString, MMUIView, UIView, MMTableViewInfo, WCPayControlData;
@protocol WCPaySelectPayWayViewDelegate;

@interface WCPaySelectPayWayView : UIView <ILinkEventExt>

@property (retain, nonatomic) MMUIView *backgroundView;
@property (retain, nonatomic) MMUIView *contentView;
@property (retain, nonatomic) MMTableViewInfo *tableViewInfo;
@property (retain, nonatomic) UIView *titleArea;
@property (weak, nonatomic) id<WCPaySelectPayWayViewDelegate> delegate;
@property (retain, nonatomic) WCPayControlData *data;
@property (retain, nonatomic) NSArray *infos;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL showAddNewCard;
@property (copy, nonatomic) NSString *selectedCardSerial;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCards:(id)a0 data:(id)a1 delegate:(id)a2;
- (void)show;
- (void)dismiss;
- (void)reloadTableView;
- (void)makeCardCell:(id)a0 cellInfo:(id)a1;
- (void)makeSelectNewCardCell:(id)a0;
- (void)clickCardCell:(id)a0;
- (void)selectAddNewCard;
- (void)handleTap;
- (void)cancelBtnPress;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)isCardForbid:(id)a0;
- (id)cardName:(id)a0;
- (void).cxx_destruct;

@end
