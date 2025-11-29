@interface LVPoint : NSObject {
    struct shared_ptr<CutSame::Point> { struct Point *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) double x;
@property (nonatomic) double y;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::Point> { struct Point *x0; struct __shared_weak_count *x1; })a0;
- (id)initX:(double)a0 WithY:(double)a1;
- (struct shared_ptr<CutSame::Point> { struct Point *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::Point> { struct Point *x0; struct __shared_weak_count *x1; })a0;
- (struct CGPoint { double x0; double x1; })point;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
