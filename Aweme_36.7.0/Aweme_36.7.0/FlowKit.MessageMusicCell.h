@interface FlowKit.MessageMusicCell : FlowKitBizUI.MessageCell {
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cardContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cardHeader;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cardBody;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cardFooter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_musicAppIcon;
    void /* unknown type, empty encoding */ $__lazy_storage_$_musicAppName;
    void /* unknown type, empty encoding */ $__lazy_storage_$_musicCover;
    void /* unknown type, empty encoding */ $__lazy_storage_$_musicName;
    void /* unknown type, empty encoding */ $__lazy_storage_$_musicArtistName;
    void /* unknown type, empty encoding */ $__lazy_storage_$_musicControlButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_musicControlButtonIdleBackgroundLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_musicControlButtonPlayingBackgroundLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_musicControlButtonPlayingForegroundLayer;
    void /* unknown type, empty encoding */ displayLink;
    void /* unknown type, empty encoding */ isPlaying;
    void /* unknown type, empty encoding */ musicInfo;
    void /* unknown type, empty encoding */ messageId;
    void /* unknown type, empty encoding */ conversationId;
    void /* unknown type, empty encoding */ uiConsistentId;
    void /* unknown type, empty encoding */ _notifyCenter;
    void /* unknown type, empty encoding */ progress;
    void /* unknown type, empty encoding */ botId;
    void /* unknown type, empty encoding */ message;
}

- (void)handleButtonTouchUpInside:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)updateProgress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleTap:(id)a0;

@end
