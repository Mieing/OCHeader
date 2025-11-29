@class NSString, NSMutableArray;
@protocol DDanmakuRenderDelegate;

@interface DDanmakuAnimationRender : NSObject <DDanmakuRenderEngineProtocol>

@property (weak, nonatomic) id<DDanmakuRenderDelegate> renderEngineDelegate;
@property (retain, nonatomic) NSMutableArray *allDisplayingDanmakusArray;
@property (nonatomic) unsigned long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPlaySpeedFactor:(double)a0;
- (void)pauseDisplayingDanmakuByID:(id)a0;
- (void)resumeDisplayingDanmakuByID:(id)a0;
- (void)configWithDelegate:(id)a0;
- (long long)danmakuRenderType;
- (void)didAddDanmaku:(id)a0 inContainerView:(id)a1;
- (void)didRemoveDanmaku:(id)a0 inContainerView:(id)a1;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;

@end
