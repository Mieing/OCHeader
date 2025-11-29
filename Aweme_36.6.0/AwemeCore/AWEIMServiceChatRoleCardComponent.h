@class NSString;

@interface AWEIMServiceChatRoleCardComponent : AWEIMFlexComponent <AWEIMMessageContentInterface, AWEIMFloatingViewEvent>

@property (nonatomic) BOOL followFloatViewDisplaying;
@property (nonatomic) BOOL hasShow;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellVisibleLifeCycleChanged:(unsigned long long)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)handleFollowedNotification:(id)a0;
- (void)handleUnFollowedNotification:(id)a0;
- (void)p_transferToProfileWithUserID:(id)a0 secUserID:(id)a1 additionalParams:(id)a2;
- (void)transferToIdentify;
- (void)transToUserProfile;
- (void)willShowFloattingView:(id)a0;
- (void)willDismissFloattingView:(id)a0;
- (void)onFollowBtnClicked:(id /* block */)a0;
- (BOOL)enableUseHighQualityMerchants;
- (void)trackHighQualityMerchantsCardShow:(id)a0;
- (id)displayMessage;
- (void)dealloc;

@end
