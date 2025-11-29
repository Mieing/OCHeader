@interface PAGCompositionImpl : PAGLayerImpl

+ (id)Make:(struct CGSize { double x0; double x1; })a0;

- (long long)width;
- (long long)height;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (long long)numChildren;
- (id)getLayerAt:(int)a0;
- (long long)getLayerIndex:(id)a0;
- (void)setLayerIndex:(long long)a0 layer:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getBounds;
- (BOOL)addLayer:(id)a0;
- (BOOL)addLayer:(id)a0 atIndex:(int)a1;
- (BOOL)contains:(id)a0;
- (id)removeLayer:(id)a0;
- (id)removeLayerAt:(int)a0;
- (void)removeAllLayers;
- (void)swapLayer:(id)a0 withLayer:(id)a1;
- (void)swapLayerAt:(int)a0 withIndex:(int)a1;
- (id)audioBytes;
- (long long)audioStartTime;
- (id)audioMarkers;
- (id)getLayersByName:(id)a0;
- (id)getLayersUnderPoint:(struct CGPoint { double x0; double x1; })a0;

@end
