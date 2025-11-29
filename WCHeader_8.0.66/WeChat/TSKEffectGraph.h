@class EffectSpec, EffectGraph;

@interface TSKEffectGraph : NSObject

@property (retain, nonatomic) EffectSpec *spec;
@property (retain, nonatomic) EffectGraph *graph;

- (id)initWithSampleRate:(int)a0 channels:(int)a1;
- (BOOL)setEffectType:(unsigned long long)a0;
- (BOOL)processData:(char *)a0 dataSize:(int)a1 stage:(unsigned long long)a2;
- (void)reset;
- (void).cxx_destruct;

@end
