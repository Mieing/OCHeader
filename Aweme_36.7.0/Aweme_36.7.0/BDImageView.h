@class NSMutableDictionary, BDAnimatedImagePlayer, NSString, BDAnimatedPreferredFrameRateRange, BDImage;

@interface BDImageView : UIImageView <BDAnimatedImagePlayerDelegate> {
    BOOL _waterLevelDurationSet;
}

@property (class, nonatomic) BOOL autoAnimationControl;

@property (retain, nonatomic) BDAnimatedImagePlayer *player;
@property (retain, nonatomic) BDImage *animateImage;
@property (readonly, nonatomic, getter=isSettingImageByApp) BOOL settingImageByApp;
@property (retain, nonatomic) NSMutableDictionary *bdSetImageDelay;
@property (nonatomic) unsigned long long pauseForAutoAnimationControlOptions;
@property (nonatomic) BOOL isNotFirstAutoPlayAnimatedImage;
@property (nonatomic) BOOL infinityLoop;
@property (nonatomic) unsigned long long customLoop;
@property (nonatomic, getter=isAnimateEnable) BOOL animateEnable;
@property (nonatomic) BOOL frameCacheAutomatically;
@property (nonatomic) BOOL cacheAllFrame;
@property (nonatomic) unsigned long long currentAnimatedImageIndex;
@property (nonatomic) BOOL autoPlayAnimatedImage;
@property (nonatomic) BOOL hightAnimationControl;
@property (nonatomic) BOOL moveToWindowAnimationControl;
@property (nonatomic) unsigned long long singleAutoAnimationControlType;
@property (copy, nonatomic) id /* block */ loopCompletionBlock;
@property (copy, nonatomic) id /* block */ customLoopCompletionBlock;
@property (copy, nonatomic) id /* block */ firstFramePlayBlock;
@property (copy, nonatomic) id /* block */ delayFramePlayBlock;
@property (retain, nonatomic) NSString *animateRunLoopMode;
@property (retain, nonatomic) BDAnimatedPreferredFrameRateRange *animatedPreferredFrameRateRange;
@property (nonatomic) unsigned long long animationType;
@property (nonatomic) BOOL enableWaterLevel;
@property (nonatomic) double waterLevelDuration;
@property (nonatomic) BOOL bd_isOpenDownsample_delay;
@property (nonatomic) unsigned long long animationDelayType;
@property (nonatomic) unsigned long long animationDelayState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awe_lvideoDefaultPlaceholderImage;
+ (id)layerClass;

- (id)bd_setImageWithURL:(id)a0 alternativeURLs:(id)a1 placeholder:(id)a2 options:(long long)a3 config:(id)a4 blocks:(id)a5;
- (void)imagePlayerStartPlay:(id)a0;
- (void)imagePlayerDidReachEnd:(id)a0;
- (void)imagePlayerDelayPlay:(id)a0 index:(unsigned long long)a1 animationDelayType:(unsigned long long)a2 animationDelayState:(unsigned long long)a3;
- (void)imagePlayerDidReachAllLoopEnd:(id)a0;
- (void)imagePlayer:(id)a0 didUpdateImage:(id)a1 index:(unsigned long long)a2;
- (void)clearImageBuffer;
- (void)_tryPlayAnimateImage;
- (void)setImage:(id)a0 new:(BOOL)a1;
- (BOOL)_needAutoAnimationControl;
- (void)_autoAnimationControlForStart:(BOOL)a0 autoPlay:(BOOL)a1 option:(unsigned long long)a2;
- (BOOL)_canPauseForAutoAnimationControl;
- (id)bd_baseImage;
- (void)longvideo_setImageWithURLArray:(id)a0 trackerParams:(id)a1 completionBlock:(id /* block */)a2;
- (void)longvideo_setImageWithURLArray:(id)a0 placeholder:(id)a1 trackerParams:(id)a2 completionBlock:(id /* block */)a3;
- (void)longvideo_setImageWithURLArray:(id)a0 placeholder:(id)a1 options:(unsigned long long)a2 trackerParams:(id)a3 completionBlock:(id /* block */)a4;
- (void)longvideo_setImageWithURLArray:(id)a0 placeholder:(id)a1 cacheName:(id)a2 options:(unsigned long long)a3 trackerParams:(id)a4 progressBlock:(id /* block */)a5 completionBlock:(id /* block */)a6;
- (void)longvideo_setImageWithURLArray:(id)a0 trackerParams:(id)a1;
- (void)longvideo_setImageWithURLArray:(id)a0 placeholder:(id)a1 trackerParams:(id)a2;
- (void)awemeMonitor_setImageWithURLArray:(id)a0 scene:(id)a1 placeholder:(id)a2 trackerParams:(id)a3;
- (void)awemeMonitor_setImageWithURLArray:(id)a0 scene:(id)a1 trackerParams:(id)a2;
- (void)awemeMonitor_setImageWithURLArray:(id)a0 scene:(id)a1 trackerParams:(id)a2 completionBlock:(id /* block */)a3;
- (void)awemeMonitor_setImageWithURLArray:(id)a0 scene:(id)a1 placeholder:(id)a2 trackerParams:(id)a3 completionBlock:(id /* block */)a4;
- (void)awemeMonitor_setImageWithURLArray:(id)a0 scene:(id)a1 placeholder:(id)a2 options:(unsigned long long)a3 trackerParams:(id)a4 completionBlock:(id /* block */)a5;
- (void)awemeMonitor_setImageWithURLArray:(id)a0 scene:(id)a1 placeholder:(id)a2 cacheName:(id)a3 options:(unsigned long long)a4 trackerParams:(id)a5 progressBlock:(id /* block */)a6 completionBlock:(id /* block */)a7;
- (void)awemeMonitor_setImageWithURLArray:(id)a0 scene:(id)a1;
- (void)perf_analysis_imagePlayerStartPlay:(id)a0 didUpdateImage:(id)a1 index:(unsigned long long)a2;
- (double)lastCheckHiddenTime;
- (void)setLastCheckHiddenTime:(double)a0;
- (double)lastCheckInScreenTime;
- (void)setLastCheckInScreenTime:(double)a0;
- (void)p_baseLoadGif:(id)a0;
- (void)p_baseLoadGifWithURL:(id)a0;
- (void)cj_loadGifAndOnceLoop:(id)a0 duration:(double)a1;
- (void)cj_loadGifAndOnceLoopWithURL:(id)a0 duration:(double)a1;
- (void)cj_loadGifAndInfinityLoop:(id)a0 duration:(double)a1;
- (void)cj_loadGifAndInfinityLoopWithURL:(id)a0 duration:(double)a1;
- (void)stopAnimating;
- (void)setHighlighted:(BOOL)a0;
- (void)startAnimating;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)setImage:(id)a0;
- (void)setHidden:(BOOL)a0;
- (void)pauseAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)image;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)getImageURL:(id)a0;

@end
