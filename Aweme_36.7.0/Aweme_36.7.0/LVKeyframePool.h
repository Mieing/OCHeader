@class NSArray;

@interface LVKeyframePool : NSObject {
    struct shared_ptr<CutSame::Keyframes> { struct Keyframes *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (copy, nonatomic) NSArray *adjusts;
@property (copy, nonatomic) NSArray *audios;
@property (copy, nonatomic) NSArray *filters;
@property (copy, nonatomic) NSArray *stickers;
@property (copy, nonatomic) NSArray *texts;
@property (copy, nonatomic) NSArray *videos;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::Keyframes> { struct Keyframes *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::Keyframes> { struct Keyframes *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)allKeyframes;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::Keyframes> { struct Keyframes *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
