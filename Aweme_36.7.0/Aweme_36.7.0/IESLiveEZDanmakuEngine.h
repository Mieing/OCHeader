@class NSMutableDictionary, IESLiveEZDanmakuCanvas, IESLiveEZDanmakuClock, NSString;
@protocol IESLiveEZDanmakuEngineDelegate;

@interface IESLiveEZDanmakuEngine : NSObject <IESLiveEZDanmakuDispatcherDelegate>

@property (retain, nonatomic) IESLiveEZDanmakuClock *clock;
@property (retain, nonatomic) IESLiveEZDanmakuCanvas *canvas;
@property (retain, nonatomic) NSMutableDictionary *dispatcherMap;
@property (weak, nonatomic) id<IESLiveEZDanmakuEngineDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)engineWithCanvasClassName:(id)a0;

- (void)assembleDispatcher:(id)a0;
- (void)attachCanvasToContainerView:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)usingCanvas;
- (void)fragmentOrientationChanged:(long long)a0;
- (void)pauseEngine;
- (void)endEngine;
- (void)clearAllQueuedSpirits;
- (void)fireDanmakuWithSpirit:(id)a0;
- (void)deactivateAllSpirits;
- (double)timeForDispatcher:(id)a0;
- (void)willActiveDanmakuSpirit:(id)a0 inDispatcher:(id)a1;
- (id)canvasToRenderSpiritForDispatcher:(id)a0;
- (id)initWithCanvasClassName:(id)a0;
- (void)p_updateWithTime:(double)a0;
- (void)tapCanvas:(id)a0;
- (id)getDefaultDispatcher;
- (void)resumeEngine;
- (void).cxx_destruct;
- (void)startEngine;

@end
