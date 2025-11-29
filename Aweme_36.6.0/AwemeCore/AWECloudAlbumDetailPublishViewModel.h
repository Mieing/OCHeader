@class ACCCameraSubscription, NSString;

@interface AWECloudAlbumDetailPublishViewModel : NSObject <AWECloudAlbumDetailPublishServiceProtocol>

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (copy, nonatomic) id /* block */ publishTrigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
