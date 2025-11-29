@class DitoPageContext;

@interface AWEPOIDetailNoActionEventHandler : AWENoActionEventHandler

@property (copy, nonatomic) id /* block */ completeHandler;
@property (weak, nonatomic) DitoPageContext *context;
@property (copy, nonatomic) id /* block */ track;

- (id)initWithDetectedView:(id)a0;
- (id)getSessionInfo;
- (void).cxx_destruct;

@end
