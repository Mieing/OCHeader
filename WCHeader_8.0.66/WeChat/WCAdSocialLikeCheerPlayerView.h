@class WCDataItem, WCAdSocialLikeLogic, WCAdSocialLikeInfo, PAGView, UIView, NSString;
@protocol WCAdSocialLikeCheerPlayerViewDelegate;

@interface WCAdSocialLikeCheerPlayerView : MMUIView <PAGViewListener>

@property (retain, nonatomic) WCAdSocialLikeInfo *adSocialLikeInfo;
@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) BOOL bTimelineScene;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } likeBottomFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } referenceFrame;
@property (retain, nonatomic) PAGView *cheerPlayer;
@property (retain, nonatomic) UIView *cheerPlayerContainer;
@property (readonly, nonatomic) WCAdSocialLikeLogic *socialLikeLogic;
@property (retain, nonatomic) PAGView *attractingPlayer;
@property (retain, nonatomic) PAGView *fireworkCheerAttractingView;
@property (weak, nonatomic) id<WCAdSocialLikeCheerPlayerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 adSocialLikeInfo:(id)a1 dataItem:(id)a2 bTimelineScene:(BOOL)a3 likeBottomFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 referenceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 likeBottomFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 referenceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)play;
- (void)stop;
- (BOOL)isPlaying;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcPlayerFrameWithPagWidth:(double)a0 pagHeight:(double)a1 rangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 offsetY:(double)a3;
- (void)tryResumePlayerViewFromCache;
- (void)createPlayerView;
- (void)resumeOrCreatePlayerView;
- (id)fetchPAGFilePath;
- (id)fetchAttractingPAGFile;
- (BOOL)generateAttractingPlayer;
- (void)cleanUpAttractingPlayer;
- (void)configAttractingPlayer;
- (void)updateAttractingPlayerFrame;
- (void)tryToResumeAttractingPlayer;
- (void)playAttractingAnimation;
- (void)hideAttractingView:(BOOL)a0;
- (id)fetchAttractingIconPAGFile;
- (void)generateAttractingIconPlayer;
- (id)fetchAttractingIconPlayer;
- (void)cleanUpAttractingIconPlayer;
- (void)playAttractingIconAnimation:(BOOL)a0 uponLikeView:(id)a1;
- (void)onAnimationStart:(id)a0;
- (void)onAnimationEnd:(id)a0;
- (void)onAnimationCancel:(id)a0;
- (void)reportAttractingAnimationPlayedWithErrorCode:(int)a0;
- (void)playFireworkCheerAttracting;
- (void)initFireworkCheerAttractingView;
- (void)updateFireworkCheerAttractingViewFrame;
- (void)tryToResumeFireworkCheerAttractingView;
- (void)cleanUpFireworkCheerAttractingView;
- (void).cxx_destruct;

@end
