@class UIViewController, NSString, ACCEditViewControllerInputData, ACCEditMVModel, ACCRecordViewControllerInputData;

@interface AWEACCRecordToEditRouterCoordinatorImpl : NSObject <ACCRecordToEditRouterCoordinatorProtocol, UINavigationControllerDelegate>

@property (retain, nonatomic) ACCEditMVModel *mvModel;
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
- (void)routeToNextWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)produceClearDataWith:(id)a0 sourceModel:(id)a1;
- (void).cxx_destruct;

@end
