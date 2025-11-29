@class UIImage, NSString;

@interface AWEProfileEditFlowAvatarViewModel : AWEProfileEditFlowStepViewModel

@property (retain, nonatomic) UIImage *chosenImage;
@property (copy, nonatomic) NSString *chosenImageURI;
@property (nonatomic) BOOL uploadingImage;
@property (nonatomic) BOOL enablePublishAsStory;
@property (copy, nonatomic) NSString *title;

- (void)chooseImage;
- (void)p_trackGuideProfilePhotoWithEventType:(id)a0;
- (void)p_trackReplaceProfilePhoto;
- (void)p_trackSaveProfilePhoto;
- (id)trackFlowType;
- (void)trackEditAvatarPageSwitch:(unsigned long long)a0;
- (void)trackImpression;
- (Class)stepViewClass;
- (void).cxx_destruct;
- (id)impressionEvent;
- (id)init;
- (void)finishWithCompletion:(id /* block */)a0;

@end
