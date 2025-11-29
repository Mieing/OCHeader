@class UIViewController, NSString, ACCEditViewControllerInputData, ACCRecordViewControllerInputData;

@interface AWEFlyBirdRecorderRouterCoordinator : NSObject <ACCRecordToEditRouterCoordinatorProtocol>

@property (retain, nonatomic) ACCRecordViewControllerInputData *sourceViewControllerInputData;
@property (retain, nonatomic) ACCEditViewControllerInputData *targetViewControllerInputData;
@property (weak, nonatomic) UIViewController *sourceViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)handleTargetViewControllerInputData;
- (id)initWithSourceViewController:(id)a0 targetViewControllerInputData:(id)a1;
- (void)routeWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)getEditVCWithInputData:(id)a0;
- (id)getTargetViewControllerInputDataWithInputData:(id)a0;
- (void).cxx_destruct;

@end
