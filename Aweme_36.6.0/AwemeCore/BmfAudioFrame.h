@interface BmfAudioFrame : NSObject

@property (nonatomic) void *p;
@property (nonatomic) BOOL own;

- (id)init:(int)a0 layout:(int)a1 planer:(BOOL)a2 dtype:(int)a3;
- (id)init:(id)a0 size:(int)a1 layout:(int)a2 planer:(BOOL)a3;
- (BOOL)planer;
- (int)nsamples;
- (void)privateMerge:(id)a0;
- (id)privateGet:(int)a0;
- (void)privateAttach:(int)a0 option:(id)a1;
- (id)initFromPtr:(void *)a0 own:(BOOL)a1;
- (void)copyProps:(id)a0;
- (int)nchannels;
- (int)nplanes;
- (id)plane:(int)a0;
- (long long)pts;
- (float)sampleRate;
- (void *)ptr;
- (void)dealloc;
- (void)setSampleRate:(float)a0;
- (void)setTimeBase:(id)a0;
- (id)timeBase;
- (id)planes;
- (int)dtype;
- (BOOL)defined;
- (void)setPts:(long long)a0;

@end
