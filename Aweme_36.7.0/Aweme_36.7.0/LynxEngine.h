@class LynxTemplateBundle, LynxTemplateRender, NSMutableArray, LynxShadowNodeOwner;
@protocol LynxUIRendererProtocol;

@interface LynxEngine : NSObject {
    struct unique_ptr<lynx::shell::LynxEngineWrapper, std::default_delete<lynx::shell::LynxEngineWrapper>> { struct LynxEngineWrapper *__ptr_; } engine_wrapper_;
}

@property (weak, nonatomic) LynxTemplateRender *lynxTemplateRender;
@property (retain, nonatomic) LynxTemplateBundle *templateBundle;
@property (nonatomic) long long engineState;
@property (retain, nonatomic) id<LynxUIRendererProtocol> lynxUIRenderer;
@property (retain, nonatomic) LynxShadowNodeOwner *shadowNodeOwner;
@property (weak, nonatomic) NSMutableArray *engineQueueRef;

- (void)attachTemplateRender:(id)a0;
- (id)initWithTemplateRender:(id)a0;
- (void *)getEngineNative;
- (void)registerToReuse;
- (BOOL)isRunOnCurrentTemplateRender:(id)a0;
- (void)detachEngine;
- (void).cxx_destruct;
- (void)destroy;
- (BOOL)hasLoaded;
- (BOOL)canBeReused;
- (id).cxx_construct;

@end
