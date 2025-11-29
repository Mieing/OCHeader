@interface FlowKit.MessageReportController : FlowCommon.FlowBaseViewController <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ _appInfoProvider;
    void /* unknown type, empty encoding */ didDismissBlock;
    void /* unknown type, empty encoding */ reportInfoList;
    void /* unknown type, empty encoding */ reportType;
    void /* unknown type, empty encoding */ reportCompleteParams;
    void /* unknown type, empty encoding */ contentInset;
    void /* unknown type, empty encoding */ contentViewHeightConstraint;
    void /* unknown type, empty encoding */ isImmersiveMode;
    void /* unknown type, empty encoding */ bottomPadding;
    void /* unknown type, empty encoding */ maxHeight;
    void /* unknown type, empty encoding */ fixedHeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentBkg;
    void /* unknown type, empty encoding */ $__lazy_storage_$_submitButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_reportContentView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_line;
}

- (void)handleKeyboardNotification:(id)a0;
- (void)didClickSubmit;
- (void)didClickBackWithNeedSubmit:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;

@end
