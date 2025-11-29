@class NSString, NSMutableDictionary;

@interface MagicBrushDemoExternalView : MagicBrushDemoLogic <IMBExternalViewDelegate>

@property (retain, nonatomic) NSMutableDictionary *internalViewDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (void)onCanvasViewCreated:(unsigned int)a0 view:(id)a1;
- (void)onCanvasViewDestroy:(unsigned int)a0 view:(id)a1;
- (void)onCanvasViewLayout:(unsigned int)a0 view:(id)a1 left:(float)a2 top:(float)a3 width:(float)a4 height:(float)a5;
- (void)onMainScriptInjected:(id)a0;
- (void).cxx_destruct;

@end
