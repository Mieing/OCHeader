@class NSString, ACCCaptureComponent, AWEVideoPublishViewModel;
@protocol ACCFeatureComponent;

@interface ACCCaptureCompoentDuetSingPlugin : NSObject <ACCFeatureComponentPlugin>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly, weak, nonatomic) ACCCaptureComponent *hostComponent;
@property (readonly, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCFeatureComponent> component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindToComponent:(id)a0;
- (void).cxx_destruct;

@end
