@class NSString;

@interface AWEExperiencePiPDelegateProxy : AWEExperienceDelegateProxy <AVPictureInPictureControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)printSuperviewsInOneLineFromView:(id)a0;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)a0;
- (void)pictureInPictureController:(id)a0 failedToStartPictureInPictureWithError:(id)a1;

@end
