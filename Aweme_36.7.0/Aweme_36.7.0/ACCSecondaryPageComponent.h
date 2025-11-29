@protocol ACCSecondaryPageInputData, ACCSequenceEditServiceProtocol, ACCSecondaryPageService;

@interface ACCSecondaryPageComponent : ACCFeatureComponent

@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCSecondaryPageService> secondaryPageService;
@property (weak, nonatomic) id<ACCSecondaryPageInputData> inputData;

- (double)subViewHeight;
- (id)subViewInHierarchy;
- (unsigned long long)secondaryPageComponentType;
- (void)secondaryPageLayoutDidRefresh;
- (void).cxx_destruct;

@end
