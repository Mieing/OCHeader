@class NSString;

@interface RTVSettingsManagerIMP : NSObject <AWEAppAwemeSettingMessage, RTVSettingsManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awemeSettingDidChange;
- (void)rxAwakeFromPropertyInjection;
- (id)settingsForKey:(id)a0 defaultValue:(id)a1;
- (id)awemeSettingsForKey:(id)a0 defaultValue:(id)a1;
- (id)awemeSettingsForABKey:(id)a0 defaultABValue:(id)a1;
- (id)byteSettingsForKey:(id)a0 defaultValue:(id)a1;
- (id)defaultUserAvatar;
- (BOOL)enableQuickBackToFeed;
- (BOOL)enableInteractionFeedWindow;
- (BOOL)enableInteractionWindowTapControl;
- (BOOL)enableStickerPanelUpgrade;
- (BOOL)supportInviteOutsideUser;
- (BOOL)enableCoPlayAddReportEntrance;
- (BOOL)enableCoPlayMsgNotToChat;
- (BOOL)enableCoPlayCancelCreatreGroupAutomatic;
- (BOOL)enableCoPlayInvitePanelDataOpt;
- (BOOL)enableCoPlayOtherOpt;
- (BOOL)enableFixedCreateGroupEntrance;
- (BOOL)enableCreateGroupAndInviteEntrance;
- (long long)createGroupAndInviteEntranceLimitCount;
- (void)dealloc;
- (id)settingsForKey:(id)a0;

@end
