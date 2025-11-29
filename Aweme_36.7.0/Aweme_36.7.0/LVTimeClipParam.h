@interface LVTimeClipParam : NSObject {
    struct shared_ptr<CutSame::TimeClipParam> { struct TimeClipParam *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) double speed;
@property (nonatomic) long long trimIn;
@property (nonatomic) long long trimOut;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::TimeClipParam> { struct TimeClipParam *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::TimeClipParam> { struct TimeClipParam *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::TimeClipParam> { struct TimeClipParam *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
