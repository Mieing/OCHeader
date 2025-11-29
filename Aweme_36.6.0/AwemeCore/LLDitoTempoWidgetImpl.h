@class NSString, _TtC8TempoiOS13TempoOCWidget, LLDitoPageContext;
@protocol LLDitoTempoWidgetProtocol;

@interface LLDitoTempoWidgetImpl : NSObject <TempoiOS.TempoOCWidgetEntity, LLDitoTempoWidgetDelegate>

@property (retain, nonatomic) id<LLDitoTempoWidgetProtocol> proxy;
@property (weak, nonatomic) _TtC8TempoiOS13TempoOCWidget *delegate;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createViewProxy;
- (void)registerAttributeList;
- (void)registerStyleList;
- (void)registerEventList;
- (struct CGSize { double x0; double x1; })fitsSizeWithConstrainedSize:(struct CGSize { double x0; double x1; })a0 attributeMap:(id)a1 styleMap:(id)a2;
- (id)superWidgetName;
- (BOOL)registerAttributeWithName:(id)a0 type:(unsigned long long)a1 impl:(id /* block */)a2;
- (void)dispatchEventWithName:(id)a0 viewProxy:(id)a1;
- (void).cxx_destruct;
- (id)initWithProxy:(id)a0;

@end
