@class CAGradientLayer, NSString, UIImageView, CAShapeLayer, NSMutableDictionary;

@interface AWEFeedLiveMarkView : UIView <CAAnimationDelegate, AWEFeedLiveMarkViewProtocol>

@property (retain, nonatomic) CAShapeLayer *markClipLayer;
@property (retain, nonatomic) CAGradientLayer *markColorLayer;
@property (retain, nonatomic) CAShapeLayer *markClipLayerForAniamtion;
@property (retain, nonatomic) CAGradientLayer *markColorLayerForAnimation;
@property (nonatomic) BOOL isAddMarkAnimation;
@property (retain, nonatomic) UIImageView *liveTag;
@property (retain, nonatomic) CAGradientLayer *degradeColorLayer;
@property (retain, nonatomic) CAGradientLayer *degradeColorLayerForAnimation;
@property (retain, nonatomic) CAShapeLayer *degradeClipLayer;
@property (retain, nonatomic) CAShapeLayer *degradeClipLayerForAnimation;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isSkylightAvatarAnimationOptimize;
@property (nonatomic) BOOL showColorGradient;
@property (nonatomic) long long liveMarkViewType;
@property (nonatomic) double requestStartTimeStamp;
@property (nonatomic) double realStartTimeStamp;
@property (copy, nonatomic) NSString *identifyKey;
@property (nonatomic) double delayTime;
@property (retain, nonatomic) NSMutableDictionary *trackContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWELiveInteractionDOUYINHTSAdapterClass;

- (void)setHidden:(BOOL)a0;
- (id)aAWEPadModuleAdapter;
- (void)setMarkLayerGradientColor:(id)a0;
- (void)stopAnimationWithView:(id)a0;
- (void)startAnimationWithView:(id)a0 showLiveTag:(BOOL)a1 withURLs:(id)a2 type:(long long)a3 interval:(double)a4 showColorGradient:(BOOL)a5;
- (void)startAnimationWithView:(id)a0 withURLs:(id)a1 showLiveTag:(BOOL)a2;
- (void)startAnimationWithView:(id)a0 showLiveTag:(BOOL)a1 type:(long long)a2;
- (void)setMarkLayerGradientColorWithType:(long long)a0;
- (void)startSlowerAnimationWithView:(id)a0 syncStartTime:(double)a1;
- (void)adjustSkylightAnimationLayerFrame;
- (void)supposeToAnimateWithEnterFromMerge:(id)a0 enterMethod:(id)a1 identifyKey:(id)a2 extra:(id)a3;
- (void)startNewBreatheAnimationWithView:(id)a0 syncStartTime:(double)a1;
- (void)startAnimationWithView:(id)a0 showLiveTag:(BOOL)a1 withURLs:(id)a2 type:(long long)a3 interval:(double)a4;
- (void)startOuterCircleBreatheAnimationWithView:(id)a0 syncStartTime:(double)a1;
- (void)startNewBreatheAnimationWithView:(id)a0 syncStartTime:(double)a1 isSpecial:(BOOL)a2;
- (id)livingMarkViewGradientColors:(BOOL)a0;
- (void)setFrameRateRangeIfNeeded:(id)a0;
- (BOOL)enablePerformanceTrack;
- (void)trackLiveHeadAnimationWithTrace:(id)a0;
- (void)resetTrackerData;
- (void)adjustSublayersIfNeeded:(BOOL)a0;
- (void)startAnimationWithView:(id)a0 showLiveTag:(BOOL)a1;
- (void)startAnimationWithView:(id)a0 showLiveTag:(BOOL)a1 withURLs:(id)a2 type:(long long)a3;
- (void)startAnimationWithView:(id)a0 showLiveTag:(BOOL)a1 withURLs:(id)a2 type:(long long)a3 interval:(double)a4 viewAnimationScale:(double)a5 maskAnimationScale:(double)a6 showColorGradient:(BOOL)a7;
- (void)hideDegradeLiveheadLayer:(BOOL)a0;
- (id)generateGreyThemeImage:(id)a0;
- (id)aAWELiveInteractionDOUYINHTSAdapter;
- (void)_addAnimationToMarkClipLayer:(float)a0 interval:(double)a1 maskAnimationScale:(double)a2;
- (void)_addSlowerAnimationToMarkClipLayer:(float)a0 timeOffset:(double)a1;
- (void)startAnimationWithView:(id)a0 showLiveTag:(BOOL)a1 withURLs:(id)a2 type:(long long)a3 interval:(double)a4 viewAnimationScale:(double)a5 maskAnimationScale:(double)a6;
- (void)startAnimationWithView:(id)a0;
- (void)setStaticLiveStyle:(id)a0 showLiveTag:(BOOL)a1;
- (void)stopAllAnimationWithView:(id)a0;
- (void)_addAnimationToMarkClipLayer:(float)a0;
- (void)animationDidStart:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;

@end
