@class NSString, ACCTCECropMediaPlayer;

@interface ACCTCECropMediaContainerView : UIView <AEKMultiEditorPlayerPreview>

@property (readonly, nonatomic) ACCTCECropMediaPlayer *mainPlayer;
@property (readonly, nonatomic) ACCTCECropMediaPlayer *subPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
