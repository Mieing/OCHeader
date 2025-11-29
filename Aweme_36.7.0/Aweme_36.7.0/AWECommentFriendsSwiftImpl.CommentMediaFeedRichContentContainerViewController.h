@interface AWECommentFriendsSwiftImpl.CommentMediaFeedRichContentContainerViewController : NSObject <AFDRichContentProgressControllerDelegate, AWEStoryContainerViewControllerDelegate, AFDRichContentContainerDelegate, AWECommentMediaFeedRichContentContainerViewControllerProtocol> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ commonImageViewController;
}

- (void)updateCurrentAwemeModel:(id)a0;
- (void)didChangeAlbumIndex:(long long)a0 animated:(BOOL)a1;
- (BOOL)currentVCIsActive;
- (void)richContainerDidCreateProgressView:(id)a0;
- (BOOL)shouldRecognizeProgressGesture;
- (BOOL)shouldRecognizeWindowGesture;
- (void)didUpdatePaginatedProgressWithIndex:(long long)a0 totalCount:(long long)a1;
- (id)progressConfig;
- (BOOL)canPlayerPlayAfterTouch;
- (void)didUpdatePaginatedProgressWithDuration:(double)a0 totalCount:(long long)a1 currentIndex:(long long)a2 currentProcess:(double)a3 needAnimation:(BOOL)a4;
- (void)awemePlay;
- (id)commonViewControllerContext;
- (void)scrollToIndex:(long long)a0 syncUpdateCell:(BOOL)a1;
- (void)updateReferString:(id)a0 enterFrom:(id)a1;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (BOOL)isPlaying;
- (id)init;
- (void)stop;
- (void)reset;
- (id)viewController;
- (id)currentCell;
- (void)willDisplay;
- (void)updateModel:(id)a0;

@end
