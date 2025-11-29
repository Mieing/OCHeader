@interface FlowKit.AgreementPanelViewController : FlowCommon.FlowBaseViewController {
    void /* unknown type, empty encoding */ panelConfig;
    void /* unknown type, empty encoding */ handleCloseAction;
    void /* unknown type, empty encoding */ handleConfirmAction;
    void /* unknown type, empty encoding */ handleDidFirstAppear;
    void /* unknown type, empty encoding */ firstShow;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_panelView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_stackView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_avatarView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_confirmButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
}

- (void)handleClickClose;
- (void)handleClickConfirm;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
