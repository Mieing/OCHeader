@class NSString;

@interface IESLiveGameCPAndienceEntranceServiceImpl : NSObject <IESGCPLiveAndienceEntranceService>

@property (nonatomic) BOOL toolbarInAnimation;
@property (nonatomic) double entranceShowTime;
@property (readonly, nonatomic) long long currentLocation;
@property (readonly, nonatomic) long long fromType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)setupObserver;
- (void)playCombineOutAnimationWithCompletion:(id /* block */)a0;
- (void)playCombineBackAnimationWithCompletion:(id /* block */)a0;
- (BOOL)receivedShowEntranceMsg;
- (double)receivedShowEntranceMsgTime;
- (BOOL)entranceIsShown;
- (id)entranceToolbarData;
- (id)livePageTrackerRoute;
- (id)getEntranceItemView;

@end
