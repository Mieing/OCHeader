@class NSString, UIButton, MMTableViewInfo;
@protocol FacebookViewControllerDelegate;

@interface FacebookViewController : AccountBaseViewController <IMMFacebookMgrExt> {
    UIButton *m_bindBtn;
    UIButton *m_unBindBtn;
    UIButton *m_doneBtn;
    MMTableViewInfo *m_tableViewInfo;
}

@property (weak, nonatomic) id<FacebookViewControllerDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateView;
- (void)disMiss;
- (void)dealloc;
- (void)initHeaderView;
- (void)initFooterView;
- (void)updateTableCell;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)bind;
- (void)onUnBindAccount;
- (void)done;
- (void)onUnbind;
- (void)autoDismis;
- (void)onBindFacebookFinish:(unsigned int)a0;
- (void)onUnBindFacebookFinish:(unsigned int)a0;
- (void).cxx_destruct;

@end
