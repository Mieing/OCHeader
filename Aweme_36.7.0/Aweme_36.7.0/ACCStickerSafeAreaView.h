@class NSString, UIView;
@protocol ACCStickerContainerProtocol, ACCStickerEventFlowProtocol;

@interface ACCStickerSafeAreaView : UIView <ACCStickerSafeAreaGuideLineProtocol>

@property (retain, nonatomic) UIView *bottomBorderLine;
@property (retain, nonatomic) UIView *leftGuideLine;
@property (retain, nonatomic) UIView *rightGuideLine;
@property (retain, nonatomic) UIView *bottomGuideLine;
@property (retain, nonatomic) UIView *topGuideLine;
@property (nonatomic) BOOL leftAdsorbed;
@property (nonatomic) BOOL rightAdsorbed;
@property (nonatomic) BOOL topAdsorbed;
@property (nonatomic) BOOL fastPanning;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } previousTransform;
@property (nonatomic) struct CGPoint { double x; double y; } previousCenter;
@property (nonatomic) double previousScale;
@property (nonatomic) double currentGestureScale;
@property (nonatomic) long long guideLineState;
@property (nonatomic) double defaultTopGuideInset;
@property (nonatomic) double defaultBottomGuideInset;
@property (nonatomic) BOOL enableNewLayout;
@property (nonatomic) BOOL limitedSafeArea;
@property (nonatomic) BOOL isEqualToEdge;
@property (nonatomic) BOOL shouldDealWithCanvasChange;
@property (nonatomic) struct CGSize { double width; double height; } mediaActualSize;
@property (nonatomic) BOOL disabled;
@property (weak, nonatomic) UIView<ACCStickerContainerProtocol, ACCStickerEventFlowProtocol> *stickerContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createPlugin;

- (BOOL)featureSupportSticker:(id)a0;
- (void)playerFrameChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)safeAreaChange:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)didChangeLocationWithOperationStickerView:(id)a0;
- (void)sticker:(id)a0 willHandleGesture:(id)a1;
- (void)sticker:(id)a0 didHandleGesture:(id)a1;
- (void)sticker:(id)a0 didEndGesture:(id)a1;
- (struct CGPoint { double x0; double x1; })fixOperatingStickerView:(id)a0 withWillChangeLocationWithCenter:(struct CGPoint { double x0; double x1; })a1;
- (id)createLine;
- (struct CGPoint { double x0; double x1; })fixStickerView:(id)a0 withWillChangeLocationWithCenter:(struct CGPoint { double x0; double x1; })a1;
- (void)updateWithPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 playerPreviewView:(id)a1;
- (void)updateGuideLineWithState:(long long)a0 animated:(BOOL)a1;
- (long long)implementedContainerFeature;
- (void)generateLightImpactFeedBack;
- (void)equalEdgeUpdateWithPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 playerPreviewView:(id)a1;
- (void)hiddenGuideLine;
- (BOOL)limitedSafeArea:(id)a0;
- (void)showGuideLineWithLine:(id)a0 offset:(double)a1 limitedShow:(BOOL)a2;
- (void)applyLineBitMask:(long long)a0 shouldSet:(BOOL)a1;
- (BOOL)shouldLimitStikerInMediaView:(id)a0;
- (void)checkAlignLineForStickerView:(id)a0;
- (BOOL)checkSafeWithStickerView:(id)a0;
- (BOOL)isStickerCenterOutMediaArea:(id)a0;
- (void)showLeftGuideLine:(BOOL)a0;
- (void)showRightGuideLine:(BOOL)a0;
- (void)showBottomGuideLine:(BOOL)a0;
- (void)showTopGuideLine:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadPlugin;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)pluginView;

@end
