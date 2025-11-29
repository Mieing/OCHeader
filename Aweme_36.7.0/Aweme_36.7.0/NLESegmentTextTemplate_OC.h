@class NSArray, NLEResourceNode_OC, NSString;

@interface NLESegmentTextTemplate_OC : NLESegment_OC

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentTextTemplate> { struct NLESegmentTextTemplate *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLEResourceNode_OC *effectSDKFile;
@property (copy, nonatomic) NSArray *fontResList;
@property (copy, nonatomic) NSArray *textClips;
@property (retain, nonatomic) NSString *aliasType;
@property (retain, nonatomic) NSArray *fallbackFontList;
@property (retain, nonatomic) NSArray *dependResourceList;
@property (nonatomic) float alpha;
@property (nonatomic) BOOL visible;
@property (nonatomic) BOOL newEffectProtocol;
@property (nonatomic) long long fixedTime;
@property (nonatomic) BOOL isDynamic;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegmentTextTemplate> { struct NLESegmentTextTemplate *x0; struct __shared_weak_count *x1; })a0;
- (void)addTextClip:(id)a0;
- (void)clearTextClips;
- (void)removeTextClip:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)getType;
- (id)init;

@end
