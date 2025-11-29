@class NSString;

@interface LVCutSameTextMaterial : NSObject {
    struct shared_ptr<TemplateConsumer::TextMaterial> { struct TextMaterial *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (copy, nonatomic) NSString *materialId;
@property (copy, nonatomic) NSString *slotId;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } targetTimeRange;

- (id)initWithCPPModel:(struct shared_ptr<TemplateConsumer::TextMaterial> { struct TextMaterial *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<TemplateConsumer::TextMaterial> { struct TextMaterial *x0; struct __shared_weak_count *x1; })cppmodel;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
