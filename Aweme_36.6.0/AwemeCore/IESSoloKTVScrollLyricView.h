@class IESLiveLyricViewConfig, IESSoloKTVScrollLyricIndicator, IESSoloKTVImageMetalView, IESSoloKTVScrollLyricRender, UIScrollView, NSString, IESSoloKTVScrollLyricCountDownView;

@interface IESSoloKTVScrollLyricView : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) IESSoloKTVImageMetalView *mtkView;
@property (retain, nonatomic) IESSoloKTVScrollLyricRender *render;
@property (retain, nonatomic) IESSoloKTVScrollLyricCountDownView *countDownView;
@property (retain, nonatomic) IESSoloKTVScrollLyricIndicator *playIndicator;
@property (retain, nonatomic) IESLiveLyricViewConfig *config;
@property (nonatomic) BOOL enablePlayButton;
@property (nonatomic) BOOL enableCountDown;
@property (nonatomic) float topMargin;
@property (copy, nonatomic) id /* block */ didClickPlayButtonBlock;
@property (copy, nonatomic) id /* block */ canShowPlayButtonBlock;
@property (nonatomic) double playIndicatorStartOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateConfig:(id)a0;
- (void)updateCountDown:(BOOL)a0;
- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updatePlayingTime:(double)a0;
- (void)setPauseDraw:(BOOL)a0;
- (void)updateLyrics:(id)a0 autoStart:(BOOL)a1;
- (void)updatePlayButton:(BOOL)a0;
- (void)pausePlayingTimeUtil:(double)a0 currentTime:(double)a1;
- (void)updateLyrics:(id)a0 autoStart:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateBlend:(BOOL)a0;
- (void)showCountDownViewIfNeed;
- (void)dismissPlayIndicator;
- (void)showPlayIndicatorIfNeed;
- (void)dismissCountDownView;
- (BOOL)hasLyrics;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)init;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (id)createScrollView;
- (void)clean;

@end
