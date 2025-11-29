@class UITapGestureRecognizer, NSString, UIVisualEffectView, UIImageView, UILabel, NSTimer, AWEHPTabLandingRollBackFloatButtonConfig;

@interface AWEHPTabLandingRollBackFloatButton : UIView <AWEHPTabLandingRollBackComponentProtocol>

@property (nonatomic) long long state;
@property (nonatomic) BOOL isFolded;
@property (retain, nonatomic) AWEHPTabLandingRollBackFloatButtonConfig *config;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *leftIconView;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (retain, nonatomic) NSTimer *autoDismissTimer;
@property (retain, nonatomic) NSTimer *autoFoldTimer;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (nonatomic) double iconSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_resumeTimer;
- (void)p_pauseTimer;
- (void)p_stopTimer;
- (void)expend;
- (BOOL)showOnView:(id)a0 clickCallBack:(id /* block */)a1 dismissCallBack:(id /* block */)a2;
- (double)expendWidth;
- (double)minTop;
- (double)maxBottom;
- (void)p_startTimerIfNeed;
- (void)p_dismissWithType:(long long)a0;
- (double)foldWidth;
- (double)bigFontFloat:(double)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)appDidEnterBackground:(id)a0;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (double)currentScale;
- (void)setupUI;
- (void)singleTap:(id)a0;
- (void)fold;

@end
