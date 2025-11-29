@class UIStackView, AWEBasicModeDescriptionElement, AWEBasicModeMusicElement, AWEBasicModeAvatarElement, AWEBasicModeRightButtonElement, UILongPressGestureRecognizer, AWEBasicModePlayInteractionVideoPauseIcon, NSString, AWEAwemeModel, AWEBasicModeMusicInfoElement, AWEBasicModeRiskInfoElement, AWEBasicModeAuthorElement;
@protocol AWEBasicModeDisplayViewControllerProtocol;

@interface AWEBasicModePlayInteractionViewController : UIViewController <UIGestureRecognizerDelegate, AWEBasicModePlayInteractionViewControllerProtocol>

@property (retain, nonatomic) AWEBasicModeAuthorElement *authorElement;
@property (retain, nonatomic) AWEBasicModeDescriptionElement *descriptionElement;
@property (retain, nonatomic) AWEBasicModeMusicInfoElement *musicInfoElement;
@property (retain, nonatomic) AWEBasicModeRightButtonElement *likeElement;
@property (retain, nonatomic) AWEBasicModeRightButtonElement *commentElement;
@property (retain, nonatomic) AWEBasicModeRightButtonElement *shareElement;
@property (retain, nonatomic) AWEBasicModeMusicElement *musicElement;
@property (retain, nonatomic) AWEBasicModeAvatarElement *avatarElement;
@property (retain, nonatomic) AWEBasicModeRiskInfoElement *riskInfoElement;
@property (retain, nonatomic) UIStackView *leftContainer;
@property (retain, nonatomic) UIStackView *rightContainer;
@property (retain, nonatomic) AWEBasicModePlayInteractionVideoPauseIcon *pauseIcon;
@property (nonatomic) unsigned long long playerStatus;
@property (nonatomic) double lastClickTimestamp;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEBasicModeDisplayViewControllerProtocol> videoDelegate;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL fromDetail;

+ (BOOL)resolveInstanceMethod:(SEL)a0;
+ (BOOL)resolveClassMethod:(SEL)a0;

- (void)playLoadingAnimation;
- (void)playMusicAnimations;
- (void)stopMusicAnimations;
- (BOOL)touchCapturedWithPosition:(struct CGPoint { double x0; double x1; })a0;
- (double)p_stackContainerViewBottomOffset;
- (void)onPlayer:(id)a0 didSingleClick:(id)a1;
- (void)pauseMusicAnimations;
- (void)resumeMusicAnimations;
- (double)p_leftContainerWidth;
- (void)p_updateInteractionElementsStatus;
- (void)p_updateDataForContainerElements:(id)a0;
- (BOOL)shouldAdjustFullScreenCellDisplay;
- (void)p_onScreenLongPress:(id)a0;
- (BOOL)p_isVideoReady;
- (void)onPlayer:(id)a0 didDoubleClick:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)elements;
- (void)pause:(BOOL)a0;
- (void)reset;
- (void)viewDidLoad;
- (void)setBottomMargin:(double)a0;
- (void)stopLoadingAnimation;

@end
