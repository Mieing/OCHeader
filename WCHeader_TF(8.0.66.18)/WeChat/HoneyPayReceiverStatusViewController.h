@class NSString, WCPayNoticeItemView, UIView, WCPayAgreementView, QryHoneyUserDetailResp;
@protocol HoneyPayReceiverStatusViewControllerDelegate;

@interface HoneyPayReceiverStatusViewController : HoneyPayBaseViewController <ILinkEventExt>

@property (retain, nonatomic) QryHoneyUserDetailResp *detail;
@property (retain, nonatomic) UIView *introInfosView;
@property (retain, nonatomic) WCPayAgreementView *agreementView;
@property (retain, nonatomic) WCPayNoticeItemView *noticeItemView;
@property (weak, nonatomic) id<HoneyPayReceiverStatusViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (BOOL)useBlackStatusbar;
- (void)refreshViewWithData:(id)a0;
- (void)setupNavigationBar;
- (void)reloadTableView;
- (id)createdHeaderView;
- (id)inuseHeaderView;
- (id)expiredHeaderView;
- (id)unbindHeaderView;
- (id)statusViewHeader:(double)a0 icon:(id)a1 status:(id)a2 attention:(id)a3;
- (id)detailCellContentWithInfos:(id)a0 width:(double)a1;
- (id)agreementWording;
- (void)done;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
