@class NSString, NSMutableDictionary, WAJSCoreService, NSNumber;

@interface WAWebViewPlugin_WebGLCanvas : WAWebViewPlugin_embedView <WAEAGLViewGestureDelegate> {
    NSNumber *_oldScrollEnabled;
}

@property (weak, nonatomic) WAJSCoreService *service;
@property (retain, nonatomic) NSMutableDictionary *canvasMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void)insertCanvas:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 canvasId:(int)a1 parentId:(unsigned int)a2 ZIndex:(long long)a3 block:(id /* block */)a4;
- (void)removeCanvas:(unsigned int)a0;
- (void)onTouchesBegin:(id)a0;
- (void)onTouchesEnd:(id)a0;
- (void)onTouchesCancel:(id)a0;
- (void).cxx_destruct;

@end
