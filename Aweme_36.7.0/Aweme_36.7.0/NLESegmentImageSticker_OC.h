@class NLEResourceNode_OC;

@interface NLESegmentImageSticker_OC : NLESegmentSticker_OC

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentImageSticker> { struct NLESegmentImageSticker *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) BOOL newEffectProtocol;
@property (retain, nonatomic) NLEResourceNode_OC *imageFile;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegmentImageSticker> { struct NLESegmentImageSticker *x0; struct __shared_weak_count *x1; })a0;
- (id)getResNode;
- (void).cxx_destruct;
- (id)init;

@end
