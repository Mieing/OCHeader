@class WCBizLoadingView;

@interface WCBizControlLogic : WCBaseControlLogic {
    WCBizLoadingView *m_loadView;
    BOOL m_isLoading;
}

- (id)init;
- (BOOL)isLoading;
- (void)initLoadView;
- (void)dealloc;
- (void)startLoading:(BOOL)a0;
- (void)startWCPayLoading:(BOOL)a0;
- (void)startWCPayLoading;
- (void)startWCPayLoadingBlocked;
- (void)stopWCPayLoading;
- (void)startLoading;
- (void)startLoadingBlocked;
- (void)startLoadingWithTip:(id)a0;
- (void)startLoadingBlockedWithTip:(id)a0;
- (void)stopLoading;
- (void)showLoadingOK:(id)a0;
- (void)stopLoadingOnMainWindow;
- (void)startLoadingOnMainWindow;
- (void)startCommonLoading;
- (void)stopCommonLoading;
- (void)startCommonLoadingWithTips:(id)a0;
- (void).cxx_destruct;

@end
