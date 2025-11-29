@class HTSLiveApi;

@interface IESLiveInteractionCommandMethodImpl : IESLiveInteractionCommandMethod

@property (retain, nonatomic) HTSLiveApi *api;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)mockCommentMessageWithResponse:(id)a0;
- (void).cxx_destruct;

@end
