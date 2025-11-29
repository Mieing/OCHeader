@class UIColor, NSMutableDictionary, UIImageView, MMTimer, UIView;
@protocol SightIconViewDelegate;

@interface SightIconView : UIView {
    int m_iconType;
    MMTimer *m_timer;
    double m_progress;
    double m_forceStep;
    double m_animIntermediate;
    double m_animIntermediate2;
}

@property (retain, nonatomic) UIView *blurView;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIColor *pressColor;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIColor *blurColor;
@property (nonatomic) BOOL enableBlurEffect;
@property (retain, nonatomic) NSMutableDictionary *iconTypeRadius;
@property (weak, nonatomic) id<SightIconViewDelegate> delegate;
@property (nonatomic) double radius;
@property (nonatomic) double progress;
@property (nonatomic) double progressStep;
@property (retain, nonatomic) UIColor *barColor;
@property (retain, nonatomic) UIColor *bgColor;
@property (retain, nonatomic) UIColor *staticIconFnColor;
@property (retain, nonatomic) UIColor *dynamicIconFnColor;
@property (retain, nonatomic) UIColor *dynamicIconBgColor;
@property (retain, nonatomic) UIColor *dynamicBgColor;
@property (retain, nonatomic) UIColor *exclaIconColor;
@property (nonatomic) int iconType;
@property (nonatomic) BOOL useBigIconForPlay;
@property (nonatomic) BOOL addRoundBorder;

+ (id)PlayBtnCover:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)PlayBtnOperation:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)PlayBtnOperation:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 color:(id)a1;
+ (id)defaultIcon:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(int)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 blurColor:(id)a1;
- (void)commInit;
- (void)layoutSubviews;
- (void)dealloc;
- (void)fullRunWithTime:(double)a0;
- (void)forceSetProgressFrom:(double)a0 toProgress:(double)a1;
- (void)forceSetProgressInCommonModes;
- (void)forceSetProgressInCommonModesFrom:(double)a0 toProgress:(double)a1;
- (double)getCurrentProgressValue;
- (void)setIconType:(int)a0 andRadius:(double)a1;
- (void)setIconWithImage:(id)a0 Radius:(double)a1 Color:(id)a2;
- (void)setIconWithImage:(id)a0 Radius:(double)a1 Color:(id)a2 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3;
- (void)setBgViewColor:(id)a0;
- (void)setStaticIconBackgroundWithRadius:(double)a0;
- (double)radiusForIconType:(int)a0;
- (void)displayCurView;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawNonAnimIcon;
- (void)drawRoundBackgroundWithContext:(struct CGContext { } *)a0 Radius:(double)a1;
- (void)drawProgressWithContext:(struct CGContext { } *)a0 Radius:(double)a1 Progress:(double)a2;
- (void)drawWheelWithRadius:(double)a0;
- (void)drawExclaWithRadius:(double)a0;
- (void)drawExclaFilledWithRadius:(double)a0;
- (void)drawTriangleWithRadius:(double)a0;
- (void)drawDownloadWithRadius:(double)a0;
- (void)drawPauseWithRadius:(double)a0;
- (void)startTimer;
- (void)stopTimer;
- (void)updateAnimation;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
