@interface FlowKit.VoiceMixedHeaderView : UIView {
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ voiceTypeModelList;
    void /* unknown type, empty encoding */ voiceConfigModelList;
    void /* unknown type, empty encoding */ mixedViewModel;
    void /* unknown type, empty encoding */ shouldAutoExpand;
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ isExpand;
    void /* unknown type, empty encoding */ forceCollapse;
    void /* unknown type, empty encoding */ shouldExpandSingleView;
    void /* unknown type, empty encoding */ headerViewDelegate;
    void /* unknown type, empty encoding */ headerViewTopType;
    void /* unknown type, empty encoding */ previousHeight;
    void /* unknown type, empty encoding */ voiceState;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contanierView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_emptyContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_expandContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentStackView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_voiceButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collapseView;
}

- (void)onVoiceButtonClicked;
- (void)onCollapseViewClicked;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)traitCollectionDidChange:(id)a0;

@end
