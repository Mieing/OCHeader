@class EEUIAnnotationAssetUIMoreAutoCutting, NSArray, EEUIAnnotationAssetUIMoreAlgorithmRequirement, EEUIAnnotationAssetUIMoreMaxSize, NSString;

@interface EEUIAnnotationAssetUIMore : NSObject <EEUIAnnotationAssetUIMore, EEUIAnnotationUIMorePrivate>

@property (nonatomic) struct shared_ptr<EffectTemplateEditor::UIAnnotationAssetUIMore> { struct UIAnnotationAssetUIMore *__ptr_; struct __shared_weak_count *__cntrl_; } uiMorePtr;
@property (retain, nonatomic) EEUIAnnotationAssetUIMoreMaxSize *maxSize;
@property (retain, nonatomic) EEUIAnnotationAssetUIMoreAutoCutting *autoCutting;
@property (retain, nonatomic) EEUIAnnotationAssetUIMoreAlgorithmRequirement *algorithmRequirement;
@property (readonly, nonatomic) NSArray *originalValue;
@property (readonly, nonatomic) NSArray *currentValue;
@property (readonly, nonatomic) NSArray *lastValue;
@property (readonly, copy, nonatomic) NSString *from;
@property (readonly, nonatomic) int assetType;
@property (readonly, nonatomic) NSArray *suffixes;
@property (readonly, nonatomic) long long minCount;
@property (readonly, nonatomic) long long maxCount;
@property (readonly, nonatomic) BOOL needLoading;
@property (readonly, nonatomic) BOOL needGuide;
@property (readonly, copy, nonatomic) NSString *imgKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAnnotationUIMorePtr:(const void *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
