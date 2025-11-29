@class MMFinderLiveReplayOperationCommentSnapShot;

@interface MMFinderLiveReplayCommentView : MMFinderLiveCommentView

@property (retain, nonatomic) MMFinderLiveReplayOperationCommentSnapShot *currentSnapShot;

- (void)layoutCommentButton;
- (void)updateCurrentSnapShot:(id)a0 resetComments:(BOOL)a1;
- (double)commentTableBackViewBottom;
- (double)initialCommentTableBackViewBottom;
- (void).cxx_destruct;

@end
