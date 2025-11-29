@class UIView, NSString, UIImage, NSMutableDictionary, WCFinderMinimizeFloatingStateView, WCFinderMinimizePlayCtrl, MiniAudioTaskContentView, MMUIButton;
@protocol WCFinderMinimizeContentViewProtocol, WCFinderMinimizeFloatingViewDelegate;

@interface WCFinderMinimizeFloatingView : UIView <WCFinderMinimizePlayCtrlPlayDelegate, MiniAudioTaskContentViewDelegate>

@property (retain, nonatomic) MMUIButton *coverBtnView;
@property (retain, nonatomic) UIView<WCFinderMinimizeContentViewProtocol> *displayView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originFrame;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) NSMutableDictionary *reportUDFKV;
@property (retain, nonatomic) UIView *minimizeAnimatingView;
@property (retain, nonatomic) UIView *maxmizeAnimatingView;
@property (retain, nonatomic) WCFinderMinimizeFloatingStateView *stateView;
@property (retain, nonatomic) MMUIButton *audioModeBtn;
@property (weak, nonatomic) WCFinderMinimizePlayCtrl *playCtrl;
@property (weak, nonatomic) MiniAudioTaskContentView *outterView;
@property (weak, nonatomic) id<WCFinderMinimizeFloatingViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)displayCornerRadius;
+ (double)cornerRaidus;
+ (struct CGSize { double x0; double x1; })fitMinimizeNotCutFloatingSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })fitMinimizeNotCutFloatingSizeForRound:(struct CGSize { double x0; double x1; })a0;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToSuperview;
- (void)willMoveToWindow:(id)a0;
- (void)updatePlayBtnState:(BOOL)a0;
- (void)prepareCoverView;
- (void)layoutSubviews;
- (void)updatePlayType;
- (void)onAudioModeBtnClicked;
- (void)onCloseButtonClicked;
- (void)onClickFloatingView;
- (id)prepareRestoreContentView;
- (void)onClickPlayBtn;
- (void)onMediaPlayStateChanged:(id)a0;
- (void)onMediaPlayInfoUpdate:(id)a0;
- (void)onMediaPlayContentViewUpdated:(id)a0;
- (void)onMediaPlayContentViewSizeChanged:(id)a0;
- (void)updateMinimizeInfo:(id)a0 reportUDFKV:(id)a1;
- (void)updateDisplayView:(id)a0;
- (void)updateDisplayViewSize;
- (void)updateCurDisplayViewWithReportUDFKV:(id)a0;
- (void)cleanContent;
- (void)updateFoldStatus:(BOOL)a0;
- (id)floatingFrames;
- (id)tmpSnapImageForMinimizeAnimation;
- (void)onMiniAudioContentViewCloseButtonClicked;
- (void)onMiniAudioContentViewPlayPauseButtonClicked:(BOOL)a0;
- (void)onMiniAudioContentViewOuterContentClicked;
- (void)onMiniAudioContentViewPlayTypeButtonClicked:(long long)a0;
- (void)onMiniAudioContentSizeChangeTo:(struct CGSize { double x0; double x1; })a0 anime:(BOOL)a1;
- (void)onMiniAudioAnimeProgress:(double)a0;
- (void)sizeRecoverToBase:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
