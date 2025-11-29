@interface IESLiveMultiViewInternalService : IESLiveMultiViewBaseService

- (void)handleWith:(id)a0 layoutResult:(id /* block */)a1;
- (id)supportBusinessScenes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateContainerFrameInLandscapeWith:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateContainerFrameInPortraitWith:(id)a0 lastDisplayInfo:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mainBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateContainerFrameWith:(unsigned long long)a0 originFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 mediaSize:(struct CGSize { double x0; double x1; })a2;
- (unsigned long long)serviceType;

@end
