@class HTSGLContext, VECrossPlatEditorSession, NSString;

@interface VECrossPlatPreviewUnit : VEPreviewUnit <IVEPreviewUnit> {
    long long _maxCrossPlatPreviewBufferCount;
}

@property (retain, nonatomic) VECrossPlatEditorSession *editorSession;
@property (nonatomic) unsigned long long fillMode;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } sizeInPixels;
@property (retain, nonatomic) HTSGLContext *context;
@property (copy, nonatomic) id /* block */ firstRenderBlk;
@property (copy, nonatomic) id /* block */ nthRenderBlk;
@property (copy, nonatomic) id /* block */ frameTimeBlk;
@property (nonatomic) BOOL enableBlend;
@property (nonatomic) BOOL isMagnifierUnit;
@property (nonatomic) long long framePrefetchLatency;
@property (retain, nonatomic) NSString *route;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBackgroundColorRed:(float)a0 green:(float)a1 blue:(float)a2 alpha:(float)a3;
- (BOOL)superProcessSampleData:(id)a0;
- (void)renderWithClearColorRed:(float)a0 green:(float)a1 blue:(float)a2 alpha:(float)a3;
- (void)calcBackgrounColorWithColorSpace;
- (void)updateEditorAdapter;
- (BOOL)processSampleData:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
