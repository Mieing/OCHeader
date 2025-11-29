@class KindaJSEvent, NSString, UISwitch, WCPayNoticeItemView, QryHoneyPayerDetailResp, UIButton;
@protocol HoneyPayPayerCardDetailViewControllerDelegate;

@interface HoneyPayPayerCardDetailViewController : HoneyPayBaseViewController <ILinkEventExt, WCPaySelectPayWayViewDelegate, JSEventHandler> {
    KindaJSEvent *_kindaJSEvent;
}

@property (retain, nonatomic) QryHoneyPayerDetailResp *detail;
@property (retain, nonatomic) UISwitch *modifyNotificationSwitch;
@property (retain, nonatomic) UIButton *doneButton;
@property (retain, nonatomic) WCPayNoticeItemView *noticeItemView;
@property (nonatomic) unsigned long long entrance;
@property (weak, nonatomic) id<HoneyPayPayerCardDetailViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)refreshViewWithData:(id)a0;
- (void)setupNavigationBar;
- (void)reloadTableView;
- (void)addDoneButton;
- (id)headerCell;
- (void)makeHeaderCell:(id)a0 cellInfo:(id)a1;
- (id)createdStatusCell;
- (void)makeCreatedStatusCell:(id)a0 cellInfo:(id)a1;
- (id)inuseStatusCell;
- (void)makeInuseStatusCell:(id)a0;
- (void)makeInuseRecords:(id)a0;
- (id)separatorCell;
- (void)makeSeparatorCell:(id)a0;
- (void)makeRecordCell:(id)a0 cellInfo:(id)a1;
- (id)moreRecordCell;
- (void)makeMoreRecordCell:(id)a0;
- (id)footerCell;
- (void)makeFooterCell:(id)a0;
- (id)noRecordCell;
- (void)makeNoRecordCell:(id)a0;
- (id)modifySeparatorCell;
- (void)makeModifySeparatorCell:(id)a0;
- (id)modifyCell;
- (void)makeModifyCell:(id)a0;
- (id)expiredCell;
- (void)makeExpiredStatusCell:(id)a0;
- (id)expiredDetailCell;
- (void)makeExpiredDetailCell:(id)a0;
- (id)canceledStatusCell;
- (void)makeCanceledStatusCell:(id)a0;
- (id)canceledDetailCell;
- (void)makeCanceledDetailCell:(id)a0;
- (id)detailCellContentWithInfos:(id)a0 cellWidth:(double)a1;
- (void)clickDoneButton;
- (void)onRightBarButtonClick;
- (void)didClickUnbind;
- (void)modifyNotification:(id)a0;
- (void)modifyPayWay;
- (void)clickRecordCell:(id)a0;
- (void)clickMoreRecordCell:(id)a0;
- (void)onEndEvent:(id)a0 withResult:(id)a1;
- (id)GetCurrentWebviewViewController;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)selectPayWayView:(id)a0 didSelectCard:(id)a1;
- (void).cxx_destruct;

@end
