@class UIPanGestureRecognizer, UITapGestureRecognizer, NSString, UILabel, AWEMusicPlayerProgressSlider, UIView;
@protocol AWEMusicPlayerProgressViewDelegate;

@interface AWEMusicPlayerProgressView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *backLine;
@property (retain, nonatomic) UIView *lineContainer;
@property (retain, nonatomic) UIView *cacheLine;
@property (retain, nonatomic) UIView *playLine;
@property (nonatomic) double startWidth;
@property (retain, nonatomic) UIView *startCircle;
@property (retain, nonatomic) UIView *endCircle;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) UIView *loadingBackView;
@property (retain, nonatomic) UILabel *playingTimeLabel;
@property (retain, nonatomic) UILabel *durationTimeLabel;
@property (retain, nonatomic) AWEMusicPlayerProgressSlider *slider;
@property (retain, nonatomic) UIPanGestureRecognizer *gesture;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) double gestureStartPlayLineWidth;
@property (nonatomic) double cacheProgress;
@property (nonatomic) double playProgress;
@property (nonatomic) BOOL isDragging;
@property (nonatomic) double duration;
@property (weak, nonatomic) id<AWEMusicPlayerProgressViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)formatTime:(double)a0;
- (void)_updatePlayProgress:(double)a0 animation:(BOOL)a1;
- (double)progressOfGesture:(id)a0;
- (void)gestureDidEndProgress:(double)a0;
- (void)panGestureBegin:(id)a0;
- (void)gestureChanged:(id)a0 isDragging:(BOOL)a1;
- (void)panGestureDidEnd:(id)a0;
- (double)_progressOfGestureBounded:(double)a0;
- (double)progressOfPanGesture:(id)a0;
- (void)updateCacheProgressTime:(double)a0 animation:(BOOL)a1;
- (void)updatePlayProgressTime:(double)a0 animation:(BOOL)a1;
- (void)setupCoverLine:(id)a0;
- (void).cxx_destruct;
- (void)startLoading;
- (void)setStyle:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)stopLoading;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)setup;
- (void)tapGesture:(id)a0;
- (void)panGesture:(id)a0;

@end
