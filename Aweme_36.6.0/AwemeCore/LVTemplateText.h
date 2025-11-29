@class NSArray, NSString;

@interface LVTemplateText : NSObject {
    struct shared_ptr<CutSame::TemplateText> { struct TemplateText *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (copy, nonatomic) NSArray *boundingBox;
@property (nonatomic) double duration;
@property (nonatomic) long long index;
@property (nonatomic) double startTime;
@property (copy, nonatomic) NSString *value;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::TemplateText> { struct TemplateText *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::TemplateText> { struct TemplateText *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::TemplateText> { struct TemplateText *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
