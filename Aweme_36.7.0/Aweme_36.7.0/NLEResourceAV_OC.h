@class NSString, NLEMediaInfo_OC;

@interface NLEResourceAV_OC : NLEResourceNode_OC

@property (retain, nonatomic) NLEMediaInfo_OC *stageMediaInfo;
@property (nonatomic) struct shared_ptr<cut::model::NLEResourceAV> { struct NLEResourceAV *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (copy, nonatomic) NSString *fileInfo;
@property (nonatomic) BOOL hasAudio;
@property (readonly, nonatomic) NLEMediaInfo_OC *mediaInfo;
@property (retain, nonatomic) NSString *musicId;

+ (id)videoResourceWithAsset:(id)a0 nle:(id)a1;
+ (double)p_durationWithURL:(id)a0;
+ (id)audioResourceWithAsset:(id)a0 nle:(id)a1;
+ (id)videoResourceWithAsset:(id)a0 draftFolder:(id)a1;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLEResourceAV> { struct NLEResourceAV *x0; struct __shared_weak_count *x1; })a0;
- (id)aek_mediaInfo;
- (void)setAek_mediaInfo:(id)a0;
- (void)p_setupForVideoWithAsset:(id)a0 draftFolder:(id)a1;
- (void)dve_setupForVideo:(id)a0;
- (void)dve_setupForVideo:(id)a0 resourceFilePath:(id)a1;
- (void)dve_setupForPhoto:(id)a0 width:(unsigned int)a1 height:(unsigned int)a2 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (void)dve_setupForMedia:(id)a0 type:(unsigned long long)a1;
- (void)dve_setupForPhoto:(id)a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)dve_setupForAudio:(id)a0;
- (void)dve_setupForRecord:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
