@class NSString, UIView;
@protocol DDanmakuRenderContext, DDanmakuContainerViewProtocol;

@interface DDanmakuMetalRTLAdapter : NSObject <DDanmakuRTLTrackAdapterProtocol>

@property (weak, nonatomic) UIView<DDanmakuContainerViewProtocol> *canvas;
@property (weak, nonatomic) id<DDanmakuRenderContext> renderContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)currentRenderType;
- (void)updateWithPassingTime:(double)a0 displayDanmakus:(id)a1 trackFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)refreshLayOutForAllDanmakus:(id)a0 trackFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)danmakuContentSizeDidChanged:(id)a0;
- (void)unloadDanmaku:(id)a0;
- (void)adjustDanmakuPositionIfNeededBetweenPrevious:(id)a0 current:(id)a1 trackFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 offsetX:(double)a3;
- (double)caculateDanmakuRemainLifeTime:(id)a0 totalLifeTime:(double)a1 speedFactor:(double)a2;
- (double)spacingBetweenPreviousDanmaku:(id)a0 chasingDanmaku:(id)a1 trackFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)adjustDanmakuLifeTimeToFitNewFrame:(id)a0 trackLength:(double)a1;
- (void)updateDanmakuDescriptor:(id)a0 trackFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
