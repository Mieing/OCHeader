@class LLDitoPageContext;

@interface IESLLPOIDetailNoActionEventHandler : IESLLNoActionEventHandler

@property (copy, nonatomic) id /* block */ completeHandler;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (copy, nonatomic) id /* block */ track;

- (id)initWithDetectedView:(id)a0;
- (id)getSessionInfo;
- (void).cxx_destruct;

@end
