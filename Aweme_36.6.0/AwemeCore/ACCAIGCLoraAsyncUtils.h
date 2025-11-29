@class NSString;

@interface ACCAIGCLoraAsyncUtils : NSObject <ACCAIGCLoraAsyncUtilsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)dismissLoading;
+ (void)showLoading:(id)a0;
+ (unsigned long long)getAIPropType:(id)a0 repoAIGCSync:(id)a1;
+ (void)setupLoraAsyncPassInfoIfNeededWithRepoContainer:(id)a0;
+ (BOOL)isHitLoraAsyncAllInSyncWithRepoContainer:(id)a0;
+ (long long)getEffectSettingTimeConsumingWithPublishViewModel:(id)a0;
+ (BOOL)isHasLoraProfile;
+ (id)getPublishViewModel;
+ (void)currentIsAILoraWithPublishViewModel:(id)a0 completion:(id /* block */)a1;
+ (void)startLoraPipelineWithPublishViewModel:(id)a0 loraType:(unsigned long long)a1 enterBlock:(id /* block */)a2 dismissBlock:(id /* block */)a3;
+ (void)updatePublishViewModel:(id)a0;
+ (void)trackCreateLora;
+ (BOOL)enableLoraAsyncAllInSync;
+ (void)getLoraInfoWithParam:(id)a0 needOriginImage:(BOOL)a1 loraInfoResult:(id /* block */)a2;
+ (id)personInfoFromLoraListWithLoraId:(id)a0;
+ (BOOL)canGoNextStep;
+ (id)getProfileImageModelFromCache:(id)a0;
+ (id)getGuideHalfViewController;
+ (void)dismissGuideHalfViewController;
+ (void)updateAvatarWithConfig:(id)a0 profileInfo:(id)a1;
+ (id)getLoraPersonInfo:(id)a0 publishViewModel:(id)a1;
+ (id)compatibleOriginalImages:(id)a0;
+ (void)jumpToVideoEditWithPublishViewModel:(id)a0;
+ (void)showLoading;


@end
