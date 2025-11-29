@protocol ACCBusinessInputData, ACCUIViewControllerProtocol;

@interface ACCOCFSegmentEditServiceContainer : IESStaticContainer

@property (weak, nonatomic) id<ACCBusinessInputData> inputData;
@property (weak, nonatomic) id<ACCUIViewControllerProtocol> viewController;

- (id)provideSingleton:(id)a0 ACCOneClickFilmPlayerService:(id)a1;
- (id)provideSingleton:(id)a0 ACCOCFViewContainerProtocol:(id)a1;
- (id)provideWeakObject:(id)a0 ACCEditorOneClickFilmingViewModelProtocol:(id)a1;
- (void).cxx_destruct;

@end
