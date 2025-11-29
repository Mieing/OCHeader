@class ACCCameraSubscription, NSString;

@interface ACCBaseEditModeServiceImpl : NSObject <ACCEditModeService>

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)notifyWillExitEditMode;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;

@end
