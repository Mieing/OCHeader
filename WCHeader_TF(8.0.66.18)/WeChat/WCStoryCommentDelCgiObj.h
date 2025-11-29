@class WCStoryComment;

@interface WCStoryCommentDelCgiObj : WCStoryBaseCGIObj

@property (retain, nonatomic) WCStoryComment *comment;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithStoryComment:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
