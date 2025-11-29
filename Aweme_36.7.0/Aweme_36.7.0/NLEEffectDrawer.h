@class VENativeWrapper, NLEMediaWrapper;

@interface NLEEffectDrawer : NSObject

@property (retain, nonatomic) VENativeWrapper *veWrapper;
@property (retain, nonatomic) NLEMediaWrapper *nleMediaWrapper;
@property (nonatomic) int NLEChainSelection;

- (id)judgeComposerPriority:(id)a0 tag:(id)a1;
- (BOOL)handleTouchDown:(struct CGPoint { double x0; double x1; })a0 withType:(unsigned long long)a1;
- (BOOL)handleTouchUp:(struct CGPoint { double x0; double x1; })a0 withType:(unsigned long long)a1;
- (BOOL)handlePanEventWithTranslation:(struct CGPoint { double x0; double x1; })a0 location:(struct CGPoint { double x0; double x1; })a1;
- (long long)currentBrushNumber;
- (BOOL)brushStart;
- (BOOL)brushEnd;
- (void)setBrushSize:(double)a0;
- (void)setBrushColorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpah:(double)a3;
- (void)removeLastBrush;
- (void)setBrushCanvasAlpha:(double)a0;
- (void)appendComposerNodesWithTags:(id)a0;
- (BOOL)operateComposerNodesWithTags:(id)a0 operation:(long long)a1;
- (id)initWithNLEMediaWrapper:(id)a0;
- (id)initWithNLEMedia:(id)a0;
- (id)initWithVENativeWrapper:(id)a0;
- (void)setTimeMachineReady:(BOOL)a0;
- (BOOL)timeMachineReady;
- (double)getTimeMachineBegineTime:(long long)a0;
- (id)getVideoProcess;
- (void)removeAllComposerNodes;
- (void).cxx_destruct;
- (BOOL)handleTouchEvent:(struct CGPoint { double x0; double x1; })a0;

@end
