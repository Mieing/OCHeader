@class NSString, ACCSpeedControlComponent;
@protocol ACCRecorderViewContainer, ACCRecordFlowService, IESServiceProvider, ACCRecordTemplateVideoPreviewService, ACCRecordPropService, ACCFeatureComponent;

@interface ACCSpeedControlComponentPropPlugin : NSObject <ACCRecordPropServiceSubscriber, ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly, weak, nonatomic) ACCSpeedControlComponent *hostComponent;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<ACCRecordFlowService> flowService;
@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCRecordTemplateVideoPreviewService> templateVideoPreviewService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

- (void)bindServices:(id)a0;
- (void)updateWithEffect:(id)a0;
- (void).cxx_destruct;

@end
