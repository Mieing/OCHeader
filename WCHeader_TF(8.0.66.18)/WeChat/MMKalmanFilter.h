@interface MMKalmanFilter : NSObject {
    struct shared_ptr<cv::Mat> { struct Mat *__ptr_; struct __shared_weak_count *__cntrl_; } F;
    struct shared_ptr<cv::Mat> { struct Mat *__ptr_; struct __shared_weak_count *__cntrl_; } FTransposed;
    struct shared_ptr<cv::Mat> { struct Mat *__ptr_; struct __shared_weak_count *__cntrl_; } H;
    struct shared_ptr<cv::Mat> { struct Mat *__ptr_; struct __shared_weak_count *__cntrl_; } HTransposed;
    struct shared_ptr<cv::Mat> { struct Mat *__ptr_; struct __shared_weak_count *__cntrl_; } B;
    struct shared_ptr<cv::Mat> { struct Mat *__ptr_; struct __shared_weak_count *__cntrl_; } Q;
    struct shared_ptr<cv::Mat> { struct Mat *__ptr_; struct __shared_weak_count *__cntrl_; } R;
    struct shared_ptr<cv::Mat> { struct Mat *__ptr_; struct __shared_weak_count *__cntrl_; } PInit;
    struct shared_ptr<cv::Mat> { struct Mat *__ptr_; struct __shared_weak_count *__cntrl_; } xInit;
    struct shared_ptr<cv::Mat> { struct Mat *__ptr_; struct __shared_weak_count *__cntrl_; } x;
    struct shared_ptr<cv::Mat> { struct Mat *__ptr_; struct __shared_weak_count *__cntrl_; } P;
}

+ (struct shared_ptr<cv::Mat> { struct Mat *x0; struct __shared_weak_count *x1; })getTranspose:(struct shared_ptr<cv::Mat> { struct Mat *x0; struct __shared_weak_count *x1; })a0;
+ (struct shared_ptr<cv::Mat> { struct Mat *x0; struct __shared_weak_count *x1; })genCVMatWithMatArray:(id)a0;
+ (void)printMat:(struct Mat { int x0; int x1; int x2; int x3; char *x4; int *x5; char *x6; char *x7; char *x8; struct MatAllocator *x9; struct MSize { int *x0; } x10; struct MStep { unsigned long long *x0; unsigned long long x1[2]; } x11; })a0;

- (id)initWithF:(struct shared_ptr<cv::Mat> { struct Mat *x0; struct __shared_weak_count *x1; })a0 H:(struct shared_ptr<cv::Mat> { struct Mat *x0; struct __shared_weak_count *x1; })a1 B:(struct shared_ptr<cv::Mat> { struct Mat *x0; struct __shared_weak_count *x1; })a2 Q:(struct shared_ptr<cv::Mat> { struct Mat *x0; struct __shared_weak_count *x1; })a3 R:(struct shared_ptr<cv::Mat> { struct Mat *x0; struct __shared_weak_count *x1; })a4 PInit:(struct shared_ptr<cv::Mat> { struct Mat *x0; struct __shared_weak_count *x1; })a5 XInit:(struct shared_ptr<cv::Mat> { struct Mat *x0; struct __shared_weak_count *x1; })a6;
- (void)resetData;
- (struct shared_ptr<cv::Mat> { struct Mat *x0; struct __shared_weak_count *x1; })filterWithMeasurement:(struct shared_ptr<cv::Mat> { struct Mat *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
