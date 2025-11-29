@class NSString;

@interface AWEStudioPublishServiceImpl : HTSService <AWEStudioPublishServiceDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEStudioDOUYINSSAdapterClass;
+ (Class)aAWEStudioPublishAwemeAdapterClass;

- (BOOL)isTeenMode;
- (BOOL)isHotUser;
- (BOOL)shouldMuteDownloadWithMusic:(id)a0;
- (void)showMuteDownloadAlertWithConfirmHandler:(id /* block */)a0 cancelHandler:(id /* block */)a1 logParams:(id)a2;
- (void)tapticEngineManagerTap;
- (void)tapticEngineManagerNotifySuccess;
- (void)tapticEngineManagerNotifyFailure;
- (BOOL)enableHashtag;
- (void)requestPublishRecommendHashTagsWithParams:(id)a0 completion:(id /* block */)a1;
- (void)hashtagInputSuggestionAdtrackWithExtra:(id)a0 inputSuggestionModel:(id)a1;
- (void)updateSettingSyncWithStatus:(BOOL)a0;
- (BOOL)isBindedToutiao;
- (id)getIMSettingModel;
- (id)newAwemeModel;
- (void)savePublishedAwemeIfNeeded:(id)a0 publishModel:(id)a1 completion:(id /* block */)a2;
- (void)sharePublishedAwemeIfNeeded:(id)a0 publishModel:(id)a1;
- (void)saveVideoIfNeededWithURL:(id)a0 metadata:(id)a1 outputURL:(id)a2 saveToAlbum:(BOOL)a3 needsURLAsset:(BOOL)a4 copyToSandbox:(BOOL)a5 completion:(id /* block */)a6;
- (id)feedLogPassbackWithReferString:(id)a0;
- (void)setLogPassback:(id)a0 referString:(id)a1;
- (id)image:(id)a0 ResizeToSize:(struct CGSize { double x0; double x1; })a1;
- (void)landingToSkylightWithTask:(id)a0;
- (BOOL)commonConfigShouldLandingFamiliarTab;
- (BOOL)commonConfigFamiliarTabInHomepage;
- (BOOL)enableShowPrivateOption;
- (id)customAppPublishLandingTab;
- (id)aAWEStudioDOUYINSSAdapter;
- (id)aAWEStudioPublishAwemeAdapter;
- (void)saveLivePhotoWithVideoFilePath:(id)a0 imageFilePath:(id)a1 livePhotoImagePosition:(double)a2 metadata:(id)a3 completion:(id /* block */)a4;
- (id)deviceID;

@end
