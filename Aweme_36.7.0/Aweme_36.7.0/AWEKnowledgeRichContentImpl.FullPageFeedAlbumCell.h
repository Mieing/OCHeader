@interface AWEKnowledgeRichContentImpl.FullPageFeedAlbumCell : AWEKnowledgeSwiftBasic.FullPageBaseItemViewCell {
    void /* unknown type, empty encoding */ singleTapHandler;
    void /* unknown type, empty encoding */ muteButtonClick;
    void /* unknown type, empty encoding */ picSearchButtonClick;
    void /* unknown type, empty encoding */ enterPureModeButtonClick;
    void /* unknown type, empty encoding */ isViewDisabled;
    void /* unknown type, empty encoding */ isPoiAnchorExpanded;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sliderContentView;
    void /* unknown type, empty encoding */ sliderContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_muteButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_picSearchButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_enterPureModeButton;
    void /* unknown type, empty encoding */ sliderFolioView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topEdgeLine;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomEdgeLine;
    void /* unknown type, empty encoding */ $__lazy_storage_$_poiAnchorContainer;
    void /* unknown type, empty encoding */ progressBarView;
}

- (void)awe_themeDidChange:(long long)a0;
- (void)singleTapWithGes:(id)a0;
- (void)muteBtnClicked;
- (void)picSearchBtnClicked;
- (void)enterPureModeBtnClicked;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
