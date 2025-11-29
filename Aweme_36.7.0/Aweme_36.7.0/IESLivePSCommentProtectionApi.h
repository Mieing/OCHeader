@protocol IESLiveWebImageService;

@interface IESLivePSCommentProtectionApi : HTSLiveApi

@property (retain, nonatomic) id<IESLiveWebImageService> webImageService;

- (void)loadResourceWith:(id)a0 completion:(id /* block */)a1;
- (void)fetchCommentControlStatusWith:(id)a0 completion:(id /* block */)a1;
- (void)fetchCommentControlMessageWith:(id)a0 completion:(id /* block */)a1;
- (void)updateCommentControlStatusWith:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
