@class NLERefactoredComposerSegmentItem_OC, NSString, ACCLokiURS, NSDictionary, AEKElementDiffableNode;
@protocol AEKFilterItemData, AEKUpgradeFilterSegmentConvertible, AEKUpgradeFilterContainerConvertible;

@interface AEKFilterItemOperatorImpl : AEKBaseRenderEditor <AEKFilterItemData, AEKFilterItemOperator, AEKElementDiffableNode>

@property (retain, nonatomic) id<AEKUpgradeFilterContainerConvertible> container;
@property (retain, nonatomic) id<AEKUpgradeFilterSegmentConvertible> filterSegment;
@property (retain, nonatomic) NLERefactoredComposerSegmentItem_OC *filterItem;
@property (readonly, nonatomic) BOOL isVisible;
@property (readonly, nonatomic) unsigned long long targetType;
@property (readonly, nonatomic) NSString *targetIdentifier;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) AEKElementDiffableNode *diffableNode;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long resourceType;
@property (readonly, nonatomic) ACCLokiURS *urs;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long labelID;
@property (readonly, copy, nonatomic) NSString *filePath;
@property (readonly, nonatomic) long long detailType;
@property (readonly, copy, nonatomic) NSDictionary *features;
@property (readonly, copy, nonatomic) NSDictionary *noEffectFeatures;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } startTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } endTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (readonly, nonatomic) id<AEKFilterItemData> data;
@property (readonly, nonatomic) long long updateID;
@property (readonly, nonatomic) BOOL isEnable;

- (id)updateFeatures:(id)a0;
- (id)diffChangesWithOrigin:(id)a0;
- (BOOL)isRelatedPath:(id)a0;
- (id)replaceFeatures:(id)a0;
- (id)updateNoEffectIntensity:(double)a0 tag:(id)a1;
- (id)initWithContainer:(id)a0 filterSegment:(id)a1 filterItem:(id)a2 baseData:(id)a3 subscriberProvider:(id)a4 coreUnit:(id)a5;
- (void)replaceSandBoxPrefixIfNeeded;
- (void).cxx_destruct;
- (id)setEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)setStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)remove;
- (void)setLabelID:(long long)a0;
- (id)id;
- (id)setIsVisible:(BOOL)a0;
- (id)toJsonString;

@end
