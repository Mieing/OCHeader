@class NSString;
@protocol RTVInteractionPreviewContainerConfigurator, RTVXRControllerInjector, RTVInteractionToolBarViewControllerConfigurator, RTVInteractionControlViewConfigurationController;

@interface RTVInteractionEffectGameConfigurator : NSObject <RTVInteractionConfigurator>

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVInteractionControlViewConfigurationController> controlViewConfigurator;
@property (readonly, nonatomic) id<RTVInteractionToolBarViewControllerConfigurator> toolBarViewConfigurator;
@property (readonly, nonatomic) id<RTVInteractionPreviewContainerConfigurator> previewContainerConfigurator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)didChangeInteractionController:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
