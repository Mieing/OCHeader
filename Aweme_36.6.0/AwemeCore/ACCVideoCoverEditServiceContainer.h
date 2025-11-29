@protocol ACCBusinessInputData, ACCUIViewControllerProtocol;

@interface ACCVideoCoverEditServiceContainer : IESStaticContainer

@property (weak, nonatomic) id<ACCBusinessInputData> inputData;
@property (weak, nonatomic) id<ACCUIViewControllerProtocol> viewController;

- (id)provideSingleton:(id)a0 ACCVideoCoverEditSessionProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCVideoCoverEditServiceProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCEditVideoCoverMixedProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCVideoCoverEditTemplateProtocol:(id)a1;
- (void).cxx_destruct;

@end
