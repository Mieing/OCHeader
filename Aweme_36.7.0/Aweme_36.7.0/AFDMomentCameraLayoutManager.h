@class NSString, UIView;

@interface AFDMomentCameraLayoutManager : NSObject <AFDCameraViewLayoutProtocol>

@property (class, readonly, nonatomic) double contentTopMargin;

@property (retain, nonatomic) UIView *preview;
@property (retain, nonatomic) UIView *titleLabel;
@property (retain, nonatomic) UIView *titleButton;
@property (retain, nonatomic) UIView *captureButton;
@property (retain, nonatomic) UIView *videoCaptureView;
@property (retain, nonatomic) UIView *durationView;
@property (retain, nonatomic) UIView *cameraLeftButton;
@property (retain, nonatomic) UIView *cameraRightButton;
@property (retain, nonatomic) UIView *scaleButton;
@property (retain, nonatomic) UIView *deleteButton;
@property (retain, nonatomic) UIView *downloadButton;
@property (retain, nonatomic) UIView *publishButton;
@property (retain, nonatomic) UIView *filterScrollView;
@property (retain, nonatomic) UIView *focusView;
@property (retain, nonatomic) UIView *privacyInfoView;
@property (retain, nonatomic) UIView *shareListView;
@property (retain, nonatomic) UIView *tipLabel;
@property (retain, nonatomic) UIView *captureRatioButton;
@property (retain, nonatomic) UIView *interactionView;
@property (retain, nonatomic) UIView *bubbleAnchor;
@property (retain, nonatomic) UIView *holderView;
@property (retain, nonatomic) UIView *slidingTabbarView;
@property (retain, nonatomic) UIView *slidingVCView;
@property (retain, nonatomic) UIView *textStickerContainerView;
@property (retain, nonatomic) UIView *textTrashButton;
@property (retain, nonatomic) UIView *textContainerView;
@property (readonly, weak, nonatomic) UIView *containerView;
@property (nonatomic) BOOL isLargerCaptureRatio;
@property (nonatomic) BOOL shouldShowNewJourneyTips;
@property (nonatomic) unsigned long long frameRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getContentHeight;
+ (long long)captureButtonBottomMargin;
+ (double)previewWidthForRatio:(unsigned long long)a0;
+ (double)getRatio;
+ (double)getRatioJudge;
+ (BOOL)bottomOverlapHidden;
+ (double)cameraPreviewOffsetY;
+ (double)previewToNavigationBarMargin;
+ (double)navigationBarHeight;
+ (double)statusBarHeight;
+ (double)previewWidth;
+ (double)previewCornerRadius;

- (void)setAudioRecordContainerView:(id)a0;
- (void)updateCaptureRatioViewAnimated:(BOOL)a0;
- (void)setSecondPreview:(id)a0;
- (void)setupConstraintsWithCaptureRatio;
- (void)updateCaptureRatioView;
- (void)updateMomentTextContainerViewConstraintsWithContainerViewYOffset:(double)a0 keyboardAnimationDuration:(double)a1;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithContainerView:(id)a0;
- (void)layoutSubviews;
- (void)updateAllConstraints;

@end
