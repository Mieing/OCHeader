@class NSString;

@interface IESIMSharePlayRemoteContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_trackShow;
- (void)p_createPresenter;
- (void)p_reopenPlayRemoteRoom;
- (void)didTapCard;
- (id)subtitleAttrString;
- (void)p_tryRefreshRoomStatus;
- (id)p_inviteFriendRoomIsOverKey;
- (id)p_inviteFriendLinkDaysKey;
- (id)p_inviteFriendLinkIntervalKey;
- (void)p_refreshTexts;
- (void)p_requestRoomInfo;
- (void)p_trackRecEnter;
- (void)p_trackPlay;
- (id)p_roomPrivacyStatus;
- (id)titleText;
- (id)displayMessage;
- (id)message;

@end
