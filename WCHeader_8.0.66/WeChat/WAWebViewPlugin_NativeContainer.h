@interface WAWebViewPlugin_NativeContainer : WAWebViewPlugin_embedView

- (unsigned int)insertContainer:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 containerId:(unsigned int)a1 parentId:(unsigned int)a2;
- (void)setVisible:(BOOL)a0 containerId:(unsigned int)a1;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 containerId:(unsigned int)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 containerId:(unsigned int)a1;

@end
