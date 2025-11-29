@class NSString, UIViewController;

@interface ACCCreativeToolsEditorRouterCoordinator : NSObject <ACCRouterCoordinatorProtocol>

@property (weak, nonatomic) UIViewController *sourceViewController;
@property (retain, nonatomic) id sourceViewControllerInputData;
@property (retain, nonatomic) id targetViewControllerInputData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
