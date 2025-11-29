@class NSString, RACSubject, UIImage, ACCGroupedPredicate, NSHashTable, RACSignal;

@interface ACCRecordUploadButtonViewModel : ACCRecorderViewModel <ACCRecordUploadButtonService>

@property (retain, nonatomic) RACSubject *updateHiddenSubject;
@property (retain, nonatomic) RACSubject *viewDidAppearSubject;
@property (retain, nonatomic) RACSubject *cameraStartRenderSubject;
@property (retain, nonatomic) RACSubject *uploadVCShowedSubject;
@property (retain, nonatomic) ACCGroupedPredicate *needHiddenUploadLabel;
@property (retain, nonatomic) ACCGroupedPredicate *hideUploadButtonPredicate;
@property (retain, nonatomic) ACCGroupedPredicate *forbidChangShowUpload;
@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) NSHashTable *uploadButtonHandlers;
@property (retain, nonatomic) NSHashTable *albumPageSubscribers;
@property (nonatomic) BOOL updateUploadViewFadeShowNotify;
@property (readonly, nonatomic) BOOL updateSwitchModeViewFadeShowNotify;
@property (readonly, nonatomic) RACSignal *uploadVCShowedSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerUploadButtonHandler:(id)a0;
- (void)removeUploadButtonHandler:(id)a0;
- (BOOL)handleUploadButtonIfNeeded;
- (void)updateUploadViewShowWithFade:(BOOL)a0;
- (void)updateCoverImage:(id)a0;
- (void)willOpenAlbumPage;
- (void)didCloseAlbumPage;
- (void)sendUploadVCShowedSignal;
- (void)prepareLoadResource;
- (void)sendViewDidAppearSignal;
- (void)sendCameraStartRenderSignal;
- (id)viewDidAppearSignal;
- (id)cameraStartRenderSignal;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addSubscriber:(id)a0;

@end
