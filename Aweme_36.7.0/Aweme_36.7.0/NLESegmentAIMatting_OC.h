@class NSString, NLEResourceNode_OC, UIColor;

@interface NLESegmentAIMatting_OC : NLESegment_OC

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentAIMatting> { struct NLESegmentAIMatting *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLEResourceNode_OC *resourceAiMatting;
@property (copy, nonatomic) NSString *workSpace;
@property (nonatomic) long long archerStrategy;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } aiMattingCilpStart;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } aiMattingCilpEnd;
@property (nonatomic) unsigned long long mattingType;
@property (nonatomic) unsigned long long blendMode;
@property (copy, nonatomic) UIColor *blendBackgroundColor;
@property (nonatomic) BOOL disableSaveCacheInCompile;
@property (nonatomic) BOOL disableDownSampleForBach;
@property (retain, nonatomic) NLEResourceNode_OC *resourceAlgorithm;
@property (nonatomic) BOOL markBachReturnCrop;
@property (nonatomic) BOOL mattingAdjust;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegmentAIMatting> { struct NLESegmentAIMatting *x0; struct __shared_weak_count *x1; })a0;
- (BOOL)getDisableSaveCacheInCompile;
- (BOOL)getDisableDownSampleForBach;
- (void).cxx_destruct;
- (id)init;

@end
