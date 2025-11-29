@interface PAGComposition : PAGLayer

+ (id)Make:(struct CGSize { double x0; double x1; })a0;

- (void)replaceTextsWith:(id)a0;
- (BOOL)containsTextLayerWithName:(id)a0;
- (id)firstTextLayerWithName:(id)a0;
- (id)allTextLayersWithName:(id)a0;
- (id)textOfFirstTextLayerWithName:(id)a0;
- (void)setText:(id)a0 forFirstTextLayerWithName:(id)a1;
- (void)setText:(id)a0 forAllTextLayersWithName:(id)a1;
- (void)resetTextForFirstTextLayerWithName:(id)a0;
- (void)resetTextForAllTextLayersWithName:(id)a0;
- (BOOL)containsImageLayerWithName:(id)a0;
- (id)firstImageLayerWithName:(id)a0;
- (id)allImageLayersWithName:(id)a0;
- (id)defaultImageOfFirstImageLayerWithName:(id)a0;
- (struct CGSize { double x0; double x1; })sizeOfFirstImageLayerWithName:(id)a0;
- (void)setImage:(id)a0 forFirstImageLayerWithName:(id)a1;
- (void)setImage:(id)a0 forAllImageLayersWithName:(id)a1;
- (void)setImage:(id)a0 withContentMode:(long long)a1 forFirstImageLayerWithName:(id)a2;
- (void)setImage:(id)a0 withContentMode:(long long)a1 forAllImageLayersWithName:(id)a2;
- (void)setPagImage:(id)a0 forFirstImageLayerWithName:(id)a1;
- (void)setPagImage:(id)a0 forAllImageLayersWithName:(id)a1;
- (void)resetImageForFirstImageLayerWithName:(id)a0;
- (void)resetImageForAllImageLayersWithName:(id)a0;
- (id)pagImageFromImage:(id)a0 contentMode:(long long)a1;
- (long long)width;
- (long long)height;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (long long)numChildren;
- (id)getLayerAt:(int)a0;
- (long long)getLayerIndex:(id)a0;
- (void)setLayerIndex:(long long)a0 layer:(id)a1;
- (id)audioBytes;
- (long long)audioStartTime;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getBounds;
- (BOOL)addLayer:(id)a0;
- (BOOL)addLayer:(id)a0 atIndex:(int)a1;
- (BOOL)contains:(id)a0;
- (id)removeLayer:(id)a0;
- (id)removeLayerAt:(int)a0;
- (void)removeAllLayers;
- (void)swapLayer:(id)a0 withLayer:(id)a1;
- (void)swapLayerAt:(int)a0 withIndex:(int)a1;
- (id)audioMarkers;
- (id)getLayersByName:(id)a0;
- (id)getLayersUnderPoint:(struct CGPoint { double x0; double x1; })a0;

@end
