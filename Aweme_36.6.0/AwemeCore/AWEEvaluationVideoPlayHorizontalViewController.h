@class UIPanGestureRecognizer, NSString, UIPinchGestureRecognizer, UILabel, NSMutableArray, UIButton;

@interface AWEEvaluationVideoPlayHorizontalViewController : AWEEvaluationVideoPlayViewController <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UILabel *lottieDiscription;
@property (retain, nonatomic) UIButton *lottieButton;
@property (retain, nonatomic) NSMutableArray *videoEngineArray;
@property (retain, nonatomic) NSMutableArray *playViewArray;
@property (retain, nonatomic) NSMutableArray *sourceVideoList;
@property (retain, nonatomic) NSMutableArray *videoURLNumberOfData;
@property (nonatomic) long long shortVideoIndex;
@property (retain, nonatomic) NSMutableArray *videoLengthArray;
@property (nonatomic) BOOL isSingleSetted;
@property (nonatomic) BOOL isRandom;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UIPinchGestureRecognizer *pinGesture;
@property (nonatomic) double lastScale;
@property (nonatomic) double maxScale;
@property (nonatomic) double minScale;
@property (nonatomic) unsigned long long originSupportOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoEngine:(id)a0 loadStateDidChanged:(unsigned long long)a1;
- (void)videoEngineReadyToDisPlay:(id)a0;
- (void)interfaceOrientationAdaptTo:(long long)a0;
- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })a0 forView:(id)a1;
- (void)setupPlayerView;
- (id)initWithTaskData:(id)a0;
- (void)p_canclePreloadWithURLs;
- (void)adjustFrame:(id)a0 withView:(id)a1 width:(double)a2 height:(double)a3;
- (void)viewMove:(id)a0;
- (void)viewZoom:(id)a0;
- (void)gotoClosePage;
- (void)p_configAllVideoTask;
- (void)makeViewLayout;
- (void)setupLottieView;
- (void)p_configPreloadWithURLs;
- (void)setPlayerURL;
- (id)paramater;
- (id)currentVideoEngine;
- (BOOL)isSecondVideoPlayed;
- (void)progressSliderTouchEnded:(id)a0;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void)close;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;

@end
