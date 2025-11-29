@interface AWEMusicStreamingImpl.BNLyricModePlayLyricView : UIView <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ lyricLineSizes;
    void /* unknown type, empty encoding */ lyricTransLineSizes;
    void /* unknown type, empty encoding */ leftPadding;
    void /* unknown type, empty encoding */ rightPadding;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ containerDelegate;
    void /* unknown type, empty encoding */ delayWorkItem;
    void /* unknown type, empty encoding */ isScrolling;
    void /* unknown type, empty encoding */ contentOffset;
    void /* unknown type, empty encoding */ lineIndex;
    void /* unknown type, empty encoding */ isMannelSeeked;
    void /* unknown type, empty encoding */ currentTime;
    void /* unknown type, empty encoding */ $__lazy_storage_$_coverView;
    void /* unknown type, empty encoding */ footer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tableView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tableVM;
    void /* unknown type, empty encoding */ dotDiameter;
    void /* unknown type, empty encoding */ cellFrames;
    void /* unknown type, empty encoding */ rows;
    void /* unknown type, empty encoding */ defaultLyricAttribute;
    void /* unknown type, empty encoding */ displayingLyricIdentifier;
    void /* unknown type, empty encoding */ anchorView;
    void /* unknown type, empty encoding */ anchorType;
}

- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)hideAnchorView;
- (void)showAnchorView;
- (void)setPlayTime:(double)a0 animated:(BOOL)a1 isManual:(BOOL)a2;
- (void)bindDataSourceWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
