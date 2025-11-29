@class DitoPageContext;

@interface AWEGDNoActionEventHandler : AWENoActionEventHandler

@property (copy, nonatomic) id /* block */ completeHandler;
@property (weak, nonatomic) DitoPageContext *context;

- (id)initWithDetectedView:(id)a0;
- (void).cxx_destruct;

@end
