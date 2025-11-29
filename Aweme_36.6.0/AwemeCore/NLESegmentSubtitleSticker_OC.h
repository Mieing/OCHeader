@class NLEResourceNode_OC, NLEStyleText_OC;

@interface NLESegmentSubtitleSticker_OC : NLESegmentSticker_OC

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentSubtitleSticker> { struct NLESegmentSubtitleSticker *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLEResourceNode_OC *srtFile;
@property (retain, nonatomic) NLEResourceNode_OC *effectSDKFile;
@property (retain, nonatomic) NLEStyleText_OC *style;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } timeClipStart;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } timeClipEnd;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegmentSubtitleSticker> { struct NLESegmentSubtitleSticker *x0; struct __shared_weak_count *x1; })a0;
- (id)getResNode;
- (void).cxx_destruct;
- (id)init;

@end
