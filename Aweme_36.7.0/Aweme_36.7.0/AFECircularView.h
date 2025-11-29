@class UIView, NSString, DTFUploadWaveLayer, CALayer, UIImageView, UIButton, NSDictionary, AFECircleProgressBar, AFEStatusBar, UILabel, DTFTextLayer;
@protocol AFECircularViewProtocol;

@interface AFECircularView : UIView <AFEScanViewProtocol> {
    NSDictionary *_stopScanTipAttrDict;
    NSDictionary *_brandTipAttrDict;
    unsigned long long _screenWidthSize;
}

@property (retain, nonatomic) AFEStatusBar *statusBar;
@property (retain, nonatomic) CALayer *compactLayer;
@property (retain, nonatomic) CALayer *cameraLayer;
@property (nonatomic) float cameraStartY;
@property (nonatomic) float cameraEndY;
@property (nonatomic) BOOL isWish;
@property (retain, nonatomic) DTFTextLayer *bottomTipLayer;
@property (retain, nonatomic) DTFTextLayer *tipLayer;
@property (retain, nonatomic) CALayer *tipBackgroundLayer;
@property (retain, nonatomic) DTFTextLayer *powerByLayer;
@property (retain, nonatomic) AFECircleProgressBar *progressBar;
@property (retain, nonatomic) DTFUploadWaveLayer *waveLayer;
@property (retain, nonatomic) DTFTextLayer *stopScanTipLayer;
@property (weak, nonatomic) id<AFECircularViewProtocol> aFECirViewDelegate;
@property (retain, nonatomic) UIButton *stopScanTipButton;
@property (nonatomic) double widthCoefficient;
@property (copy, nonatomic) NSDictionary *bottomTipAttrDict;
@property (copy, nonatomic) NSDictionary *tipAttrDict;
@property (nonatomic) BOOL supportCustomUI;
@property (retain, nonatomic) UIView *tipView;
@property (retain, nonatomic) UIImageView *tipImageView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (nonatomic) struct CGSize { double width; double height; } tipTextSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_buildShowView;
- (void)setPlayBtnIcon:(id)a0;
- (void)setScreenRotation:(BOOL)a0;
- (void)startWave;
- (void)stopWave;
- (void)onStopScanButton;
- (void)setNaviBarAlpha:(double)a0;
- (void)showPercent:(double)a0;
- (id)initWithSupportCustomUI:(BOOL)a0;
- (void)addCameraPreviewLayer:(id)a0;
- (void)_addCameraPreviewLayer;
- (void)_addProgressBar;
- (void)_addStatusBar;
- (void)_addBottomTipLayer;
- (void)_addCompactLayer;
- (void)_addPowerByLayer;
- (void)_addWaveLayer;
- (void)_addStopScanTipLayer;
- (void)_addTipView;
- (void)powerByLayerHidden:(BOOL)a0;
- (void)setStopScanButtonHidden:(BOOL)a0;
- (void)setBottomTipHidden:(BOOL)a0;
- (void)showBottomTip:(id)a0;
- (void)showBrandTip:(id)a0;
- (void)showStopScanTip:(id)a0;
- (void)showtip:(id)a0;
- (void)hideViewList;
- (void)showViewList;
- (void).cxx_destruct;
- (void)_updateView;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setDelegate:(id)a0;
- (void)setMaskImage:(id)a0;

@end
