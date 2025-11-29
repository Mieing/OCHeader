@class NSString;

@interface IESLivePKGuestInteractSettingHandler : NSObject <IESLivePKGuestInteractSettingsAction>

@property (nonatomic) BOOL bigPartyModeEnable;
@property (nonatomic) BOOL enableAdminRight;
@property (nonatomic) BOOL acceptNeedVerified;
@property (nonatomic) BOOL acceptOnlyFollower;
@property (nonatomic) BOOL acceptGuestGift;
@property (nonatomic) BOOL startPending;
@property (nonatomic) BOOL cameraModeEnable;
@property (nonatomic) BOOL guestLinkWithVideoByDefault;
@property (nonatomic) BOOL enableAudienceLinkMic;
@property (nonatomic) BOOL enableAudiencePreapply;
@property (nonatomic) BOOL audienceMustLinkMicByInvitation;
@property (nonatomic) BOOL guestLinkMuteByDefault;
@property (nonatomic) BOOL isMute;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL isBigPartyMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)supportOpenCamera;
- (id)incrementalUpdate:(int)a0 on:(BOOL)a1;
- (BOOL)getBoolValue:(id)a0;
- (void)fetchPKInteractiveSettingsWithCompletion:(id /* block */)a0 isLocalData:(BOOL)a1;
- (void)updatePKInteractiveSettingType:(unsigned long long)a0 on:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)adminRightChangeWhenAdminModeEnable;
- (void)audienceRegisterMessageHandlers;
- (void)registerMessageHandlersForIntimateChat;
- (BOOL)needGetSetting:(id)a0;
- (id)buildSettings;
- (id)pr_generateAuthorityCellsData;
- (BOOL)enableAdminRightSwitch;
- (BOOL)isAdmin;

@end
