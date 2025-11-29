@class LynxTemplateData;
@protocol LynxViewBaseLifecycle;

@interface IESLLDitoLynxEmbeddedView : LynxView

@property (weak, nonatomic) id<LynxViewBaseLifecycle> embeddedLifecycleDelegate;
@property (retain, nonatomic) LynxTemplateData *embeddedTemplateData;

- (void)updateDataWithMetaData:(id)a0;
- (id)initWithBuilderBlock:(id /* block */)a0;
- (void)setupEmbeddedViewBridge;
- (id)initLynxEmbededView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 diffKey:(id)a1 engine:(id)a2;
- (void)loadTemplateWithLoadMeta:(id)a0;
- (void)addEmbeddedLifecycleDelegate:(id)a0;
- (void).cxx_destruct;

@end
