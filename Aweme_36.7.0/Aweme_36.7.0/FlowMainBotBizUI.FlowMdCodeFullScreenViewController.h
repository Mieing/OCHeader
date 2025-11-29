@interface FlowMainBotBizUI.FlowMdCodeFullScreenViewController : FlowCommon.FlowBaseViewController <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ debugClick;
    void /* unknown type, empty encoding */ subItemCopyClick;
    void /* unknown type, empty encoding */ shouldShowCustomMenu;
    void /* unknown type, empty encoding */ textSelectedBlock;
    void /* unknown type, empty encoding */ shareBtnClickBlock;
    void /* unknown type, empty encoding */ switchCodeDisplayStatusBlock;
    void /* unknown type, empty encoding */ vcLifecyleTrackBlock;
    void /* unknown type, empty encoding */ const;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navigationBar;
    void /* unknown type, empty encoding */ enableNewline;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lineNumberBgView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lineNumberTextView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_markdwonCodeView;
    void /* unknown type, empty encoding */ codeDataSouce;
    void /* unknown type, empty encoding */ enterDate;
}

- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;

@end
