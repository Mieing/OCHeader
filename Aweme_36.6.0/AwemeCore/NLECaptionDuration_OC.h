@class NLECaptionItem_OC, NSArray;

@interface NLECaptionDuration_OC : NLENode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLECaptionDuration> { struct NLECaptionDuration *x0; struct __shared_weak_count *x1; } cppValue;
@property (copy, nonatomic) NLECaptionItem_OC *mainCaption;
@property (copy, nonatomic) NSArray *captionList;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLECaptionDuration> { struct NLECaptionDuration *x0; struct __shared_weak_count *x1; })a0;
- (void)addCaptionItem:(id)a0;
- (void)removeCaptionItem:(id)a0;
- (void)clearCaptionList;
- (void).cxx_destruct;
- (id)init;

@end
