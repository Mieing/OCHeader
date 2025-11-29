@interface FlowKit.MessageRecordSummaryCell : FlowKitBizUI.MessageCell {
    void /* unknown type, empty encoding */ messageId;
    void /* unknown type, empty encoding */ botId;
    void /* unknown type, empty encoding */ conversationId;
    void /* unknown type, empty encoding */ requester;
    void /* unknown type, empty encoding */ paddingBottom;
    void /* unknown type, empty encoding */ paddingTop;
    void /* unknown type, empty encoding */ paddingX;
    void /* unknown type, empty encoding */ headerHeight;
    void /* unknown type, empty encoding */ buttonHeight;
    void /* unknown type, empty encoding */ markdownView;
    void /* unknown type, empty encoding */ commonTrackerParams;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_durationLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_headerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_footerButtonViewLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_footerButtonView;
}

- (void)tapHandle:(id)a0;
- (void)buttonClickHandle;
- (void)linkToDetail:(BOOL)a0 :(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
