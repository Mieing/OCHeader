@interface AWESlidesDraftAdapter : NSObject

+ (void)upgradeLivePhotoModelIfNeed:(id)a0;
+ (void)setSubMediaTypeIfNeededWithPublishViewModel:(id)a0;
+ (void)adaptSlidesDraftIfNeed:(id)a0 draft:(id)a1 completion:(id /* block */)a2;
+ (void)copyFromAWERepoUploadInfomationModel:(id)a0 toACCRepoLivePhotoInfoInstanceModel:(id)a1;
+ (void)degradeLivePhotoModelIfNeed:(id)a0 draft:(id)a1 completion:(id /* block */)a2;

@end
