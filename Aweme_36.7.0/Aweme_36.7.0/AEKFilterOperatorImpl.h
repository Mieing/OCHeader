@class NSString, ACCLokiURS, NSDictionary, AEKElementDiffableNode;
@protocol AEKFilterConvertible, AEKFilterContainerConvertible, AEKFilterData;

@interface AEKFilterOperatorImpl : AEKBaseRenderEditor <AEKFilterData, AEKFilterOperator, AEKElementDiffableNode>

@property (retain, nonatomic) id<AEKFilterContainerConvertible> container;
@property (retain, nonatomic) id<AEKFilterConvertible> filter;
@property (readonly, copy, nonatomic) NSString *id;
@property (readonly, nonatomic) BOOL enableOptUpdate;
@property (readonly, nonatomic) AEKElementDiffableNode *diffableNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long resourceType;
@property (readonly, nonatomic) ACCLokiURS *urs;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long labelID;
@property (readonly, copy, nonatomic) NSString *filePath;
@property (readonly, nonatomic) long long detailType;
@property (readonly, copy, nonatomic) NSDictionary *features;
@property (readonly, copy, nonatomic) NSDictionary *noEffectFeatures;
@property (readonly, nonatomic) id<AEKFilterData> data;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long updateID;
@property (readonly, nonatomic) BOOL isEnable;

- (id)setEnableOptUpdate:(BOOL)a0;
- (id)diffChangesWithOrigin:(id)a0;
- (BOOL)isRelatedPath:(id)a0;
- (id)replaceFeatures:(id)a0;
- (id)initWithContainer:(id)a0 filter:(id)a1 baseData:(id)a2 subscriberProvider:(id)a3 coreUnit:(id)a4;
- (id)updateFeatureWithIntensity:(double)a0 tag:(id)a1;
- (id)updateNoEffectIntensity:(double)a0 tag:(id)a1;
- (void).cxx_destruct;
- (id)remove;
- (void)setLabelID:(long long)a0;

@end
