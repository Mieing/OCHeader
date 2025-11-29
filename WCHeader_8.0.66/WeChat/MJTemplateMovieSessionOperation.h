@class OMJMovieSession;

@interface MJTemplateMovieSessionOperation : MJTemplateSessionOperation

@property (readonly, nonatomic) OMJMovieSession *maasSession;

- (id)initWithMaasSession:(id)a0 sessionKey:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
