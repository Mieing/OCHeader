@class NSArray;

@interface LVTemplateParam : NSObject {
    struct shared_ptr<CutSame::TemplateParam> { struct TemplateParam *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (copy, nonatomic) NSArray *boundingBox;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSArray *fallbackFontList;
@property (nonatomic) long long orderInLayer;
@property (copy, nonatomic) NSArray *position;
@property (nonatomic) double rotation;
@property (copy, nonatomic) NSArray *scale;
@property (nonatomic) double startTime;
@property (copy, nonatomic) NSArray *textList;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::TemplateParam> { struct TemplateParam *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::TemplateParam> { struct TemplateParam *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::TemplateParam> { struct TemplateParam *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
