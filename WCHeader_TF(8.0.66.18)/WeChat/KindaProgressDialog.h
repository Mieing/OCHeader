@class MMLoadingView, WCBizLoadingView, MMUIViewController, NSString;

@interface KindaProgressDialog : NSObject <MMKProgressDialog> {
    MMLoadingView *_topLoadingView;
}

@property (retain, nonatomic) WCBizLoadingView *m_loadView;
@property (weak, nonatomic) MMUIViewController *vc;
@property (retain, nonatomic) MMLoadingView *m_normalGlobalView;
@property (retain, nonatomic) WCBizLoadingView *m_payGlobalView;
@property (retain, nonatomic) MMLoadingView *m_customGlobalView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)showImpl:(id)a0 canCancel:(BOOL)a1 cancel:(id)a2;
- (void)showPayProcessImpl:(BOOL)a0 cancel:(id)a1;
- (void)showToast:(id)a0;
- (void)showNormalLoading:(BOOL)a0;
- (void)showNormalGlobalLoading:(BOOL)a0;
- (void)showPayGlobalLoading:(BOOL)a0;
- (void)showWPHKProgressLoading:(BOOL)a0;
- (void)showGoToWPHKProgressLoading:(BOOL)a0;
- (void)showProgressLoadingWithTitle:(id)a0 canCancel:(BOOL)a1;
- (void)showWPHKPayGlobalLoading:(BOOL)a0;
- (id)insideGetCurrentViewController;
- (void)insideInitLoadView;
- (void)dismiss;
- (void)showTopLoading:(id)a0 block:(BOOL)a1;
- (void)showCustomLoading:(id)a0 block:(BOOL)a1;
- (void).cxx_destruct;

@end
