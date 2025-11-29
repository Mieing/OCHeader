@interface AWECommentMediaFeedSwfitImpl.CommentMediaFeedVideoCellViewController : AWECommentMediaFeedSwfitImpl.CommentMediaFeedCellViewController <AWECommentMediaMainVideoPlayerViewControllerDelegate, UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ newVideoViewController;
    void /* unknown type, empty encoding */ speedBeforeLongPress;
    void /* unknown type, empty encoding */ newLongPressFastSpeedView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_longPressGesture;
    void /* unknown type, empty encoding */ panGesture;
    void /* unknown type, empty encoding */ $__lazy_storage_$_progressSlider;
    void /* unknown type, empty encoding */ pureModeSpeedNumArray;
    void /* unknown type, empty encoding */ pureModeCurrentSpeedIdx;
}

- (void)playerUpdatePlayTime:(double)a0 canPlayTime:(double)a1 totalTime:(double)a2;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)hiddenSliderAfterSeek;
- (void)actionForSingleTapWithGes:(id)a0;
- (void)handleLongPressGestureWithGes:(id)a0;
- (void)handlePanGestureWithPan:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;

@end
