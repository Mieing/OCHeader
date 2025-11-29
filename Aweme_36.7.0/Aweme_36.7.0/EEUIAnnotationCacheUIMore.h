@class NSString;

@interface EEUIAnnotationCacheUIMore : NSObject <EEUIAnnotationCacheUIMore, EEUIAnnotationUIMorePrivate>

@property (nonatomic) struct shared_ptr<EffectTemplateEditor::UIAnnotationCacheUIMore> { struct UIAnnotationCacheUIMore *__ptr_; struct __shared_weak_count *__cntrl_; } uiMorePtr;
@property (readonly, copy, nonatomic) NSString *originalValue;
@property (readonly, copy, nonatomic) NSString *currentValue;
@property (readonly, copy, nonatomic) NSString *lastValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAnnotationUIMorePtr:(const void *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
