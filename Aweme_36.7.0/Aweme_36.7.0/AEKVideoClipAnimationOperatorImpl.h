@class NLEVideoAnimation_OC, NSString, NLETrackSlot_OC;
@protocol AEKVideoClipAnimationData, AEKLokiResource;

@interface AEKVideoClipAnimationOperatorImpl : AEKBaseRenderEditor <AEKVideoClipAnimationData, AEKVideoClipAnimationOperator, AEKElementDiffableNode>

@property (retain, nonatomic) NLETrackSlot_OC *slot;
@property (retain, nonatomic) NLEVideoAnimation_OC *animation;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, copy, nonatomic) NSString *paramJson;
@property (readonly, nonatomic) BOOL newVersion;
@property (readonly, nonatomic) id<AEKLokiResource> resource;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<AEKVideoClipAnimationData> data;
@property (readonly, nonatomic) long long updateID;
@property (readonly, nonatomic) BOOL isEnable;

- (id)diffChangesWithOrigin:(id)a0;
- (id)setParamJson:(id)a0;
- (id)initWithSlot:(id)a0 animation:(id)a1 baseData:(id)a2 subscriberProvider:(id)a3 coreUnit:(id)a4;
- (void).cxx_destruct;
- (id)remove;
- (id)setDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)toJsonString;
- (id)setNewVersion:(BOOL)a0;

@end
