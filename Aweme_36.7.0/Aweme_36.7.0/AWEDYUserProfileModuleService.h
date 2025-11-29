@interface AWEDYUserProfileModuleService : AWEUserProfileModuleService

- (void)showProfileHeaderActionControllerWithUser:(id)a0 params:(id)a1 unfollowConfirmationBlock:(id /* block */)a2;
- (void)showLocationEditLocationFromH5:(id /* block */)a0;
- (void)directShowAvatarPickerWithEnterFrom:(id)a0 isFirstReplace:(BOOL)a1 enablePublishAvatarStory:(BOOL)a2 trackInfo:(id)a3;
- (BOOL)isNewProfileUIStyle;
- (Class)aweUserDetailViewControllerClass;
- (Class)aweUserHomeViewControllerClass;
- (id)profileHeaderActionController;
- (id)locationDisplayTextGenerator;

@end
