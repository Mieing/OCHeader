@class MetalFilterSharpenTracker, MetalFilterSRTracker, FilterBase;

@interface MetalFilterCommonWrapper : FilterBase {
    float strength;
    int videoIndexThresh;
    long long videoIndex;
    BOOL _isUsing;
}

@property (retain, nonatomic) MetalFilterSRTracker *srTracker;
@property (retain, nonatomic) MetalFilterSharpenTracker *sharpenTracker;
@property (retain, nonatomic) FilterBase *filterInstance;

- (float)getFloatValueForKey:(int)a0;
- (id)getStringValueForKey:(int)a0;
- (void)setIntValue:(int)a0 forKey:(int)a1;
- (void)setIsUsing:(BOOL)a0;
- (BOOL)isUsing;
- (BOOL)checkIsRenderToMetalView;
- (id)getEffectPatameterStr;
- (id)errorCodesInit;
- (id)releaseFilter;
- (void)setInt64Value:(long long)a0 forKey:(int)a1;
- (long long)getVideoIndex;
- (int)getValueForKey:(int)a0;
- (struct VideoFrame { struct VideoFrameBuffer *x0; } *)process:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0;
- (void).cxx_destruct;
- (id)description;
- (void)setEffect:(id)a0;
- (void)setValue:(float)a0 forKey:(int)a1;
- (id)initWithFilter:(id)a0;

@end
