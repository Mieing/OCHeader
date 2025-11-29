@interface AWECommentMediaFeedSwfitImpl.CommentMediaFeedImagePreviewView : UIView <PHLivePhotoViewDelegate> {
    void /* unknown type, empty encoding */ image;
    void /* unknown type, empty encoding */ placeholder;
    void /* unknown type, empty encoding */ fullSizeImageLoaded;
    void /* unknown type, empty encoding */ loadPictureTracker;
    void /* unknown type, empty encoding */ loadResourceMonitorTask;
    void /* unknown type, empty encoding */ livePhotoPlayWayChangeBlock;
    void /* unknown type, empty encoding */ isLivePhotoPlaying;
    void /* unknown type, empty encoding */ updateSmartBGColorBlock;
    void /* unknown type, empty encoding */ localLivePhotoDuration;
    void /* unknown type, empty encoding */ isPlayOnce;
    void /* unknown type, empty encoding */ isPlayLoop;
    void /* unknown type, empty encoding */ livePhotoCurrentPlayStatus;
    void /* unknown type, empty encoding */ didOffScreen;
    void /* unknown type, empty encoding */ didOnScreen;
    void /* unknown type, empty encoding */ needResumePlayLivePhotoLoop;
    void /* unknown type, empty encoding */ needResumePlayLivePhotoOnce;
    void /* unknown type, empty encoding */ resourceID;
    void /* unknown type, empty encoding */ livePhotoIsStop;
    void /* unknown type, empty encoding */ livePhotoDuration;
    void /* unknown type, empty encoding */ currentLivePhotoStartStamp;
    void /* unknown type, empty encoding */ localLivePhotoCoverImage;
    void /* unknown type, empty encoding */ localLivePhotoIsClose;
    void /* unknown type, empty encoding */ thumbnailImage;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_livePhotoView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_duxLoadingView;
}

- (void)handleDoubleFingerLongPress:(id)a0;
- (void)livePhotoView:(id)a0 didEndPlaybackWithStyle:(long long)a1;
- (void)livePhotoView:(id)a0 willBeginPlaybackWithStyle:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
