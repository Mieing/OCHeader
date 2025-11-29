@interface WAWebViewPlugin_embedView : WAWebViewPluginBase

- (unsigned int)insertChildView:(id)a0 viewId:(unsigned int)a1 parentId:(unsigned int)a2;
- (void)updateParentId:(unsigned int)a0 forChild:(unsigned int)a1;
- (void)resizeView:(unsigned int)a0 region:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)updateZIndex:(long long)a0 ViewId:(unsigned int)a1;
- (void)setViewVisible:(unsigned int)a0 visible:(BOOL)a1;
- (id)getChildView:(unsigned int)a0;
- (BOOL)removeChildView:(unsigned int)a0;
- (id)getChildViews;
- (id)getChildViewsByClass:(Class)a0;
- (void)setViewFixed:(BOOL)a0 viewId:(unsigned int)a1 parentId:(unsigned int)a2;
- (void)setViewFullScreen:(id)a0;

@end
