@class IESGCPVideoAudienceDetailView;

@interface IESGCPVideoAudienceDetailViewController : IESGCPBaseDetailViewController

@property (retain, nonatomic) IESGCPVideoAudienceDetailView *videoAudienceDetailView;

- (id)initWithRouterModel:(id)a0;
- (void)realDismissAudienceDetailViewWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)getSpiltStatus;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)detailView;

@end
