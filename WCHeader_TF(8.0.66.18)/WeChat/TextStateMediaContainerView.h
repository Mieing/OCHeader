@class TextStateIcon, MMMusicFadeOutLayer, NSString, UIView, TextStateModel, TextStateMediaEffectCompositeView;
@protocol TextStateBaseMediaView, TextState3rdPartyHandler, TextStateBaseMediaViewDelegate;

@interface TextStateMediaContainerView : UIView <TextStateBaseMediaViewDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) MMMusicFadeOutLayer *maskLayer;
@property (retain, nonatomic) MMMusicFadeOutLayer *coverMaskLayer;
@property (retain, nonatomic) TextStateMediaEffectCompositeView *effectsCompositeView;
@property (retain, nonatomic) UIView *backgroundBlurView;
@property (nonatomic) BOOL disable3rdPartyContent;
@property (retain, nonatomic) id<TextState3rdPartyHandler> thirdPartyHandler;
@property (retain, nonatomic) TextStateIcon *icon;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic) BOOL wantToPlay;
@property (nonatomic) BOOL autoPausedWhenEnterBackground;
@property (nonatomic) BOOL firstRefreshBackground;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) TextStateModel *textState;
@property (weak, nonatomic) id<TextStateBaseMediaViewDelegate> delegate;
@property (nonatomic) double mediaAspectRatio;
@property (retain, nonatomic) UIView<TextStateBaseMediaView> *mediaView;
@property (retain, nonatomic) UIView *mediaCoverView;
@property (retain, nonatomic) UIView *mediaBackgroundView;
@property (nonatomic) double aspectRatio;
@property (nonatomic) BOOL forceAspectRatio;
@property (nonatomic) unsigned int effects;
@property (nonatomic) double transitionProgress;
@property (copy, nonatomic) id /* block */ mediaProgressChangeHandler;
@property (nonatomic) BOOL useCoverForContent;
@property (nonatomic) BOOL staticContent;
@property (nonatomic) double yOffset;
@property (nonatomic) BOOL hideBigIconForDefaultImage;
@property (nonatomic) BOOL forbidUpdateData;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (nonatomic, getter=isForceMuted) BOOL forceMuted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)containerViewFromUsername:(id)a0 model:(id)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateUsername:(id)a0 model:(id)a1;
- (void)updateFrom3rdPartyHandler:(id)a0;
- (void)dealloc;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)refreshSubviewLevel;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (BOOL)shouldHandleMedia;
- (void)startPlayMedia;
- (BOOL)longPressEvent:(BOOL)a0;
- (BOOL)residentPlayMedia;
- (BOOL)shouldResidentPlayMedia;
- (void)pausePlayMedia;
- (void)stopPlayMedia;
- (void)pausePlayMediaVideoStream;
- (void)resetPlayMedia;
- (void)checkValidFor3rdPartyMediaWithCacheOnly:(BOOL)a0;
- (void)__checkValidFor3rdPartyMediaWithCacheOnly:(BOOL)a0;
- (void)requestUpdateDataSource;
- (void)checkUseCustomBlurEffect;
- (void)onMediaFinishPlaying;
- (void)onMediaViewRefresh;
- (void)onMediaProgressChange:(double)a0;
- (BOOL)displayDataReady;
- (void).cxx_destruct;

@end
