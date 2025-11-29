@class NLESegmentTransition_OC, NSString, NLETrackSlot_OC;
@protocol AEKVideoClipTransitionData, AEKLokiResource;

@interface AEKVideoClipTransitionOperatorImpl : AEKBaseRenderEditor <AEKVideoClipTransitionData, AEKVideoClipTransitionOperator, AEKElementDiffableNode>

@property (retain, nonatomic) NLETrackSlot_OC *slot;
@property (retain, nonatomic) NLESegmentTransition_OC *transition;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) id<AEKLokiResource> resource;
@property (readonly, nonatomic) BOOL overlap;
@property (readonly, nonatomic) BOOL antiTimeChange;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<AEKVideoClipTransitionData> data;
@property (readonly, nonatomic) long long updateID;
@property (readonly, nonatomic) BOOL isEnable;

- (id)diffChangesWithOrigin:(id)a0;
- (id)initWithSlot:(id)a0 transition:(id)a1 baseData:(id)a2 subscriberProvider:(id)a3 coreUnit:(id)a4;
- (id)setAntiTimeChange:(BOOL)a0;
- (void).cxx_destruct;
- (id)remove;
- (id)setDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)setOverlap:(BOOL)a0;
- (id)toJsonString;

@end
