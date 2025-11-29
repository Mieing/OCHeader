@class UIView, NSString, UIButton, DVEBubbleView, NSMutableArray, DVEFramePickerView, DVEVCContext, UIViewController, UILabel;
@protocol DVETrackEventProtocol, DVECoreCanvasProtocol, DVENLEInterfaceProtocol;

@interface DVEPreviewViewController : UIViewController <DVEFramePickerDelegate, DVEPreviewZoomTransitionInnerContextProvider>

@property (retain, nonatomic) UILabel *durationStartLabel;
@property (retain, nonatomic) UILabel *durationEndLabel;
@property (retain, nonatomic) UILabel *separateLabel;
@property (retain, nonatomic) DVEBubbleView *timebubble;
@property (retain, nonatomic) UIView *preview;
@property (retain, nonatomic) DVEFramePickerView *frameslider;
@property (retain, nonatomic) UIView *bottomView;
@property (weak, nonatomic) id<DVECoreCanvasProtocol> canvasEditor;
@property (weak, nonatomic) id<DVENLEInterfaceProtocol> nle;
@property (weak, nonatomic) id<DVETrackEventProtocol> trackEventer;
@property (retain, nonatomic) NSMutableArray *frames;
@property (nonatomic) double videoTimeLength;
@property (nonatomic) BOOL playStatusBeforeTouch;
@property (nonatomic) BOOL isPlayingWhenEnter;
@property (nonatomic) BOOL autoContinuePlayWhenEnter;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (weak, nonatomic) DVEVCContext *vcContext;
@property (nonatomic) BOOL isPlayed;
@property (weak, nonatomic) UIViewController *parentVC;
@property (retain, nonatomic) UIButton *playButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)zoomTransitionAllowedTriggerDirection;
- (id)zoomTransitionEndView;
- (void)willTransitionIn:(id /* block */)a0;
- (void)actionMethod:(id)a0;
- (void)trackEventClickFullScreenButton;
- (id)initWithContext:(id)a0 isPLayed:(BOOL)a1 parentVC:(id)a2 closeBlock:(id /* block */)a3;
- (void)updatePreviewSize;
- (id)previewTransitionBottomView;
- (void)buildLayout;
- (void)updatePreviewWithCurrentTimeRatio:(double)a0;
- (void)touchPause;
- (void)upPlay;
- (void)timeBubbleAnimation;
- (void)setUpVideoClipSegmentData;
- (void)checkAndChangePlayStatus;
- (void)syncTimeAndOffset;
- (void)setUpVideoTimeLength;
- (void)trackEventClickPlayButton;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (long long)preferredStatusBarStyle;
- (void)replay;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)updateVideoInfo;
- (void)handleTapGesture:(id)a0;
- (void)setupGestures;

@end
