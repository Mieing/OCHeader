@class NSString;

@interface BmfSdr2Hdr : NSObject <IBmfSdr2Hdr> {
    float yuv2rgb_matrix_[9];
    float yuv2rgb_offset_[3];
    float rgb2yuv_matrix_[9];
    float rgb2yuv_offset_[3];
    int weight_width_;
    int weight_height_;
    int weight_depth_;
    float s_;
    BOOL sync_;
    float cur_strength_;
    int cur_weight_mode_;
}

@property void *instance_;
@property struct MetalRuntime { struct MetalRuntimeImpl *x0; } *metal_runtime_;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)process:(struct BmfSdr2HdrData { id x0[3]; id x1[3]; int x2; } *)a0 :(void *)a1;
- (BOOL)needSdr2HdrAndHdrBn:(struct BmfSdr2HdrExtraInfo { float x0; float *x1; unsigned long long x2; float *x3; unsigned long long x4; } *)a0;
- (int)processYUV:(id)a0 :(id)a1 :(id)a2;
- (int)processRGBA:(id)a0 :(id)a1;
- (int)processYuvToYuv:(struct BmfSdr2HdrData { id x0[3]; id x1[3]; int x2; } *)a0;
- (id)init:(id)a0 :(int)a1 :(int)a2 :(int)a3 :(float)a4 :(BOOL)a5;
- (id)initWithDict:(id)a0 WtWidth:(int)a1 WtHeight:(int)a2 WtDepth:(int)a3 saturation:(float)a4 Sync:(BOOL)a5;
- (int)setMatrix:(float *)a0 :(float *)a1;
- (int)setYUV2RGBMatrix:(float *)a0 AndOffset:(float *)a1 SetRGB2YUVMatrix:(float *)a2 AndOffset:(float *)a3;
- (int)setProcessWeightMod:(int)a0;
- (void)dealloc;

@end
