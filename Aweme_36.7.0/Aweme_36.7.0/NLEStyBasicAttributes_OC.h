@class NSString, NLEResourceNode_OC, NSArray;

@interface NLEStyBasicAttributes_OC : NLENode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLEStyBasicAttributes> { struct NLEStyBasicAttributes *x0; struct __shared_weak_count *x1; } cppValue;
@property (copy, nonatomic) NSString *widgetName;
@property (nonatomic) int layerOrder;
@property (nonatomic) float startTime;
@property (nonatomic) float duration;
@property (nonatomic) float positionX;
@property (nonatomic) float positionY;
@property (nonatomic) float rotation;
@property (nonatomic) float scaleX;
@property (nonatomic) float scaleY;
@property (nonatomic) BOOL flipX;
@property (nonatomic) BOOL flipY;
@property (nonatomic) BOOL visible;
@property (nonatomic) float alpha;
@property (retain, nonatomic) NLEResourceNode_OC *resource;
@property (retain, nonatomic) NSArray *animInfos;
@property (nonatomic) BOOL mainTextTitle;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLEStyBasicAttributes> { struct NLEStyBasicAttributes *x0; struct __shared_weak_count *x1; })a0;
- (void)addAnimInfo:(id)a0;
- (void)removeAnimInfo:(id)a0;
- (void)clearAnimInfo;
- (void).cxx_destruct;
- (id)init;

@end
