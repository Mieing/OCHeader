@class ACCCameraSubscription, NSString;

@interface AWECloudAlbumDetailNavigationViewModel : NSObject <AWECloudAlbumDetailNavigationServiceProtocol>

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addMoreSubscriber:(id)a0;
- (void)notifyDidClickSelect;
- (void)notifyDidClickCancel;
- (void)notifyDidClickMoreAddContent;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;

@end
