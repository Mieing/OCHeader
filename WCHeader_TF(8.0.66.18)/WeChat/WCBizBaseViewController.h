@class NSString, UILabel, MMTableViewInfo;
@protocol WCBizBaseViewControllerDelegate;

@interface WCBizBaseViewController : MMUIViewController <MMTableViewInfoDelegate, WCBaseInfoItemDelegate> {
    MMTableViewInfo *m_tableViewInfo;
    UILabel *m_powerByTenpay;
    id<WCBizBaseViewControllerDelegate> m_oBizBaseViewControllerDelegate;
}

@property (nonatomic) BOOL hasReportedShown;
@property (nonatomic) BOOL hasReportedDismiss;
@property (nonatomic) long long tableViewStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidBePushOrPresent:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)initData;
- (void)OnBack;
- (void)initNavigationBar;
- (void)callViewDidLoad;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(BOOL)a0;
- (void)stopLoading;
- (void)addPowerByTenpayTip;
- (void)viewDidLoad;
- (void)setWCBizAuthTitle:(id)a0 TextColor:(id)a1;
- (void)setWCBizAuthTitle:(id)a0;
- (void)setTitle:(id)a0 subTitle:(id)a1;
- (void)setNormalTitle:(id)a0;
- (void)dealloc;
- (void)suppressInherentTableView;
- (void)OnDataChange;
- (void)makeInfoCell:(id)a0 cellInfo:(id)a1;
- (void)clickInfoCell:(id)a0;
- (id)makeFooter:(id)a0;
- (id)getSectionFromGroup:(id)a0;
- (void)OnComfireEnsureAlert;
- (void)showEnsureAlert:(id)a0 Title:(id)a1;
- (void)onEnsureAlertConfirm;
- (void)footerTipAction:(id)a0;
- (void)setBizBaseViewControllerDelegate:(id)a0;
- (void).cxx_destruct;

@end
