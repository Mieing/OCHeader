@class MMMusicFadeOutLayer, UIVisualEffectView, UIViewPropertyAnimator, UIView, TLProfileModel, NSString;
@protocol TLProfileBaseMediaView, TLProfileBaseMediaViewDelegate;

@interface TLProfileMediaContainerView : UIView <TLProfileBaseMediaViewDelegate, WCPlayerEventExt>

@property (retain, nonatomic) MMMusicFadeOutLayer *maskLayer;
@property (retain, nonatomic) MMMusicFadeOutLayer *coverMaskLayer;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIViewPropertyAnimator *blurAnimator;
@property (retain, nonatomic) UIView *backgroundBlurView;
@property (nonatomic) BOOL isCoverNewVersion;
@property (retain, nonatomic) TLProfileModel *profileModel;
@property (weak, nonatomic) id<TLProfileBaseMediaViewDelegate> delegate;
@property (nonatomic) double mediaAspectRatio;
@property (retain, nonatomic) UIView<TLProfileBaseMediaView> *mediaView;
@property (retain, nonatomic) UIView *mediaCoverView;
@property (retain, nonatomic) UIView *mediaBackgroundView;
@property (nonatomic) double aspectRatio;
@property (nonatomic) long long effect;
@property (nonatomic) double transitionProgress;
@property (nonatomic) double visibleHeight;
@property (nonatomic) double minVisibleHeight;
@property (nonatomic) double minHeight;
@property (nonatomic) double maxHeight;
@property (nonatomic) BOOL useCoverForContent;
@property (nonatomic) BOOL isModeTall;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateModel:(id)a0;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (double)calculateTargetOffset:(double)a0 MediaHeight:(double)a1;
- (void)resetMediaViewMask;
- (BOOL)hidesBlurForMediaViewSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isSizeParamsInvalid;
- (void)refreshSubviewLevel;
- (void)didMoveToWindow;
- (void)willEnterForeground;
- (void)addBlurViewEffect;
- (void)removeBlurViewEffect;
- (void)willEnterHover;
- (void)enterHover;
- (void)didEnterHover;
- (void)willExitHover;
- (void)exitHover;
- (void)didExitHover;
- (BOOL)shouldHandleMedia;
- (void)startPlayMedia;
- (void)pausePlayMedia;
- (void)stopPlayMedia;
- (void)pausePlayMediaVideoStream;
- (void)resetPlayMedia;
- (void)onMediaFinishPlaying;
- (void)onMediaViewRefresh;
- (void)onMuteForExternalPlaybackMode:(id)a0;
- (void).cxx_destruct;

@end
