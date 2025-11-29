@class AWESearchArticleDetailPageContext;

@interface AWESearchArticleContentDetailViewModel : NSObject

@property (weak, nonatomic) AWESearchArticleDetailPageContext *pageContext;

- (void)bindPageContext:(id)a0;
- (void)fetchArticleDetailWithCompletion:(id /* block */)a0;
- (void)trackStatus:(BOOL)a0 error:(id)a1;
- (void)trackDuration:(double)a0;
- (void).cxx_destruct;
- (id)init;

@end
