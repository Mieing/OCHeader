@class NSString, NSMutableDictionary, NSMutableArray, NSNumber;

@interface WAWebViewPlugin_CustomCanvas : WAWebViewPlugin_embedView <IMMQuartz2DDelegate> {
    long long _tagMax;
    NSMutableDictionary *_cachedImage;
    NSMutableArray *_completionHandlerList;
    NSNumber *_oldScrollEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getImage:(id)a0;
- (void)onTouchDown:(id)a0;
- (void)onTouchBegin:(id)a0 canvas:(id)a1;
- (void)onTouchMove:(id)a0 canvas:(id)a1;
- (void)onTouchEnd:(id)a0 canvas:(id)a1;
- (void)onTouchCancel:(id)a0 canvas:(id)a1;
- (void)onLongPress:(id)a0 canvas:(id)a1;
- (void)onCanvasDrawRectFinished:(id)a0;
- (void)setInteractionEnable:(BOOL)a0 mode:(int)a1 canvasId:(unsigned int)a2;
- (unsigned int)insertCanvas:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 canvasId:(unsigned int)a1 parentId:(unsigned int)a2 ZIndex:(long long)a3;
- (void)setUserData:(id)a0 canvasId:(unsigned int)a1;
- (void)drawCanvas:(unsigned int)a0 actions:(id)a1 reset:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)canvasToImage:(unsigned int)a0;
- (id)canvasViewWithCanvasID:(unsigned int)a0;
- (id)canvasToImageData:(unsigned int)a0 targetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGSize { double x0; double x1; })canvasSizeWithCanvasID:(unsigned int)a0;
- (double)canvasScaleWithCanvasID:(unsigned int)a0;
- (void).cxx_destruct;

@end
