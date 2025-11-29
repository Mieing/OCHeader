@interface FlowKit.MessageRecordCell : FlowKitBizUI.MessageCell {
    void /* unknown type, empty encoding */ throttler;
    void /* unknown type, empty encoding */ recordPaddingBottom;
    void /* unknown type, empty encoding */ recordPaddingTop;
    void /* unknown type, empty encoding */ recordPaddingLeft;
    void /* unknown type, empty encoding */ recordTipsFontSize;
    void /* unknown type, empty encoding */ recordTipsHeight4TwoLines48;
    void /* unknown type, empty encoding */ recordNavHeight24;
    void /* unknown type, empty encoding */ transcriptionLineHeight;
    void /* unknown type, empty encoding */ centralContainerHeight;
    void /* unknown type, empty encoding */ centralContainerMarginTop;
    void /* unknown type, empty encoding */ recordProgressHeight;
    void /* unknown type, empty encoding */ recordControlButtonHeight;
    void /* unknown type, empty encoding */ displayLink;
    void /* unknown type, empty encoding */ messageId;
    void /* unknown type, empty encoding */ botId;
    void /* unknown type, empty encoding */ conversationId;
    void /* unknown type, empty encoding */ actionBarKey;
    void /* unknown type, empty encoding */ offlineFinishTimestamp;
    void /* unknown type, empty encoding */ startRecordingTimestamp;
    void /* unknown type, empty encoding */ commonTrackerParams;
    void /* unknown type, empty encoding */ requester;
    void /* unknown type, empty encoding */ handleClickControlButton;
    void /* unknown type, empty encoding */ handleClickOtherArea;
    void /* unknown type, empty encoding */ handleStartRecord;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cardContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_audioWave;
    void /* unknown type, empty encoding */ $__lazy_storage_$_progressLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navBar;
    void /* unknown type, empty encoding */ $__lazy_storage_$_centralContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_transcriptionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_errorLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_errorView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_footerButtonViewLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_recordControlButtonView;
}

- (void)tapGestureHandler;
- (void)buttonClickHandle;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)updateProgress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
