@class MMLoadingView, NSArray, WCDBRouterInfo, MMTableViewInfo;

@interface WCDBRecoverViewController : MMUIViewController {
    MMLoadingView *m_loadingView;
    BOOL m_isRecovering;
    NSArray *_infos;
    WCDBRouterInfo *_selected;
    MMTableViewInfo *m_tableViewInfo;
}

- (void)addCustomizationCellInSection:(id)a0;
- (void)makeCustomizationCell:(id)a0 cellInfo:(id)a1;
- (void)doAsyncCustomizationRecoverWithHandler:(id /* block */)a0;
- (void)askForConfirmWithContent:(id)a0 selector:(SEL)a1;
- (void)addCustomizationMessageTimeErrorCellInSection:(id)a0;
- (void)selectFixMessageTimeErrorCell:(id)a0;
- (void)doFixMessageTimeError;
- (BOOL)handleMessageCustomizeRecover;
- (id)init;
- (void)dealloc;
- (void)onEnterBackground;
- (void)markAsSelected:(id)a0;
- (void)markAsUnselected;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)popBack;
- (void)adjustTableViewRect;
- (void)makeCell:(id)a0 cellInfo:(id)a1;
- (void)selectCell:(id)a0;
- (void)askForConfirm;
- (void)updateProgress:(double)a0;
- (BOOL)doRecover;
- (void)didRecover:(BOOL)a0;
- (BOOL)shouldInteractivePop;
- (void)doAsyncRecover;
- (void).cxx_destruct;

@end
