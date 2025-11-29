@class ACCCameraSubscription, NSString, EcTaskStatus, EcAlbum, EcTaskProgress;

@interface AWECloudAlbumDetailDataViewModel : NSObject <AWECloudAlbumDetailDataServiceProtocol>

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (readonly, nonatomic) EcAlbum *album;
@property (readonly, nonatomic) EcTaskStatus *status;
@property (readonly, nonatomic) EcTaskProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addAlbumSubscriber:(id)a0;
- (void)addTaskSubscriber:(id)a0;
- (BOOL)uploadTaskExists;
- (void)notifyDidChangeAlbum:(id)a0;
- (void)notifyDidChangeStatus:(id)a0;
- (void)notifyDidChangeProgress:(id)a0;
- (void)notifyDidChangeItems:(id)a0;
- (void).cxx_destruct;

@end
