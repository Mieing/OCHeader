@class NSArray, NSString;
@protocol AEKFilterSegmentData, AEKUpgradeFilterSegmentConvertible, AEKUpgradeFilterContainerConvertible;

@interface AEKFilterSegmentOperatorImpl : AEKBaseRenderEditor <AEKFilterSegmentData, AEKFilterSegmentOperator>

@property (retain, nonatomic) id<AEKUpgradeFilterContainerConvertible> container;
@property (retain, nonatomic) id<AEKUpgradeFilterSegmentConvertible> filterSegment;
@property (readonly, copy, nonatomic) NSArray *filters;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<AEKFilterSegmentData> data;

- (id)filterImpls;
- (id)initWithContainer:(id)a0 filterSegment:(id)a1 baseData:(id)a2 subscriberProvider:(id)a3 coreUnit:(id)a4;
- (id)addFilterWithResource:(id)a0 operateBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)remove;
- (id)batch:(id /* block */)a0;
- (id)toJsonString;

@end
