@class NSString, NLEResourceNode_OC, NLESegmentEffectMusicInfo_OC;

@interface NLESegmentEffect_OC : NLESegment_OC

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentEffect> { struct NLESegmentEffect *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLEResourceNode_OC *effectSDKEffect;
@property (copy, nonatomic) NSString *effectName;
@property (copy, nonatomic) NSString *effectTag;
@property (nonatomic) unsigned long long applyTargetType;
@property (copy, nonatomic) NSString *jsonParam;
@property (copy, nonatomic) NSString *cachePath;
@property (nonatomic) BOOL needReload;
@property (nonatomic) BOOL syncLoad;
@property (readonly, nonatomic) BOOL isSupportTransform;
@property (retain, nonatomic) NLESegmentEffectMusicInfo_OC *musicInfo;
@property (nonatomic) BOOL isDynamic;
@property (nonatomic) BOOL newEffectProtocol;
@property (nonatomic) unsigned long long segmentType;
@property (retain, nonatomic) NLEResourceNode_OC *draftScene;
@property (nonatomic) long long fixedTime;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegmentEffect> { struct NLESegmentEffect *x0; struct __shared_weak_count *x1; })a0;
- (void)setAdjustParams:(id)a0;
- (id)adjustParams;
- (void)addAdjustParam:(id)a0;
- (void)removeAdjustParam:(id)a0;
- (void)clearAdjustParams;
- (id)getAdjustParams;
- (id)getAssetFiles;
- (void)clearAssetFiles;
- (void)removeAssetFile:(id)a0;
- (void)addAssetFile:(id)a0;
- (void)addRenderCache:(id)a0;
- (void)removeRenderCache:(id)a0;
- (void)clearRenderCache;
- (id)getRenderCache;
- (void)addStringParam:(id)a0;
- (void)removeStringParam:(id)a0;
- (void)clearStringParam;
- (id)getStringParams;
- (void).cxx_destruct;
- (unsigned long long)getType;
- (id)init;

@end
