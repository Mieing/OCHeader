@interface DYASyncToutiaoProfileService : NSObject

+ (void)checkCanShowSyncProfileAlertCompletion:(id /* block */)a0;
+ (void)setSyncToutiaoProfile:(BOOL)a0 completion:(id /* block */)a1;
+ (void)getSyncToutiaoProfileCompletion:(id /* block */)a0;
+ (void)setSyncToutiaoProfile:(BOOL)a0 completionWithModel:(id /* block */)a1;
+ (void)setSyncToutiaoProfileName:(id)a0 ticket:(id)a1 completion:(id /* block */)a2;

@end
