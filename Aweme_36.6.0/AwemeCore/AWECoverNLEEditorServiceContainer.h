@protocol ACCBusinessInputData, ACCUIViewControllerProtocol;

@interface AWECoverNLEEditorServiceContainer : IESStaticContainer

@property (weak, nonatomic) id<ACCBusinessInputData> inputData;
@property (weak, nonatomic) id<ACCUIViewControllerProtocol> viewController;

- (id)provideSingleton:(id)a0 ACCPublishRepository:(id)a1;
- (id)provideSingleton:(id)a0 AWECoverEditorNLEEditorLayoutManager:(id)a1;
- (void).cxx_destruct;

@end
