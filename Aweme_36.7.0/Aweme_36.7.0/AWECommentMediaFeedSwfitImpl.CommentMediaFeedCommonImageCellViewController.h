@interface AWECommentMediaFeedSwfitImpl.CommentMediaFeedCommonImageCellViewController : AWECommentMediaFeedSwfitImpl.CommentMediaFeedCellViewController <UIGestureRecognizerDelegate, AWECommentMediaFeedRichContentContainerViewControllerDelegate> {
    void /* unknown type, empty encoding */ newCommonImageViewController;
    void /* unknown type, empty encoding */ richProgressView;
    void /* unknown type, empty encoding */ pureModeBlock;
    void /* unknown type, empty encoding */ livePhotoPlayControlBlock;
    void /* unknown type, empty encoding */ doubleTapBlock;
    void /* unknown type, empty encoding */ updateSmartBGColorBlock;
    void /* unknown type, empty encoding */ currentHIndex;
    void /* unknown type, empty encoding */ fakeAwemeModel;
}

- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)richContainerDidCreateProgressView:(id)a0;
- (void)didUpdatePaginatedProgressWithIndex:(long long)a0 totalCount:(long long)a1;
- (BOOL)canPlayerPlayAfterTouch;
- (void)actionForSingleTapWithGes:(id)a0;
- (void)doubleTapToZoomWithGes:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
