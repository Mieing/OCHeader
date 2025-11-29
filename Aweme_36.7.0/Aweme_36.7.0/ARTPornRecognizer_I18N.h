@class ARTModel, ARTPornOutput;

@interface ARTPornRecognizer_I18N : NSObject <ARTPornRecognizerProtocol> {
    struct BachAlgorithmSystem { void /* function */ **x0; } *_bach_system;
    struct shared_ptr<Bach::BachResourceFinder> { struct BachResourceFinder *__ptr_; struct __shared_weak_count *__cntrl_; } _finder;
}

@property (retain, nonatomic) ARTModel *model;
@property (nonatomic) int errcode;
@property (retain, nonatomic) ARTPornOutput *result;
@property (nonatomic) struct CGSize { double width; double height; } minImageSize;
@property (nonatomic) unsigned long long maxImgDecodeBytes;

- (id)getOutputWithStatus:(int)a0;
- (id)getOutput;
- (id)processWithCVMat:(struct Mat { int x0; int x1; int x2; int x3; char *x4; char *x5; char *x6; char *x7; struct MatAllocator *x8; struct UMatData *x9; struct MatSize { int *x0; } x10; struct MatStep { unsigned long long *x0; unsigned long long x1[2]; } x11; })a0;
- (void)setParam:(long long)a0 value:(float)a1;
- (id)processWithNSData:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)dealloc;

@end
