@class NSString;

@interface AWEGuestCommonFeedController : AWEBaseController <AWEFeedControllerProtocol, AWEGuestModeMessage, AWEUserMessage>

@property (nonatomic) BOOL guestInteractedFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)guestDidFinishFollowUser:(id)a0 isUnfollow:(BOOL)a1;
- (void)guestDidDiggAweme:(id)a0 isUndigg:(BOOL)a1;
- (id)init;
- (void)dealloc;
- (void)setupNotifications;

@end
