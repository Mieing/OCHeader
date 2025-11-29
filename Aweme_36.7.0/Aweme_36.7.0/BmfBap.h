@class NSString;

@interface BmfBap : NSObject <IBmfBap> {
    float rgb2yuv_matrix[9];
    float rgb2yuv_offset[3];
    BOOL use_ui_cvt;
    long long current_frame_index;
    long long process_num;
    float sum_process_time;
    int last_error;
    struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> { struct duration<long long, std::ratio<1, 1000000000>> { long long __rep_; } __d_; } start_time;
    int model_pixel_mode;
}

@property struct BmfBapLive { void /* function */ **x0; struct BmfBapLivePrivate *x1; struct BmfBaseDownloader *x2; struct thread *x3; BOOL x4; int x5; BOOL x6; } *impl;
@property (nonatomic) int current_algo_type;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *weight_save_dir;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init:(id)a0 :(int)a1 :(int)a2;
- (int)setRGB2YUV:(float *)a0 AndOffset:(float *)a1 AndUiCvt:(BOOL)a2;
- (int)process:(struct __CVBuffer { } *)a0 AndOutput:(struct __CVBuffer { } *)a1;
- (void)getProcessInfo:(int *)a0;
- (int)intBapV1_0:(id)a0;
- (int)intBapV1_2:(id)a0;
- (int)intBapV1_3:(id)a0;
- (void)setNewVideo;
- (void)setModelInfo:(id)a0 :(id)a1 SaveDir:(id)a2;
- (int)intBapV1_1:(id)a0;
- (int)process:(struct __CVBuffer { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;

@end
