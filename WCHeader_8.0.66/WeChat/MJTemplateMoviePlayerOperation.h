@class MJTemplateMoviePlayer;

@interface MJTemplateMoviePlayerOperation : MJTemplateSessionOperation

@property (readonly, weak, nonatomic) MJTemplateMoviePlayer *templateMoviePlayer;

- (id)initWithTemplateMoviePlayer:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)canStartTemplateMoviePlayerOperation;
- (void).cxx_destruct;

@end
