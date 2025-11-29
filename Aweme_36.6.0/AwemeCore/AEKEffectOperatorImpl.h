@class NLETrack_OC, NSString, AEKElementDiffableNode, AEKBasicResource, NLESegmentEffect_OC, NSDictionary, NLETrackSlot_OC, ACCLokiURS, AEKRenderTimeImpl;
@protocol AEKEffectData;

@interface AEKEffectOperatorImpl : AEKBaseRenderEditor <AEKEffectData, AEKEffectOperator, AEKElementDiffableNode>

@property (retain, nonatomic) NLETrack_OC *effectTrack;
@property (retain, nonatomic) NLETrackSlot_OC *effectTrackSlot;
@property (retain, nonatomic) NLESegmentEffect_OC *segmentEffect;
@property (retain, nonatomic) AEKRenderTimeImpl *timeImpl;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *UUID;
@property (readonly, nonatomic) AEKBasicResource *basicResource;
@property (readonly, nonatomic) BOOL isEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL newToolChain;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long packType;
@property (readonly, nonatomic) ACCLokiURS *URS;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *filePath;
@property (readonly, copy, nonatomic) NSDictionary *features;
@property (readonly, copy, nonatomic) NSString *categoryKey;
@property (readonly, nonatomic) AEKElementDiffableNode *diffableNode;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } startTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } endTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (readonly, nonatomic) id<AEKEffectData> data;
@property (readonly, nonatomic) long long updateID;

- (id)setCategoryKey:(id)a0;
- (id)setFixedTime:(long long)a0;
- (id)diffChangesWithOrigin:(id)a0;
- (id)replaceFeatures:(id)a0;
- (id)initWithTrack:(id)a0 baseData:(id)a1 subscriberProvider:(id)a2 coreUnit:(id)a3;
- (id)updateFeature:(double)a0 forKey:(id)a1;
- (id)setBasicResource:(id)a0;
- (id)moveToBottom;
- (void).cxx_destruct;
- (id)setEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)setStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)remove;
- (id)setEnable:(BOOL)a0;
- (id)clearFeatures;
- (id)toJsonString;
- (id)removeFeature:(id)a0;

@end
