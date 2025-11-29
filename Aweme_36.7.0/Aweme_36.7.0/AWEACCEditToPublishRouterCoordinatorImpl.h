@class ACCPublishViewControllerInputData, NSString, ACCEditViewControllerInputData, UIViewController;

@interface AWEACCEditToPublishRouterCoordinatorImpl : NSObject <ACCEditToPublishRouterCoordinatorProtocol>

@property (retain, nonatomic) ACCEditViewControllerInputData *sourceViewControllerInputData;
@property (retain, nonatomic) ACCPublishViewControllerInputData *targetViewControllerInputData;
@property (weak, nonatomic) UIViewController *sourceViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
