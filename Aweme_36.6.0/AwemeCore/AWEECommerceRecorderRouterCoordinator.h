@class UIViewController, NSString, ACCEditViewControllerInputData, ACCRecordViewControllerInputData;

@interface AWEECommerceRecorderRouterCoordinator : NSObject <ACCRecordToEditRouterCoordinatorProtocol>

@property (retain, nonatomic) ACCRecordViewControllerInputData *sourceViewControllerInputData;
@property (retain, nonatomic) ACCEditViewControllerInputData *targetViewControllerInputData;
@property (weak, nonatomic) UIViewController *sourceViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
