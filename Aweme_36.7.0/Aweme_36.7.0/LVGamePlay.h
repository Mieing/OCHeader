@class NSString;

@interface LVGamePlay : NSObject {
    struct shared_ptr<CutSame::GamePlay> { struct GamePlay *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (copy, nonatomic) NSString *algorithm;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) BOOL reshape;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::GamePlay> { struct GamePlay *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::GamePlay> { struct GamePlay *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::GamePlay> { struct GamePlay *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
