@class UIView;
@protocol IESLiveOpenPlatformExplainCardViewProtocol;

@interface IESLiveOpenPlatformExplainCardContainerView : UIView <HTSLivePluginLayoutView>

@property (retain, nonatomic) UIView<IESLiveOpenPlatformExplainCardViewProtocol> *cardView;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (id)setupCardViewWithCardViewModel:(id)a0;
- (void)showCardViewWithCardViewModel:(id)a0 animationWillStartBlock:(id /* block */)a1 didStartBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)hideCardViewWithAnimationWillStartBlock:(id /* block */)a0 didStartBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)replaceCardViewWithCardViewModel:(id)a0 animationWillStartBlock:(id /* block */)a1 didStartBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)viewType;

@end
