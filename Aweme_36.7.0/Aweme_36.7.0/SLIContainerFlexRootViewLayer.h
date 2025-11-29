@interface SLIContainerFlexRootViewLayer : CALayer

@property (nonatomic) BOOL SLI_didLayoutSublayersFlag;

- (void)SLI_clearLayoutSublayersFlag;
- (BOOL)SLI_didLayoutSublayers;
- (void)layoutSublayers;

@end
