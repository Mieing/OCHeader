@interface WeChat.MagicWeAppCardPixelBufferPlugin : NSObject <WeChat.IMBSclExternalViewDelegate> {
    void /* unknown type, empty encoding */ biz;
}

- (void)onCanvasViewCreated:(unsigned int)a0 view:(id)a1;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)a0;
- (void)onCanvasIdAndFrameSetIdBindWithCanvasId:(unsigned int)a0 frameSetId:(id)a1;
- (void)onCanvasViewLayout:(unsigned int)a0 view:(id)a1 left:(float)a2 top:(float)a3 width:(float)a4 height:(float)a5;
- (void)onCanvasViewDestroy:(unsigned int)a0 view:(id)a1;
- (void)onFrameSetResizeWithFrameSet:(id)a0;
- (void)setGestureRectsWithBizName:(id)a0 frameSetId:(id)a1 canvasId:(unsigned int)a2 rects:(id)a3;
- (void)removeCoverWithFrameSetId:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
