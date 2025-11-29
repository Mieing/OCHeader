@class NSArray, AWEStudio25StoryResourceLoadView, NSString;

@interface AWEProfileAvatarTemplatePostService : HTSService <AWEProfileAvatarTemplatePostServiceProtocol>

@property (retain, nonatomic) NSArray *allTemplateModels;
@property (retain, nonatomic) AWEStudio25StoryResourceLoadView *resourceLoadView;
@property (copy, nonatomic) id /* block */ downloadLoadingFinishActionBlock;
@property (nonatomic) BOOL isShowLoadingStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissLoadingView;
- (BOOL)isEnableUserAvatarPostStoryStatus;
- (BOOL)isEnableShowSnackbarStatus;
- (BOOL)isEnableChangeAvatarCropPageStatus;
- (long long)snackBarStyle;
- (BOOL)isEnableProfileAvatarOptStatus;
- (void)preloadTemplate:(id /* block */)a0;
- (id)startCameraOnlyWithTemplate:(id)a0 photo:(id)a1;
- (id)socialCameraCustomConfiguration;
- (void)showLoadingViewWithPhoto:(id)a0 retryCompleteHandler:(id /* block */)a1 completeHandler:(id /* block */)a2;
- (void)updateRealProgress:(double)a0;
- (id)getResourceLoadView;
- (id)changeAvatarPostNotificationName;
- (void)updateLastAvatarPhoto:(id)a0;
- (void)cancelLoadingView;
- (BOOL)isAvatarPublishStoryEditTemplateListAutoExpandStatus;
- (void).cxx_destruct;
- (void)updateProgress:(double)a0;

@end
