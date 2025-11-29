@class UIButton;

@interface AWEPlayInteractionArticleController : AWEPlayInteractionNewBaseController

@property (retain, nonatomic) UIButton *viewArticleButton;

+ (BOOL)shouldActivateControllerWithModel:(id)a0 context:(id)a1 container:(id)a2;
+ (unsigned long long)controllerLazyLoadStrategy;

- (void)setHide:(BOOL)a0;
- (void)cellDidFullyDisplay:(id)a0 forRowAtIndexPath:(id)a1;
- (void)removeControllerFromSuperView;
- (void)p_enterArticleDetail;
- (void)trackShowBtn;
- (void)trackEnterArticleDetail;
- (void)enterArticleDetail;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)reset;
- (void)viewDidLoad;
- (double)rightContentInset;

@end
