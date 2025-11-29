@class NSArray, NSString;

@interface EEUIAnnotationAssetUIMoreAlgorithmRequirement : NSObject <EEUIAnnotationAssetUIMoreAlgorithmRequirement>

@property (nonatomic) struct shared_ptr<EffectTemplateEditor::UIAnnotationAssetUIMoreAlgorithmRequirement> { struct UIAnnotationAssetUIMoreAlgorithmRequirement *__ptr_; struct __shared_weak_count *__cntrl_; } algorithmRequirementPtr;
@property (readonly, nonatomic) NSArray *algs;
@property (readonly, copy, nonatomic) NSString *relation;
@property (readonly, nonatomic) long long albumFilter;
@property (readonly, nonatomic) BOOL needAlgPreprocess;
@property (readonly, nonatomic) NSArray *algPreprocess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAnnotationUIMoreAlgorithmRequirement:(const void *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
