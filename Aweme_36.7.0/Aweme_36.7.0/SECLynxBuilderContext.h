@class LynxView, LynxTemplateRender;

@interface SECLynxBuilderContext : NSObject

@property (weak, nonatomic) LynxView *lynxView;
@property (weak, nonatomic) LynxTemplateRender *lynxRender;
@property (copy, nonatomic) id /* block */ builderBlock;

- (id)initWithLynxView:(id)a0 render:(id)a1;
- (void).cxx_destruct;

@end
