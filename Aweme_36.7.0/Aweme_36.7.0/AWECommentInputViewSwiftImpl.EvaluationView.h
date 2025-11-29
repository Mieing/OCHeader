@interface AWECommentInputViewSwiftImpl.EvaluationView : UIView <AWECommentEvaluationCoreServiceProtocol, UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ keyboardContainerHeightConstraint;
    void /* unknown type, empty encoding */ keyboardContainerBottomOffsetConstraint;
    void /* unknown type, empty encoding */ scrollviewBottomOffsetConstraint;
    void /* unknown type, empty encoding */ scrollviewBottomOffsetDefault;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ initialScrollViewContentHeight;
    void /* unknown type, empty encoding */ initialScrollViewContentHeightDidSet;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ coordinator;
    void /* unknown type, empty encoding */ currentFirstResponder;
    void /* unknown type, empty encoding */ titleDisableEdit;
    void /* unknown type, empty encoding */ closeSubScriber;
    void /* unknown type, empty encoding */ containerTag;
    void /* unknown type, empty encoding */ isAnimating;
    void /* unknown type, empty encoding */ currentTheme;
    void /* unknown type, empty encoding */ $__lazy_storage_$_keyboardElement;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_inputContent;
}

- (id)dataService;
- (id)eventListenerService;
- (void)viewUpdateTheme:(unsigned long long)a0;
- (void)viewConfig:(id)a0 params:(id)a1;
- (void)viewUpdateContainerTag:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)mainViewTapWithGes:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
