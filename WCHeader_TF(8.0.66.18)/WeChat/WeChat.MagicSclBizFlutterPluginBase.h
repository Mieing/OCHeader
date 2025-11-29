@interface WeChat.MagicSclBizFlutterPluginBase : NSObject <MMFlutterPlugin, WeChat.IMBSclExternalViewDelegate> {
    void /* unknown type, empty encoding */ mbPlugin;
    void /* unknown type, empty encoding */ flutterApi;
    void /* unknown type, empty encoding */ dpr;
    void /* unknown type, empty encoding */ pendingCreateCanvas;
    void /* unknown type, empty encoding */ pendingLayoutCanvas;
    void /* unknown type, empty encoding */ pendingLock;
    void /* unknown type, empty encoding */ pendingTasksAfterAttach;
    void /* unknown type, empty encoding */ pendingTasksAfterBind;
    void /* unknown type, empty encoding */ rootMap;
    void /* unknown type, empty encoding */ weakEngine;
    void /* unknown type, empty encoding */ control;
    void /* unknown type, empty encoding */ randomNum;
}

- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)onCanvasViewCreated:(unsigned int)a0 view:(id)a1;
- (void)onCanvasViewLayout:(unsigned int)a0 view:(id)a1 left:(float)a2 top:(float)a3 width:(float)a4 height:(float)a5;
- (void)onCanvasViewDestroy:(unsigned int)a0 view:(id)a1;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)a0;
- (void)onFrameSetResizeWithFrameSet:(id)a0;
- (void)onCanvasIdAndFrameSetIdBindWithCanvasId:(unsigned int)a0 frameSetId:(id)a1;
- (void)setGestureRectsWithBizName:(id)a0 frameSetId:(id)a1 canvasId:(unsigned int)a2 rects:(id)a3;
- (void)removeCoverWithFrameSetId:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
