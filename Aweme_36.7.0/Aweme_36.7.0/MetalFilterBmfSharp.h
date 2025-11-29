@class NSString, NSObject;
@protocol OS_dispatch_queue, IBmfSharp;

@interface MetalFilterBmfSharp : MetalFilterDefault <MetalFilterSource> {
    struct BmfSharpExtraInfo { int x0; float x1; float x2; float x3; float x4; float x5; BOOL x6; BOOL x7; } *_sharpExtraInfo;
}

@property (nonatomic) int sharpAlgoType;
@property (nonatomic) float sharpWt;
@property (nonatomic) float sharpThr;
@property (nonatomic) float sharpOvrt;
@property (nonatomic) float sharpG0;
@property (nonatomic) float sharpLcWtThr;
@property (nonatomic) BOOL sharpAdaptive;
@property (nonatomic) BOOL sharpSync;
@property (nonatomic) BOOL initSharpAsync;
@property (nonatomic) BOOL useNewInterface;
@property (nonatomic) int sharpPoolSize;
@property (nonatomic) int useNewInterfaceApiMode;
@property BOOL isSharpInitFinished;
@property BOOL isSharpUpdateFinished;
@property (nonatomic) int sharpMode;
@property (retain, nonatomic) id<IBmfSharp> sharpLutInstance;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *bmfSharpInitProcessorQueue;
@property (nonatomic) long long sumFrameCount;
@property (nonatomic) double sumCostTime;
@property (nonatomic) double averageCostTime;
@property (nonatomic) long long sumSuccessFrameCount;
@property (nonatomic) double successRate;
@property int lifeId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initSharp;
- (long long)processBufferWithNewInterface:(struct MetalTextureBuffer { void /* function */ **x0; struct __CVBuffer *x1; void **x2; int *x3; id x4; id x5; id x6; int x7; id x8; id x9; id x10; int x11; int x12; int x13; int x14; int x15; void *x16; int x17; id x18; BOOL x19; BOOL x20; float x21; int x22; int x23; int x24; id x25; long long x26; long long x27; int x28; int x29; } *)a0;
- (void)updateSharp:(id)a0;
- (BOOL)returnBmfResult:(void *)a0;
- (struct VideoFrame { struct VideoFrameBuffer *x0; } *)process:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0;
- (void).cxx_destruct;
- (void)setEffect:(id)a0;
- (void)dealloc;
- (id)initWithDictionary:(id)a0 index:(int)a1;
- (long long)processBuffer:(struct MetalTextureBuffer { void /* function */ **x0; struct __CVBuffer *x1; void **x2; int *x3; id x4; id x5; id x6; int x7; id x8; id x9; id x10; int x11; int x12; int x13; int x14; int x15; void *x16; int x17; id x18; BOOL x19; BOOL x20; float x21; int x22; int x23; int x24; id x25; long long x26; long long x27; int x28; int x29; } *)a0;

@end
