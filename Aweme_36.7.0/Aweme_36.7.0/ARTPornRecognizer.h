@class ARTModel;

@interface ARTPornRecognizer : NSObject <ARTPornRecognizerProtocol> {
    void *_handle;
    struct PornClassifierRet { BOOL is_porn; float confidence; } _ret;
    int _errcode;
}

@property (retain, nonatomic) ARTModel *model;
@property (nonatomic) int modelType;
@property (nonatomic) struct CGSize { double width; double height; } minImageSize;
@property (nonatomic) unsigned long long maxImgDecodeBytes;

- (id)getOutputWithStatus:(int)a0;
- (id)getOutput;
- (id)processWithCVMat:(struct Mat { int x0; int x1; int x2; int x3; char *x4; char *x5; char *x6; char *x7; struct MatAllocator *x8; struct UMatData *x9; struct MatSize { int *x0; } x10; struct MatStep { unsigned long long *x0; unsigned long long x1[2]; } x11; })a0;
- (void)setParam:(long long)a0 value:(float)a1;
- (id)processWithNSData:(id)a0;
- (id)initWithModel:(id)a0 type:(int)a1;
- (id)processWithBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
