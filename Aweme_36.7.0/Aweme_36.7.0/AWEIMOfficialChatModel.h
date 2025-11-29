@class AWENotificationModelNew;

@interface AWEIMOfficialChatModel : AWEIMChatModel

@property (nonatomic) BOOL isChallenge;
@property (nonatomic) BOOL isFoldable;
@property (nonatomic) long long deleteTime;
@property (nonatomic) long long hiddenTime;
@property (retain, nonatomic) AWENotificationModelNew *noticeModel;
@property (nonatomic) long long subsetScene;

- (void)dealloc;
- (id)fansDisplayName;
- (id)as_displayNickname;
- (id)as_displayNicknameForType:(long long)a0;
- (id)interactionNoticeDisplyName;
- (long long)fakeNoticeChatModelType;
- (void).cxx_destruct;

@end
