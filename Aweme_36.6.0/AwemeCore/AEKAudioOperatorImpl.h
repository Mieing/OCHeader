@class NLETrack_OC, NSArray, NSString, AEKElementDiffableNode;
@protocol AEKAudioData, AEKAudioExtraData;

@interface AEKAudioOperatorImpl : AEKBaseRenderEditor <AEKAudioData, AEKAudioOperator, AEKElementDiffableNode>

@property (retain, nonatomic) NLETrack_OC *track;
@property (retain, nonatomic) NSArray *clipImpls;
@property (readonly, nonatomic) BOOL isBGM;
@property (readonly, nonatomic) long long layer;
@property (readonly, nonatomic) unsigned long long clipsCount;
@property (readonly, copy, nonatomic) NSArray *clips;
@property (readonly, nonatomic) id<AEKAudioExtraData> extra;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) AEKElementDiffableNode *diffableNode;
@property (readonly, nonatomic) id<AEKAudioData> data;
@property (readonly, nonatomic) long long updateID;
@property (readonly, nonatomic) BOOL isEnable;

- (id)extraOperator;
- (id)addAudioClipWithResource:(id)a0;
- (id)addPlaceHolderAudioClipWithResourceType:(unsigned long long)a0;
- (id)insertAudioClipWithAudioClip:(id)a0 needClone:(BOOL)a1;
- (id)insertAudioClipWithAudioClip:(id)a0 needClone:(BOOL)a1 atIndex:(unsigned long long)a2;
- (id)splitAudioWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)clipWithId:(id)a0;
- (id)sortByTime;
- (id)updateClipWithId:(id)a0 block:(id /* block */)a1;
- (id)setIsBGM:(BOOL)a0;
- (BOOL)isRelateWithAsset:(id)a0;
- (id)diffChangesWithOrigin:(id)a0;
- (BOOL)isUserEditAudio;
- (id)initWithTrack:(id)a0 baseData:(id)a1 subscriberProvider:(id)a2 coreUnit:(id)a3;
- (unsigned long long)nleTypeFromAudioType:(unsigned long long)a0;
- (id)setLayer:(long long)a0;
- (void).cxx_destruct;
- (id)remove;
- (id)batch:(id /* block */)a0;
- (id)clipAtIndex:(unsigned long long)a0;
- (id)toJsonString;

@end
