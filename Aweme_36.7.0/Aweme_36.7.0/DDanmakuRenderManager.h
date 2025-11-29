@class NSMutableDictionary;
@protocol DDanmakuRenderDelegate, DDanmakuRenderEngineProtocol;

@interface DDanmakuRenderManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *danmakuRenders;
@property (retain, nonatomic) id<DDanmakuRenderEngineProtocol> currentDanmakuRender;
@property (weak, nonatomic) id<DDanmakuRenderDelegate> renderDelegate;

- (void)switchToRender:(long long)a0;
- (void)registerRenderType:(long long)a0;
- (id)currentRender;
- (id)initWithRenderDelegate:(id)a0;
- (Class)renderClassWithType:(long long)a0;
- (void).cxx_destruct;

@end
