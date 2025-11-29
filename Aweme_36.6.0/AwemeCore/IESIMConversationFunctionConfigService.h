@class NSString;

@interface IESIMConversationFunctionConfigService : HTSService <IESIMConversationFunctionConfigService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)allowUseEmojiConfig;
- (id)supportedMessageTypes;
- (BOOL)shouldCustomDegradationWithMsgType:(long long)a0 aweType:(long long)a1;
- (id)customDowngradeInfoWithMsgType:(long long)a0 aweType:(long long)a1;
- (BOOL)forbidNoticeLinkAction;
- (BOOL)forbidFetchJoinGroupApplyEntrance;
- (BOOL)forbidFetchOfficialChatData;
- (BOOL)forbidFetchLiveConsult;
- (id)customSupportMessageMenuItemList;
- (id)customSupportPlusPanelItemList;
- (BOOL)fobidInputVCLeftButtons;
- (BOOL)hideMemberMenegement;
- (BOOL)disablePhotoEditMod;
- (BOOL)useVacantViewStyle;
- (id)customSupportCompanyTextActionTypes;
- (BOOL)enableCustomEnterFromByRouterParam;
- (BOOL)enableChatListFPSEventTracker;
- (BOOL)needAddRawParamsForMessageShowEvent;
- (BOOL)shouldGetTopVCFromTabbar;
- (BOOL)enableMessageVCLeftSlideEnter;
- (BOOL)shouldShowToastWhenChatIsForbidden;
- (BOOL)shouldForbidWebViewTransition;
- (BOOL)shouldDisableChatEmptySubtile;
- (BOOL)shouldDisableCommonAnchor;
- (BOOL)shouldDisablePOIAnchor;
- (BOOL)shouldDisableShootSameFunc;
- (BOOL)shouldDisableEmojiSeries;
- (BOOL)shouldSaveDBForIMUserRoleIDsFromSpolightRelation;
- (BOOL)enableAudioTranslate;

@end
