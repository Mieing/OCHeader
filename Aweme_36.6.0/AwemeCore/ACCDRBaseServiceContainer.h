@class UIViewController, AWEVideoPublishViewModel;
@protocol ACCDRViewControllerProtocol, ACCBusinessInputData;

@interface ACCDRBaseServiceContainer : IESStaticContainer

@property (weak, nonatomic) AWEVideoPublishViewModel *model;
@property (weak, nonatomic) UIViewController<ACCDRViewControllerProtocol> *viewController;
@property (weak, nonatomic) id<ACCBusinessInputData> inputData;

- (id)provideSingleton:(id)a0 ACCDRContextProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCDRLynxUtilService:(id)a1;
- (void).cxx_destruct;

@end
