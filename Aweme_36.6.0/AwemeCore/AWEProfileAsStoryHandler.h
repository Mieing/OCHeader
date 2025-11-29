@interface AWEProfileAsStoryHandler : NSObject

+ (void)createStoryFromProfileWithSignatureContent:(id)a0 publishButtonTitle:(id)a1 publishButtonClickBlock:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)createStoryFromProfileWithAvatarImage:(id)a0 originImage:(id)a1 userDisplayName:(id)a2 hashTag:(id)a3 leftEffectId:(id)a4 rightEffectId:(id)a5 unmodifiablePublishParams:(id)a6 referString:(id)a7 enterFrom:(id)a8 directPublish:(BOOL)a9 showLoading:(BOOL)a10 landingAfterPublish:(BOOL)a11 beforeEditPublish:(id /* block */)a12 completion:(id /* block */)a13;

@end
