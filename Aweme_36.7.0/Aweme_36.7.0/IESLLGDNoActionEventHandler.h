@class LLDitoPageContext;

@interface IESLLGDNoActionEventHandler : IESLLNoActionEventHandler

@property (copy, nonatomic) id /* block */ completeHandler;
@property (weak, nonatomic) LLDitoPageContext *context;

- (id)initWithDetectedView:(id)a0;
- (void).cxx_destruct;

@end
