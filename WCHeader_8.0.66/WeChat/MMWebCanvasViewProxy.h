@class NSString, MMWebCanvasView;
@protocol MMWebCanvasViewEventDelegate, MMWebCanvasViewDataDelegate;

@interface MMWebCanvasViewProxy : MMObject <WAOpenGLViewDelegate>

@property (weak, nonatomic) MMWebCanvasView *canvasView;
@property (weak, nonatomic) id<MMWebCanvasViewDataDelegate> dataDelegate;
@property (weak, nonatomic) id<MMWebCanvasViewEventDelegate> eventDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isFileExist:(id)a0;
- (id)getFileData:(id)a0;
- (id)getFileDataWithUrl:(id)a0;
- (void)onCancelAllFileTask;
- (id)createImageWithSvgData:(id)a0 resize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;
- (id)getCommandBufferScript;
- (void)systemLog:(id)a0;
- (void)log:(id)a0 func:(const char *)a1 line:(int)a2;
- (void)logError:(id)a0 desc:(id)a1 stack:(id)a2;
- (void)onFirstFrameRendered:(unsigned int)a0;
- (void)onOpenGLViewEnterBackground;
- (void)onOpenGLViewEnterForeground;
- (void).cxx_destruct;

@end
