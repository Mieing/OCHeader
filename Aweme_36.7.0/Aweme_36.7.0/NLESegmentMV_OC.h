@class NLEStyClip_OC, NLEResourceNode_OC, NLEStyCrop_OC;

@interface NLESegmentMV_OC : NLESegment_OC

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentMV> { struct NLESegmentMV *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLEResourceNode_OC *sourceFile;
@property (nonatomic) unsigned long long sourceFileType;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } start;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } end;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (retain, nonatomic) NLEStyCrop_OC *crop;
@property (retain, nonatomic) NLEStyClip_OC *clip;
@property (nonatomic) double volume;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegmentMV> { struct NLESegmentMV *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
