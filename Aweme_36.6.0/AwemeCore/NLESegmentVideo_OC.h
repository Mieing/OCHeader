@class NSString, NLEStyClip_OC, NLEStyCanvas_OC, NLEResourceAV_OC, NLEResourceNode_OC, NLEStyCrop_OC, NLELogVideoProcessParam_OC, NSNumber;

@interface NLESegmentVideo_OC : NLESegmentAudio_OC

@property (nonatomic) BOOL isMutable;
@property (nonatomic) BOOL isMutable;
@property (readonly, copy, nonatomic) NSString *materialId;
@property (nonatomic) struct shared_ptr<cut::model::NLESegmentVideo> { struct NLESegmentVideo *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLEStyCrop_OC *crop;
@property (retain, nonatomic) NLEStyClip_OC *clip;
@property (retain, nonatomic) NLEStyCanvas_OC *canvasStyle;
@property (retain, nonatomic) NLEResourceAV_OC *videoFile;
@property (retain, nonatomic) NLEResourceNode_OC *blendFile;
@property (nonatomic) double alpha;
@property (retain, nonatomic) NSNumber *accelerateInfo;
@property (nonatomic) BOOL isWithEffect;
@property (nonatomic) int clipViewIndex;
@property (retain, nonatomic) NLELogVideoProcessParam_OC *logVideoProcessParam;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegmentVideo> { struct NLESegmentVideo *x0; struct __shared_weak_count *x1; })a0;
- (void)setEnableAudio:(BOOL)a0;
- (id)getResNode;
- (BOOL)hasEnableAudio;
- (void).cxx_destruct;
- (unsigned long long)getType;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })getDuration;
- (id)init;

@end
