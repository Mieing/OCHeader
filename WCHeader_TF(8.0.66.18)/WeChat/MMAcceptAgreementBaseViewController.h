@class UIColor, NSString, MMUIActivityIndicatorView, MMAcceptAgreementCommonHeadView, MMTableViewInfo, MMTableView;

@interface MMAcceptAgreementBaseViewController : MMUIViewController <MMTableViewInfoDelegate> {
    MMUIActivityIndicatorView *m_buttonLoadingView;
}

@property (retain, nonatomic) MMTableViewInfo *m_tableViewInfo;
@property (retain, nonatomic) MMTableView *m_tableView;
@property (retain, nonatomic) MMAcceptAgreementCommonHeadView *m_commonHeadView;
@property (retain, nonatomic) UIColor *m_navigationBarColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initTableView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidTransitionToNewSize;
- (void)reloadTableData;
- (id)genActionButton;
- (id)genWeakActionButton;
- (void)buttonStartLoading:(id)a0;
- (void)buttonStopLoading:(id)a0 buttonTitle:(id)a1;
- (void)makeWhiteCell:(id)a0 CellInfo:(id)a1;
- (void)reloadFootViewWithTableContentHeight:(double)a0 operateButton:(id)a1;
- (id)navigationBarBackgroundColor;
- (void).cxx_destruct;

@end
