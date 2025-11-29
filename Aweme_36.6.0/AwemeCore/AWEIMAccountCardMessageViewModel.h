@interface AWEIMAccountCardMessageViewModel : AWEIMMessageViewModel

- (void)__roleViewClickTrack;
- (void)p_transferToProfileWithUserID:(id)a0 secUserID:(id)a1 additionalParams:(id)a2;
- (void)p_trackEnterPersonalDetail:(id)a0;
- (void)willDisplayByMessageVisibleLifeCycle;
- (void)__roleViewShowTrack;
- (void)didEndDisplayingByMessageVisibleLifeCycle;
- (void)__roleViewTrackWithEvent:(id)a0;
- (id)verifyIconImage;
- (void)handleRoleViewTapped;
- (void)transferToIdentify;
- (void)transToUserProfile;
- (id)__toEnterpriseRoleId;
- (id)nameFont;
- (id)nameColor;

@end
