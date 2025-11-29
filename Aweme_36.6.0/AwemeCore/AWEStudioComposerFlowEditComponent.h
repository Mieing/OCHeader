@class NSString;

@interface AWEStudioComposerFlowEditComponent : ACCFeatureComponent <ACCVideoEditFlowControlSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)notifyEditPageExitWithType:(long long)a0;
- (void)bindServices:(id)a0;

@end
