@class NSString;

@interface AWEIMMultiTargetAdapterImplDefault : NSObject <AWEIMMultiTargetAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (BOOL)shouldStartIMWhenAppLaunch;
- (id)additionalNoticePluginNamesWithNoticeType:(long long)a0;
- (void)modifyTopBannerComponentList:(id)a0;
- (void)modifyHeaderComponentList:(id)a0;
- (void)modifyConversationMainComponentList:(id)a0;
- (void)modifyConversationUserRelationComponentList:(id)a0;
- (void)modifyConversationStrangerComponentList:(id)a0;
- (void)modifyConversationChatLimitComponentList:(id)a0;
- (void)modifyUserMessageTemplateComponentList:(id)a0;
- (void)modifyMessageTabPopupViewComponentList:(id)a0;
- (void)modifyGroupTopFloatComponentList:(id)a0;
- (void)modifyChatCellComponentList:(id)a0;
- (void)modifyConversationBottomFloatingTipsComponentList:(id)a0;
- (void)modifyMessageListNaviBarComponentList:(id)a0;
- (void)modifyConversationRelationshipComponentList:(id)a0;
- (void)modifyConversationThirdPartyComponentList:(id)a0;
- (BOOL)shouldNotShowFansAndInteractiveGroup;
- (BOOL)enableHiHiFeature;
- (BOOL)enableHiHiUpgrade;
- (BOOL)socialSHLEnable;
- (BOOL)enableHiHi3630Feature;
- (BOOL)enableThirdPartyBoxFeature;
- (void)onClickHiHiBoxWithChat:(id)a0;
- (BOOL)shouldStrangerUIOpt;
- (BOOL)showChatCellHiHiTag;
- (BOOL)enableHiHiTagClick;
- (BOOL)shouldFilterHiHiChatInStrangerBox;
- (BOOL)shouldShowHighlightHintInStrangerBox;
- (BOOL)shouldShowNaviBarFollowWithContext:(id)a0;
- (id)customPlaceholderColor;
- (BOOL)shouldTrackMountainSandSeasTag;
- (void)popViewControllerAndDismissBottomFloatingViewWithContext:(id)a0 shouldDismiss:(BOOL)a1;
- (BOOL)shouldAddHiHiConversationExtWithPeerUserID:(id)a0;
- (void)addHiHiMessageExt:(id)a0;
- (BOOL)enableStrangerChatOpt;
- (BOOL)enableHiHiSenderNotice;
- (BOOL)im_shouldCheckAweme:(id)a0 withReferString:(id)a1;
- (BOOL)enableMixPhotoElementUseJumpScheme;
- (void)transformChatSchemeParameterDict:(id)a0;
- (id)defaultDowngradeMessageList;
- (id)defaultDowngradeNoticeList;
- (id)discoveryVCNames;
- (BOOL)shouldUserRoleTagTransferToEnterpriseCertificationPage;
- (BOOL)shouldUseCustomOpenPermissionActionWithStyle:(unsigned long long)a0;
- (void)customOpenPermissionActionWithStyle:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)modifyChatListForceInsertChatComponentList:(id)a0;
- (void)modifyMessageTabModeComponentList:(id)a0;
- (id)getMessageTabMyQRCodePlusButtonModelWithContext:(id)a0;
- (BOOL)shouldUseServiceConfigInMessageTabPlusList;
- (void)modifyNaviBarOriginalComponentArrayIfNeeded:(id)a0;
- (void)modifyChatListHomePageComponentList:(id)a0;
- (id)customJobDataHost;
- (long long)officialNoticeOnSideBarNoticeGroupId;
- (id)overrideCheckPushPermissionIsOnWithStyle:(unsigned long long)a0;
- (void)customTrackPushGuideActionWithStyle:(unsigned long long)a0 event:(unsigned long long)a1;
- (void)willDealNotificationMessageSchemeWithParams:(id)a0;
- (id)unsupportedFeatureEntriesDefaultValue;
- (BOOL)shouldPOIViewShowDetailButton;
- (BOOL)shouldPOIViewShowTabBar;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
