@class RxDeferred, AWEInnerNotificationRequest, NSString;
@protocol AWEInnerNotificationCoordinatorDelegate;

@interface AWEInnerNotificationCoordinator : NSObject <AWEInnerPushProtocol>

@property (retain, nonatomic) RxDeferred *deferred;
@property (readonly, nonatomic) AWEInnerNotificationRequest *request;
@property (weak, nonatomic) id<AWEInnerNotificationCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (long long)innerPushLevel;
- (void)dismissInnerPush:(id)a0;
- (void)displayInnerPush:(id)a0;
- (id)requestShowNotificationWithDelegate:(id)a0 requestIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)dismissNotificationWithIdentifier:(id)a0;

@end
