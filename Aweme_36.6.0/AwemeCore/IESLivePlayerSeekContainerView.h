@class IESLiveVSSeekPauseContainer, IESLiveSeekProgressBar, UIView, IESLiveSeekProgressBarForMatch, NSArray, NSTimer, UIButton, IESLivePlayerSeekWatchNewButton, UILabel;
@protocol IESLiveRoomService;

@interface IESLivePlayerSeekContainerView : UIView <HTSLivePluginLayoutView>

@property (retain, nonatomic) IESLiveSeekProgressBar *progressBar;
@property (retain, nonatomic) IESLiveSeekProgressBarForMatch *matchProgressBar;
@property (retain, nonatomic) UIView *nextContainer;
@property (retain, nonatomic) UIView *commentContainer;
@property (retain, nonatomic) UILabel *watchDuration;
@property (retain, nonatomic) UIButton *watchNewBtn;
@property (retain, nonatomic) IESLivePlayerSeekWatchNewButton *matchWatchNewBtn;
@property (retain, nonatomic) UIView *seekContentView;
@property (retain, nonatomic) IESLiveVSSeekPauseContainer *matchPauseContainer;
@property (retain, nonatomic) NSArray *totalViews;
@property (copy, nonatomic) id /* block */ seekProtectedFlagBlock;
@property (nonatomic) BOOL seekProtectedFlag;
@property (nonatomic) BOOL currentIsPortraitFlag;
@property (retain, nonatomic) NSTimer *btnDismissTimer;
@property (copy, nonatomic) id /* block */ watchNewAction;
@property (readonly, nonatomic) UILabel *totalDuration;
@property (nonatomic) BOOL isShortLable;
@property (nonatomic) long long seekShowStyle;
@property (retain, nonatomic) id<IESLiveRoomService> room;

- (void)setAttachingDIContext:(id)a0;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pluginLayoutContentInsets;
- (void)handlePauseBtn:(id)a0 hidden:(BOOL)a1;
- (void)handleNextBtn:(id)a0 hidden:(BOOL)a1;
- (void)handleCommentBtn:(id)a0 hidden:(BOOL)a1;
- (void)coloringProgressWithModels:(id)a0;
- (void)remakeConstraintsWithOrientation:(BOOL)a0;
- (id)buildDurationLabel;
- (void)_updateProgressBar:(BOOL)a0 draggingStyle:(BOOL)a1;
- (void)onSeekBeginAnimation;
- (void)onSeekEndAnimation;
- (void)handleIndicatorNodesHidden:(BOOL)a0;
- (void)clickWatchNewBtn;
- (BOOL)currentIsPortrait;
- (double)rightOffset:(BOOL)a0;
- (void)watchNewBtnShowLimitControl:(BOOL)a0;
- (void)handleWatchNew:(BOOL)a0;
- (void)didPanGrogress:(id)a0 holderView:(id)a1;
- (double)showHeight:(BOOL)a0;
- (id)initWithShowStyle:(long long)a0 room:(id)a1 context:(id)a2;
- (void)hideWatchNewBtnIfNeed;
- (void)bindProgressBarAction:(id /* block */)a0;
- (void)updateWatchNewButtonTitle:(BOOL)a0;
- (void).cxx_destruct;
- (id)viewType;
- (void)setHidden:(BOOL)a0;
- (id)fontDescriptor;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setup;
- (void)updateWithProgress:(double)a0;

@end
