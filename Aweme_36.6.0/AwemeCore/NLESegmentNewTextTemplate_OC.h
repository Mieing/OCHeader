@class NSArray, NLEResourceNode_OC, NSString;

@interface NLESegmentNewTextTemplate_OC : NLESegment_OC

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentNewTextTemplate> { struct NLESegmentNewTextTemplate *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) float alpha;
@property (nonatomic) BOOL newEffectProtocol;
@property (nonatomic) BOOL usePrefabResorce;
@property (retain, nonatomic) NLEResourceNode_OC *effectSDKFile;
@property (retain, nonatomic) NSArray *dependencyResources;
@property (retain, nonatomic) NSArray *textClips;
@property (retain, nonatomic) NSArray *stickers;
@property (retain, nonatomic) NSArray *shapes;
@property (retain, nonatomic) NLEResourceNode_OC *draftScene;
@property (nonatomic) unsigned long long subType;
@property (copy, nonatomic) NSString *effectId;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegmentNewTextTemplate> { struct NLESegmentNewTextTemplate *x0; struct __shared_weak_count *x1; })a0;
- (id)getAllResourceNode;
- (void)addDependencyResource:(id)a0;
- (void)removeDependencyResource:(id)a0;
- (void)clearDependencyResources;
- (void)removeSticker:(id)a0;
- (void)clearStickers;
- (void)setSahpes:(id)a0;
- (void)removeShape:(id)a0;
- (void)addTextClip:(id)a0;
- (void)clearTextClips;
- (void)removeTextClip:(id)a0;
- (id)effectJsonToString;
- (void).cxx_destruct;
- (id)init;
- (void)addSticker:(id)a0;
- (void)clearShapes;
- (void)addShape:(id)a0;

@end
