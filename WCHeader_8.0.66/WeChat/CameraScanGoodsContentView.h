@class UIImageView, CameraScanGoodsPinView, UIView, NSMutableArray, CameraScanBlurEffectView;
@protocol CameraScanGoodsContentViewDelegate, CameraScanGoodsMarkDotViewInterface;

@interface CameraScanGoodsContentView : CameraScanBaseContentView

@property (nonatomic) unsigned long long markDotType;
@property (retain, nonatomic) NSMutableArray *scanDotViewList;
@property (retain, nonatomic) CameraScanGoodsPinView *pinView;
@property (retain, nonatomic) UIImageView *fullScreenBgView;
@property (weak, nonatomic) id<CameraScanGoodsContentViewDelegate> delegate;
@property (retain, nonatomic) UIView<CameraScanGoodsMarkDotViewInterface> *markDotView;
@property (retain, nonatomic) CameraScanBlurEffectView *blurView;
@property (retain, nonatomic) UIView *contentMaskView;
@property (nonatomic) BOOL bShouldHideCaptureView;

- (id)initWithDelegate:(id)a0 markDotType:(unsigned long long)a1;
- (void)setupAllSubviews;
- (void)setupFullScreenBgView;
- (void)setupBlurView;
- (void)setupScanDotViewList;
- (void)setupPinView;
- (void)setupMarkdotView;
- (void)setupMaskView;
- (void)layoutSubviews;
- (id)getOneScanDotView;
- (void)startScanningAnimation:(id)a0;
- (void)stopScanningAnimation;
- (void)startMarkingAnimation:(struct CGPoint { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (void)stopMarkingAnimation;
- (void)startShakingAnimation;
- (void)stopShakingAnimation;
- (void).cxx_destruct;

@end
