@class ACCCameraSubscription, NSString;

@interface AWECloudAlbumDetailDownloadViewModel : NSObject <AWECloudAlbumDetailDownloadServiceProtocol>

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (copy, nonatomic) id /* block */ downloadTrigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
