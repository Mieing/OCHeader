@class NSString, WACanvasCoverViewContainer;

@interface WACanvasPlugin_embedView : WAWebViewPluginBase

@property (retain, nonatomic) WACanvasCoverViewContainer *coverViewContainer;
@property (retain, nonatomic) NSString *frameSetId;

- (id)curCoverView;
- (BOOL)insertChildView:(id)a0 viewId:(unsigned int)a1 parentId:(unsigned int)a2;
- (BOOL)updateParentId:(unsigned int)a0 forChild:(unsigned int)a1;
- (void)resizeView:(unsigned int)a0 region:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setViewVisible:(unsigned int)a0 visible:(BOOL)a1;
- (void)updateZIndex:(long long)a0 ViewId:(unsigned int)a1;
- (id)getChildView:(unsigned int)a0;
- (BOOL)removeChildView:(unsigned int)a0;
- (id)getChildViews;
- (id)getChildViewsByClass:(Class)a0;
- (void).cxx_destruct;

@end
