@class NSArray, IESLivePlaybackSeekProgressBar, UIView, UILabel;

@interface IESLivePlaybackSeekContainerView : UIView

@property (retain, nonatomic) IESLivePlaybackSeekProgressBar *progressBar;
@property (retain, nonatomic) UIView *pauseContainer;
@property (retain, nonatomic) UIView *nextContainer;
@property (retain, nonatomic) UIView *commentContainer;
@property (retain, nonatomic) UIView *orientationContainer;
@property (retain, nonatomic) UILabel *watchDuration;
@property (retain, nonatomic) UILabel *totalDuration;
@property (retain, nonatomic) NSArray *totalViews;
@property (nonatomic) long long totalDurationWidth;
@property (nonatomic) BOOL isPortraitStream;

- (void)handlePauseBtn:(id)a0 hidden:(BOOL)a1;
- (void)handleNextBtn:(id)a0 hidden:(BOOL)a1;
- (void)handleCommentBtn:(id)a0 hidden:(BOOL)a1;
- (void)handleOrientationBtn:(id)a0 hidden:(BOOL)a1;
- (id)buildDurationLabel;
- (void)remakeSeekbarConstraints;
- (void)remakeSeekbarConstraintsWith:(BOOL)a0;
- (void)_updateProgressBar:(BOOL)a0 draggingStyle:(BOOL)a1;
- (id)initWithParent:(id)a0 diContext:(id)a1;
- (void)pad_remakeConstraintsWithFullScreen:(BOOL)a0;
- (void)updateTotalDurationStr:(id)a0;
- (void)onSeekBeginAnimation;
- (void)onSeekEndAnimation;
- (void).cxx_destruct;
- (id)fontDescriptor;
- (void)setup;

@end
