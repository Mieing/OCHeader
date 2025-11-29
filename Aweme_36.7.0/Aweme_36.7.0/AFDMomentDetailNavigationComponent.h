@class NSString, AFDCloseFriendsMomentTrackerService;
@protocol AFDMomentDetailFeedInterface, AFDMomentDetailCameraInterface;

@interface AFDMomentDetailNavigationComponent : AFDMomentDetailBaseComponent <AFDMomentDetailNavigationInterface>

@property (retain, nonatomic) id<AFDMomentDetailCameraInterface> cameraComponent;
@property (retain, nonatomic) id<AFDMomentDetailFeedInterface> feedComponent;
@property (retain, nonatomic) AFDCloseFriendsMomentTrackerService *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadComponent;
- (void)componentDidLoad;
- (void)enterFeed;
- (void)enterCamera;
- (void).cxx_destruct;
- (id)context;

@end
