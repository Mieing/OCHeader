@class NSString, NSArray;

@interface NLETextTemplateMappingInfo_OC : NLENode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLETextTemplateInfo> { struct NLETextTemplateInfo *__ptr_; struct __shared_weak_count *__cntrl_; } cppModel;
@property (copy, nonatomic) NSString *relatedUuid;
@property (nonatomic) int textFeature;
@property (retain, nonatomic) NSArray *widgetNames;
@property (copy, nonatomic) NSString *effectId;
@property (retain, nonatomic) NSArray *captionDurations;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLETextTemplateInfo> { struct NLETextTemplateInfo *x0; struct __shared_weak_count *x1; })a0;
- (id)wdigetNames;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
