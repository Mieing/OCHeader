@interface AWECommentMediaFeedSwfitImpl.CommentMediaFeedUserNameContainerView : UIView <AWECommentMediaFeedUserNameComponentViewProtocol> {
    void /* unknown type, empty encoding */ tagViewModel;
    void /* unknown type, empty encoding */ mediaTagViewMaxWidth;
    void /* unknown type, empty encoding */ currentPlayStateBlock;
    void /* unknown type, empty encoding */ livePhotoPlayWayTappedBlock;
    void /* unknown type, empty encoding */ authorViewTapBlock;
    void /* unknown type, empty encoding */ contentViewSelfHeight;
    void /* unknown type, empty encoding */ contentViewMaxWidth;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mediaTypeTagView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tagImageArrowView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tagBackgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_authorNameLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentBackgroundView;
}

- (void)handleAuthorViewTap;
- (void)livePhotoPlayWayTapped;
- (void)setupWithMaxWidth:(double)a0;
- (void)configText:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
