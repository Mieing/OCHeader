@interface FlowMusic.MusicPlayerView : UIView {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ maxCenterSquareLayoutGuide;
    void /* unknown type, empty encoding */ $__lazy_storage_$_coverList;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ gradientLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_actionButtonContainer;
    void /* unknown type, empty encoding */ didStopFlag;
    void /* unknown type, empty encoding */ isSwitchingFlag;
    void /* unknown type, empty encoding */ isDraggingSeekBar;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topLabelContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playButtonIcon;
    void /* unknown type, empty encoding */ $__lazy_storage_$_creatorLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_labelContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lyricsViewContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lyricsViewGradientView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lyricsView;
    void /* unknown type, empty encoding */ bar;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ controllerBarModel;
}

- (void)onTitleClick;
- (void)coverClicked;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)onTap;

@end
