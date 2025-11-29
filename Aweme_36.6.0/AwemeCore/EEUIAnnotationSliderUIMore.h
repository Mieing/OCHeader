@class NSString;

@interface EEUIAnnotationSliderUIMore : NSObject <EEUIAnnotationSliderUIMore, EEUIAnnotationUIMorePrivate>

@property (nonatomic) struct shared_ptr<EffectTemplateEditor::UIAnnotationSliderUIMore> { struct UIAnnotationSliderUIMore *__ptr_; struct __shared_weak_count *__cntrl_; } uiMorePtr;
@property (readonly, nonatomic) double originalValue;
@property (readonly, nonatomic) double currentValue;
@property (readonly, nonatomic) double lastValue;
@property (readonly, nonatomic) double minValue;
@property (readonly, nonatomic) double maxValue;
@property (readonly, nonatomic) double stepValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAnnotationUIMorePtr:(const void *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
