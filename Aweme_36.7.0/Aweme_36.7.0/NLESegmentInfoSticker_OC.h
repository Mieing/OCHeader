@class NLEResourceNode_OC, NLEStringStringPair_OC;

@interface NLESegmentInfoSticker_OC : NLESegmentSticker_OC

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentInfoSticker> { struct NLESegmentInfoSticker *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLEResourceNode_OC *effectSDKFile;
@property (nonatomic) BOOL addWithBuffer;
@property (retain, nonatomic) NLEResourceNode_OC *prefabTextureFile;
@property (retain, nonatomic) NLEStringStringPair_OC *blendMode;
@property (nonatomic) BOOL newEffectProtocol;
@property (nonatomic) long long fixedTime;
@property (nonatomic) BOOL isDynamic;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegmentInfoSticker> { struct NLESegmentInfoSticker *x0; struct __shared_weak_count *x1; })a0;
- (void)setInfoStringList:(id)a0;
- (id)getInfoStringList;
- (id)getResNode;
- (void).cxx_destruct;
- (id)init;

@end
