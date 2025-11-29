@interface MetalFilterBnBalanceWrapper : MetalFilterCommonWrapper

@property (nonatomic) BOOL isFirstFrameRecived;
@property (nonatomic) long long frameCount;
@property (nonatomic) long long mixMaxFrameCount;
@property (nonatomic) BOOL newVideStream;
@property (nonatomic) int groupIndex;
@property (nonatomic) int interval;
@property (nonatomic) BOOL isEnableFirstFrame;
@property (nonatomic) float bnColorWight;

- (void)setIntValue:(int)a0 forKey:(int)a1;
- (BOOL)isUsing;
- (void)onFirstFrameRenderStart;
- (id)initWithFilter:(id)a0 param:(id)a1;
- (struct VideoFrame { struct VideoFrameBuffer *x0; } *)process:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0;
- (void)setEffect:(id)a0;

@end
