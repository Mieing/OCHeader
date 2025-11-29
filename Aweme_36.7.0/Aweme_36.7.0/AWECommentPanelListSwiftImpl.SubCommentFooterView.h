@interface AWECommentPanelListSwiftImpl.SubCommentFooterView : UICollectionReusableView {
    void /* unknown type, empty encoding */ $__lazy_storage_$_shouldExpendWhenTapped;
    void /* unknown type, empty encoding */ section;
    void /* unknown type, empty encoding */ footerExpandAction;
    void /* unknown type, empty encoding */ footerFoldAction;
    void /* unknown type, empty encoding */ isNeedHighlightBGView;
    void /* unknown type, empty encoding */ footerTitle;
    void /* unknown type, empty encoding */ loadState;
    void /* unknown type, empty encoding */ $__lazy_storage_$_expandButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hideButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lineView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bgHighLightAnimateView;
}

- (void)onAWEUIThemeChange;
- (void)hideButtonTapped;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)expandButtonTapped;

@end
