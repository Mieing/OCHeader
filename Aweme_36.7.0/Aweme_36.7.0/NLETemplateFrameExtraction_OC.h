@class NSString, NSArray;

@interface NLETemplateFrameExtraction_OC : NLENode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLETemplateFrameExtraction> { struct NLETemplateFrameExtraction *__ptr_; struct __shared_weak_count *__cntrl_; } cppModel;
@property (copy, nonatomic) NSString *keyUUID;
@property (retain, nonatomic) NSArray *timelineTimestamps;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLETemplateFrameExtraction> { struct NLETemplateFrameExtraction *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
