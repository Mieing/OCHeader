@interface FlowKitBizUI.MessagingConversationInfoView : UIView {
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerStackView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentStackView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleStackView;
    void /* unknown type, empty encoding */ avatarDefaultSize;
    void /* unknown type, empty encoding */ $__lazy_storage_$_avatarContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_avatarView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_memberCountLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleIndicatorSpacer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleIndicator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tagSpacer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tagLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subtitleOffsetContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subtitleLabel;
    void /* unknown type, empty encoding */ subtitleLabelHandler;
    void /* unknown type, empty encoding */ alignment;
    void /* unknown type, empty encoding */ avatarModel;
    void /* unknown type, empty encoding */ subtitleModel;
    void /* unknown type, empty encoding */ subtitleLayoutGuide;
    void /* unknown type, empty encoding */ enableHighlightEffect;
}

- (void)onClickSubtitleLabel;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
