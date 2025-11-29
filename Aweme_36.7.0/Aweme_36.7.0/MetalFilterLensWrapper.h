@class MetalFilterSRTracker, MetalFilterLens;

@interface MetalFilterLensWrapper : FilterBase

@property (retain, nonatomic) MetalFilterSRTracker *srTracker;
@property (retain, nonatomic) MetalFilterLens *lensInstance;

- (float)getFloatValueForKey:(int)a0;
- (void)setIntValue:(int)a0 forKey:(int)a1;
- (id)getEffectPatameterStr;
- (id)initWithLens:(id)a0;
- (int)getValueForKey:(int)a0;
- (struct VideoFrame { struct VideoFrameBuffer *x0; } *)process:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0;
- (void).cxx_destruct;
- (void)setEffect:(id)a0;
- (void)setValue:(float)a0 forKey:(int)a1;
- (void)dealloc;

@end
