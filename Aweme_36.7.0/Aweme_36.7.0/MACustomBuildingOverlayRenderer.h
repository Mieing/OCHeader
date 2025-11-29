@class MACustomBuildingOverlay;

@interface MACustomBuildingOverlayRenderer : MAOverlayRenderer

@property (readonly, nonatomic) MACustomBuildingOverlay *customBuildingOverlay;

- (void)glRender;
- (void)initializeRendererBridge;
- (id)initWithCustomBuildingOverlay:(id)a0;

@end
