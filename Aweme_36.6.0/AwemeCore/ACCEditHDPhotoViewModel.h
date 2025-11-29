@class ACCCameraSubscription, NSString, AWEVideoPublishViewModel;

@interface ACCEditHDPhotoViewModel : NSObject <ACCEditHDPhotoService>

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addSubscription:(id)a0;
- (BOOL)useHDTakePicture;
- (BOOL)didTakeHDPicture;
- (BOOL)isEditHadApplied;
- (void)notifyHDPhotoDidReplacedSuccess;
- (void)trackReplaceImageSuccess;
- (void).cxx_destruct;

@end
