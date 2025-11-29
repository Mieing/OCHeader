@interface PAGDecoderImpl : NSObject {
    struct shared_ptr<pag::PAGDecoder> { struct PAGDecoder *__ptr_; struct __shared_weak_count *__cntrl_; } pagDecoder;
}

+ (id)Make:(id)a0 maxFrameRate:(float)a1 scale:(float)a2;

- (id)initWithDecoder:(struct shared_ptr<pag::PAGDecoder> { struct PAGDecoder *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<pag::PAGDecoder> { struct PAGDecoder *x0; struct __shared_weak_count *x1; })decoder;
- (long long)width;
- (long long)height;
- (long long)numFrames;
- (float)frameRate;
- (BOOL)checkFrameChanged:(int)a0;
- (BOOL)copyFrameTo:(void *)a0 rowBytes:(unsigned long long)a1 at:(long long)a2;
- (BOOL)readFrame:(long long)a0 to:(struct __CVBuffer { } *)a1;
- (id)frameAtIndex:(long long)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
