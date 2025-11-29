@interface MPLandingPageCgiHandlerContext : MMObject

@property (copy, nonatomic) id /* block */ getCommentCompletionHandler;
@property (copy, nonatomic) id /* block */ addCommentCompletionHandler;
@property (copy, nonatomic) id /* block */ deleteCommentCompletionHandler;
@property (copy, nonatomic) id /* block */ likeCommentCompletionHandler;
@property (copy, nonatomic) id /* block */ getVideoUrlCompletionHandler;

- (void).cxx_destruct;

@end
