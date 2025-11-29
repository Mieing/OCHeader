@class NSString, NLEResourceNode_OC;

@interface NLESegmentEffectMusicInfo_OC : NLENode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentEffectMusicInfo> { struct NLESegmentEffectMusicInfo *x0; struct __shared_weak_count *x1; } cppValue;
@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *singer;
@property (copy, nonatomic) NSString *musicName;
@property (retain, nonatomic) NLEResourceNode_OC *coverFile;
@property (retain, nonatomic) NLEResourceNode_OC *lyricFile;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } trimIn;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } totalDuration;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } seqIn;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegmentEffectMusicInfo> { struct NLESegmentEffectMusicInfo *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
