@class NSArray, NSString;

@interface EEUIAnnotationOptionListUIMore : NSObject <EEUIAnnotationOptionListUIMore, EEUIAnnotationUIMorePrivate>

@property (nonatomic) struct shared_ptr<EffectTemplateEditor::UIAnnotationOptionListUIMore> { struct UIAnnotationOptionListUIMore *__ptr_; struct __shared_weak_count *__cntrl_; } uiMorePtr;
@property (readonly, nonatomic) NSArray *originalValue;
@property (readonly, nonatomic) NSArray *currentValue;
@property (readonly, nonatomic) NSArray *lastValue;
@property (readonly, copy, nonatomic) NSString *optionListKey;
@property (readonly, copy, nonatomic) NSString *optionListName;
@property (readonly, nonatomic) NSArray *candidates;
@property (readonly, copy, nonatomic) NSString *loki_panel_name;
@property (readonly, copy, nonatomic) NSString *loki_panel_category;
@property (readonly, nonatomic) double preferredItemWidth;
@property (readonly, nonatomic) double preferredItemHeight;
@property (readonly, nonatomic) double preferredItemRadius;
@property (readonly, nonatomic) long long maxSelection;
@property (readonly, nonatomic) long long minSelection;
@property (readonly, nonatomic) int optionUIType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAnnotationUIMorePtr:(const void *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
