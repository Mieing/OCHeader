@class UIViewController, NSString, ACCEditViewControllerInputData, NSDate, ACCRecordViewControllerInputData;

@interface AWEPOIUGCRecorderRouterCoordinator : NSObject <ACCRecordToEditRouterCoordinatorProtocol>

@property (nonatomic) BOOL isTransferToImageAlbum;
@property (retain, nonatomic) NSDate *startNextTime;
@property (nonatomic) BOOL dismissed;
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
- (void)p_dismissSelf;
- (id)editPageEnterFrom;
- (id)editPageEnterMethod;
- (void)uploadImageWithPublishModel:(id)a0 completion:(id /* block */)a1;
- (void)openEditPageWithPublishModel:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
