@interface SLIContainerFlexRootView : IESECSliceXBaseView

+ (Class)layerClass;

- (void)SLI_clearLayoutSublayersFlag;
- (BOOL)SLI_didLayoutSublayers;
- (id)flexRootViewLayer;

@end
