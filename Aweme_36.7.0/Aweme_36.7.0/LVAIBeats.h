@class NSString, NSArray;

@interface LVAIBeats : NSObject {
    struct shared_ptr<CutSame::AiBeats> { struct AiBeats *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (copy, nonatomic) NSString *beatsPath;
@property (copy, nonatomic) NSString *beatsUrl;
@property (copy, nonatomic) NSString *melodyPath;
@property (copy, nonatomic) NSArray *melodyPercents;
@property (copy, nonatomic) NSString *melodyUrl;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::AiBeats> { struct AiBeats *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::AiBeats> { struct AiBeats *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::AiBeats> { struct AiBeats *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
