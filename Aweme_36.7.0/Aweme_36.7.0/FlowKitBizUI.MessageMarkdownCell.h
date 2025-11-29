@interface FlowKitBizUI.MessageMarkdownCell : FlowKitBizUI.MessageCell <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ selectedImageInfo;
    void /* unknown type, empty encoding */ onTapImage;
    void /* unknown type, empty encoding */ onTapRegen;
    void /* unknown type, empty encoding */ onTapStop;
    void /* unknown type, empty encoding */ metaInfoCount;
    void /* unknown type, empty encoding */ onPrepareForReuseBlock;
    void /* unknown type, empty encoding */ thinkingContainer;
    void /* unknown type, empty encoding */ normalRefView;
    void /* unknown type, empty encoding */ actionView;
    void /* unknown type, empty encoding */ pluginAuthView;
    void /* unknown type, empty encoding */ identityAuthView;
    void /* unknown type, empty encoding */ eduMultiQuesHeaderView;
    void /* unknown type, empty encoding */ subMsgSwitcherView;
    void /* unknown type, empty encoding */ markdownView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_widgetView;
    void /* unknown type, empty encoding */ typingIndicator;
    void /* unknown type, empty encoding */ loadingIndicator;
    void /* unknown type, empty encoding */ handleCellContentClick;
    void /* unknown type, empty encoding */ markdownSnapView;
    void /* unknown type, empty encoding */ shouldShowIndicator;
    void /* unknown type, empty encoding */ shouldShowLoadingIndicator;
    void /* unknown type, empty encoding */ shouldAnimateLoadingIndicator;
    void /* unknown type, empty encoding */ needStreamingAnimation;
    void /* unknown type, empty encoding */ needSentenceStreamingIndicator;
    void /* unknown type, empty encoding */ tapGesture;
    void /* unknown type, empty encoding */ lastGlyphaView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_followingButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_errorBottomLabel;
    void /* unknown type, empty encoding */ hanldeLinkClicked;
    void /* unknown type, empty encoding */ onTap;
    void /* unknown type, empty encoding */ fakeLoadingText;
}

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)flow_trackParametersWith:(id)a0;
- (void)adapterToSnapshotWithCtx:(struct CGContext { } *)a0;
- (double)heightForSnapshot;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void)handleTap;

@end
