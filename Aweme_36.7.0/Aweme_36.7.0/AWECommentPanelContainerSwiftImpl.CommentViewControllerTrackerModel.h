@class NSDictionary, AWECommentViewedCommentsManager;

@interface AWECommentPanelContainerSwiftImpl.CommentViewControllerTrackerModel : NSObject <AWECommentViewControllerTrackerProtocol> {
    void /* function */ bizLogExtraDict;
    void /* unknown type, empty encoding */ durationTimer;
    void /* unknown type, empty encoding */ durationMidlineTimer;
}

@property (nonatomic, copy) NSDictionary *bizLogExtraDict;
@property (nonatomic, retain) AWECommentViewedCommentsManager *viewedCommentsManager;
@property (nonatomic) BOOL isFromCommentsFromMePage;
@property (nonatomic) BOOL enableControlCloseCommentDuration;
@property (nonatomic) double closeCommentDuration;
@property (nonatomic) BOOL enableControlCloseCommentDurationMidline;
@property (nonatomic) double closeCommentDurationMidline;

- (void)startTimerForCloseCommentDuration;
- (void)pauseTimerForCloseCommentDuration;
- (double)stopTimerForCloseCommentDuration;
- (void)startTimerForCloseCommentDurationMidline;
- (void)pauseTimerForCloseCommentDurationMidline;
- (double)stopTimerForCloseCommentDurationMidline;
- (void).cxx_destruct;
- (id)init;

@end
