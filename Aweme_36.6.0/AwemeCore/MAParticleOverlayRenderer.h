@class MAParticleOverlay;

@interface MAParticleOverlayRenderer : MAOverlayRenderer

@property (readonly, nonatomic) MAParticleOverlay *particleOverlay;

- (void)glRender;
- (void)initializeRendererBridge;
- (id)initWithParticleOverlay:(id)a0;

@end
