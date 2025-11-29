@interface IESLiveRedEnvelopeLynxView : IESLiveRedEnvelopeLynxBaseView <HTSLivePluginLayoutView>

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)startShowAnimation:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 initData:(id)a1 context:(id)a2;
- (id)viewType;

@end
