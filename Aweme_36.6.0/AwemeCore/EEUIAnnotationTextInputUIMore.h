@class NSString;

@interface EEUIAnnotationTextInputUIMore : NSObject <EEUIAnnotationTextInputUIMore, EEUIAnnotationUIMorePrivate>

@property (nonatomic) struct shared_ptr<EffectTemplateEditor::UIAnnotationTextInputUIMore> { struct UIAnnotationTextInputUIMore *__ptr_; struct __shared_weak_count *__cntrl_; } uiMorePtr;
@property (readonly, copy, nonatomic) NSString *originalValue;
@property (readonly, copy, nonatomic) NSString *currentValue;
@property (readonly, copy, nonatomic) NSString *lastValue;
@property (readonly, copy, nonatomic) NSString *hintText;
@property (readonly, nonatomic) long long minCount;
@property (readonly, nonatomic) long long maxCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAnnotationUIMorePtr:(const void *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
