@class NSMutableDictionary, IESLiveCarnivalDanmakuSettings, CALayer, UIView, CIContext;

@interface IESLiveEZDanmakuContourCanvas : IESLiveEZDanmakuCanvas

@property (retain, nonatomic) UIView *presentionContainer;
@property (retain, nonatomic) UIView *danmakuContainerView;
@property (nonatomic) double lastMaskLayerTiming;
@property (retain, nonatomic) CALayer *maskLayer;
@property (retain, nonatomic) CIContext *ciContext;
@property (retain, nonatomic) IESLiveCarnivalDanmakuSettings *carnivalDanmakuSettings;
@property (retain, nonatomic) CALayer *gradientBorderLayer;
@property (retain, nonatomic) NSMutableDictionary *contourMap;
@property (nonatomic) BOOL drawContourPath;
@property (retain, nonatomic) UIView *contourPathView;

- (void)addDanmakuView:(id)a0;
- (void)updateWithTime:(double)a0;
- (void)setupWithCarnivalDanmakuSettings:(id)a0;
- (void)fragmentOrientationChanged:(long long)a0;
- (void)handleWithMaskContourInfo:(id)a0;
- (void)p_createMaskLayerWithContourInfo:(id)a0;
- (void)p_drawContourPathWithContourInfo:(id)a0;
- (void)updateLayoutInfo:(long long)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })canvasBounds;

@end
