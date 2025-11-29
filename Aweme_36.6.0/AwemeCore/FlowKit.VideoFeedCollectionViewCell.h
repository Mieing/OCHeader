@interface FlowKit.VideoFeedCollectionViewCell : UICollectionViewCell <FlowVideoPlayerDelegate> {
    void /* unknown type, empty encoding */ videoIndex;
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ videoPlayer;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
    void /* unknown type, empty encoding */ coverImageView;
    void /* unknown type, empty encoding */ playIconImageView;
    void /* unknown type, empty encoding */ loadingIndicatorView;
    void /* unknown type, empty encoding */ currentAudioSceneResource;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomMaskView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topMaskView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_descriptionLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_artistNameLabel;
    void /* unknown type, empty encoding */ notificationTokens;
    void /* unknown type, empty encoding */ videoFeedItem;
    void /* unknown type, empty encoding */ isGestureWorking;
    void /* unknown type, empty encoding */ didTap;
}

- (void)videoPlayer:(id)a0 playbackStateDidChange:(long long)a1;
- (void)videoPlayer:(id)a0 loadStateDidChange:(long long)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)handleTap:(id)a0;

@end
