@class EEUIAnnotationSliderUIMore, NSString, EEUIAnnotationParser;

@interface EEUIAnnotationSlider : EEUIAnnotationBase <EEUIAnnotationPrivate, EEUIAnnotation>

@property (nonatomic) struct shared_ptr<EffectTemplateEditor::UIAnnotationSlider> { struct UIAnnotationSlider *__ptr_; struct __shared_weak_count *__cntrl_; } annotationPtr;
@property (weak, nonatomic) EEUIAnnotationParser *annotationParser;
@property (retain, nonatomic) EEUIAnnotationSliderUIMore *uiMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) int uiType;

+ (void)initClass;

- (id)currentUIMoreContents;
- (void)updateValue:(id)a0 withType:(int)a1 success:(id /* block */)a2 andError:(id /* block */)a3;
- (int)refreshAnnotationPreview;
- (id)changedUIMoreContentsForOriginal;
- (id)changedUIMoreContentsForLast;
- (id)initWithAnnotationBasePtr:(const void *)a0 andAnnotationParser:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
