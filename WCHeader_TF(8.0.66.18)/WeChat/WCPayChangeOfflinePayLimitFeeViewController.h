@class UIButton, WCBaseTextFieldItem, UILabel;
@protocol WCPayChangeOfflinePayLimitFeeViewControllerDelegate;

@interface WCPayChangeOfflinePayLimitFeeViewController : WCPayBaseViewController {
    UIButton *m_footerButton;
    WCBaseTextFieldItem *m_textFieldLimitItem;
    UILabel *oLeftLimitLabel;
    id<WCPayChangeOfflinePayLimitFeeViewControllerDelegate> m_delegate;
}

- (id)init;
- (void)viewWillLayoutSubviews;
- (id)getChangeOfflinePayLimitView;
- (void)initNavigationBar;
- (void)reloadTableView;
- (void)viewDidLoad;
- (void)onNext;
- (void)setDelegate:(id)a0;
- (void)OnSliderValueChanged:(id)a0;
- (void).cxx_destruct;

@end
