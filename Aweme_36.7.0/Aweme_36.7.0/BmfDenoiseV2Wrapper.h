@class LiveStreamCapture;

@interface BmfDenoiseV2Wrapper : NSObject {
    struct unique_ptr<BMFDenoiseLive, std::default_delete<BMFDenoiseLive>> { struct __compressed_pair<BMFDenoiseLive *, std::default_delete<BMFDenoiseLive>> { struct BMFDenoiseLive *__value_; } __ptr_; } obj;
    int frameIndex;
    float bitrateRatioGE1080p;
    float bitrateRatioLT1080p;
    int lastWidth;
    int lastHeight;
    LiveStreamCapture *capture;
}

- (id)initWithObj:(id)a0 :(void *)a1 :(float)a2 :(float)a3;
- (BOOL)updateBitrateRatios:(float)a0 :(float)a1;
- (struct __CVBuffer { } *)process:(struct __CVBuffer { } *)a0 :(float)a1 :(float)a2 :(BOOL)a3;
- (void)checkSizeChange:(int)a0 :(int)a1;
- (void).cxx_destruct;
- (struct BmfMetalVeryfastDenoiseReport { unsigned int x0; float x1; int x2; float x3; float x4; })report;
- (id).cxx_construct;
- (void)dealloc;

@end
